"""Nodo base de coordinación global de misión para la Raspberry maestra."""

from __future__ import annotations

import time

import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from atm_interfaces.action import ExecuteMission
from atm_interfaces.msg import FaultReport, LineTarget, MissionEvent, MissionState, SlaveStatus
from atm_interfaces.srv import ArmSystem, GetSystemState, ResetFault


class MissionManagerNode(Node):
    """Gestor global de estados de misión.

    Esta primera versión deja resuelta la base de ROS 2:
    - publica estado global;
    - registra eventos de misión;
    - permite armar/desarmar el sistema;
    - expone un servicio de consulta de estado;
    - deja un punto claro para colgar la lógica futura de acciones y watchdog.
    """

    def __init__(self) -> None:
        super().__init__("mission_manager")

        self.declare_parameter("machine_id", "master")
        self.declare_parameter("default_mission_type", "GENERAL_STOP_MISSION")
        self.declare_parameter("startup_state", "IDLE")
        self.declare_parameter("execute_feedback_period_sec", 0.5)

        self.machine_id = self.get_parameter("machine_id").value
        self.mission_id = ""
        self.mission_type = self.get_parameter("default_mission_type").value
        self.state = self.get_parameter("startup_state").value
        self.current_stop_index = 0
        self.current_line_id = ""
        self.comms_degraded = False
        self.system_armed = False
        self.feedback_period = float(self.get_parameter("execute_feedback_period_sec").value)

        self.slave_state = "UNKNOWN"
        self.slave_at_base = False
        self.slave_link_ok = False
        self.active_goal_handle = None
        self.goal_cancel_requested = False
        self.mission_fault = None
        self.mission_finished = False
        self.callback_group = ReentrantCallbackGroup()

        self.state_pub = self.create_publisher(MissionState, "mission/state", 10)
        self.event_pub = self.create_publisher(MissionEvent, "mission/events", 20)
        self.link_target_pub = self.create_publisher(LineTarget, "link/outgoing/mission_target", 20)
        self.link_event_pub = self.create_publisher(MissionEvent, "link/outgoing/mission_event", 20)

        self.create_subscription(
            SlaveStatus,
            "link/incoming/slave_status",
            self.handle_slave_status,
            20,
            callback_group=self.callback_group,
        )
        self.create_subscription(
            MissionEvent,
            "link/incoming/event",
            self.handle_link_event,
            20,
            callback_group=self.callback_group,
        )
        self.create_subscription(
            FaultReport,
            "link/incoming/fault",
            self.handle_fault_report,
            20,
            callback_group=self.callback_group,
        )

        self.create_service(ArmSystem, "mission/arm_system", self.handle_arm_system)
        self.create_service(ResetFault, "mission/reset_fault", self.handle_reset_fault)
        self.create_service(GetSystemState, "mission/get_system_state", self.handle_get_system_state)
        self.execute_action = ActionServer(
            self,
            ExecuteMission,
            "mission/execute",
            execute_callback=self.execute_mission,
            goal_callback=self.handle_goal,
            cancel_callback=self.handle_cancel,
            callback_group=self.callback_group,
        )

        self.state_timer = self.create_timer(0.5, self.publish_state)

        self.publish_event("system_boot", f"Mission manager inicializado en {self.machine_id}")
        self.get_logger().info("Mission manager listo.")

    def publish_state(self) -> None:
        msg = MissionState()
        msg.mission_id = self.mission_id
        msg.mission_type = self.mission_type
        msg.state = self.state
        msg.current_stop_index = self.current_stop_index
        msg.current_line_id = self.current_line_id
        msg.comms_degraded = self.comms_degraded
        msg.stamp = self.get_clock().now().to_msg()
        self.state_pub.publish(msg)

    def publish_event(self, event_type: str, detail: str) -> None:
        msg = MissionEvent()
        msg.mission_id = self.mission_id
        msg.event_type = event_type
        msg.source = self.get_name()
        msg.detail = detail
        msg.stamp = self.get_clock().now().to_msg()
        self.event_pub.publish(msg)
        self.link_event_pub.publish(msg)

    def handle_slave_status(self, msg: SlaveStatus) -> None:
        self.slave_state = msg.state
        self.slave_at_base = msg.at_base
        self.slave_link_ok = msg.link_ok
        self.current_line_id = msg.current_line_id or self.current_line_id
        self.current_stop_index = msg.current_stop_index

        if msg.state == "RETURNING":
            self.state = "RETURNING_HOME"
        elif msg.state in {"MOVING", "STOP_CONFIRMED", "LOWERING_ATOMIZER", "SPRAYING_ASCENT"}:
            self.state = "EXECUTING"

    def handle_link_event(self, msg: MissionEvent) -> None:
        if msg.event_type == "return_completed":
            self.state = "COMPLETED" if not self.goal_cancel_requested and self.mission_fault is None else "IDLE"
            self.mission_finished = True
        elif msg.event_type == "return_started":
            self.state = "RETURNING_HOME"

    def handle_fault_report(self, msg: FaultReport) -> None:
        self.mission_fault = msg
        self.state = "FAULT"
        self.publish_event("fault_detected", f"{msg.fault_code}: {msg.description}")

    def handle_goal(self, goal_request: ExecuteMission.Goal) -> GoalResponse:
        if not self.system_armed:
            self.get_logger().warning("Rechazando misión: sistema no armado.")
            return GoalResponse.REJECT
        if len(goal_request.line_ids) != len(goal_request.stop_indices):
            self.get_logger().warning("Rechazando misión: line_ids y stop_indices no tienen la misma longitud.")
            return GoalResponse.REJECT
        if self.active_goal_handle is not None:
            self.get_logger().warning("Rechazando misión: ya existe una misión en curso.")
            return GoalResponse.REJECT
        return GoalResponse.ACCEPT

    def handle_cancel(self, _goal_handle) -> CancelResponse:
        self.goal_cancel_requested = True
        self.publish_event("mission_cancelled", "Cancelación solicitada desde cliente de acción.")
        return CancelResponse.ACCEPT

    def publish_targets(self, line_ids: list[str], stop_indices: list[int], mission_type: str) -> None:
        for idx, (line_id, stop_index) in enumerate(zip(line_ids, stop_indices, strict=True)):
            target = LineTarget()
            target.mission_id = self.mission_id
            target.line_id = line_id
            target.stop_index = int(stop_index)
            target.mode = mission_type
            target.selected_by_vega = mission_type == "SELECTIVE_LINE_MISSION"
            target.notes = f"target_{idx}"
            self.link_target_pub.publish(target)

    def execute_mission(self, goal_handle) -> ExecuteMission.Result:
        self.active_goal_handle = goal_handle
        self.goal_cancel_requested = False
        self.mission_fault = None
        self.mission_finished = False

        self.mission_id = goal_handle.request.mission_id
        self.mission_type = goal_handle.request.mission_type
        self.current_stop_index = 0
        self.current_line_id = ""
        self.slave_state = "UNKNOWN"
        self.slave_at_base = False

        self.state = "MISSION_LOADED"
        self.publish_state()
        self.publish_event("mission_loaded", f"Misión {self.mission_id} cargada en maestra.")
        self.publish_targets(
            list(goal_handle.request.line_ids),
            list(goal_handle.request.stop_indices),
            self.mission_type,
        )
        self.state = "EXECUTING"
        self.publish_event("mission_dispatched", f"Se enviaron {len(goal_handle.request.line_ids)} objetivos.")

        feedback = ExecuteMission.Feedback()
        while rclpy.ok():
            if goal_handle.is_cancel_requested:
                self.goal_cancel_requested = True
                self.state = "RETURNING_HOME"
                self.publish_event("return_home", "Cancelación activa: retorno a base solicitado.")

            if self.mission_fault is not None:
                goal_handle.abort()
                result = ExecuteMission.Result()
                result.success = False
                result.final_state = self.state
                result.message = self.mission_fault.description
                self.active_goal_handle = None
                return result

            feedback.current_phase = self.state
            feedback.current_stop_index = self.current_stop_index
            feedback.current_line_id = self.current_line_id
            goal_handle.publish_feedback(feedback)

            if self.mission_finished:
                if self.goal_cancel_requested:
                    goal_handle.canceled()
                else:
                    goal_handle.succeed()

                result = ExecuteMission.Result()
                result.success = not self.goal_cancel_requested
                result.final_state = self.state
                result.message = (
                    "Misión cancelada y robot en base."
                    if self.goal_cancel_requested
                    else "Misión completada y robot en base."
                )

                self.active_goal_handle = None
                self.goal_cancel_requested = False
                self.mission_finished = False
                return result

            time.sleep(self.feedback_period)

    def handle_arm_system(self, request: ArmSystem.Request, response: ArmSystem.Response) -> ArmSystem.Response:
        self.system_armed = request.arm
        if request.arm:
            self.state = "READY"
            response.message = "Sistema armado y listo para misión."
            self.publish_event("system_armed", response.message)
        else:
            self.state = "IDLE"
            response.message = "Sistema desarmado."
            self.publish_event("system_disarmed", response.message)
        response.success = True
        return response

    def handle_reset_fault(self, request: ResetFault.Request, response: ResetFault.Response) -> ResetFault.Response:
        if self.state != "FAULT":
            response.success = False
            response.message = f"No hay fallo activo que resetear. Fuente solicitada: {request.source}"
            return response

        self.state = "IDLE"
        self.comms_degraded = False
        response.success = True
        response.message = f"Fallo reseteado desde {request.source}: {request.reason}"
        self.publish_event("fault_reset", response.message)
        return response

    def handle_get_system_state(
        self,
        request: GetSystemState.Request,
        response: GetSystemState.Response,
    ) -> GetSystemState.Response:
        response.success = True
        response.master_state = self.state
        response.slave_state = self.slave_state
        response.mission_id = self.mission_id
        if request.verbose:
            response.detail = (
                f"armed={self.system_armed}, mission_type={self.mission_type}, "
                f"stop_index={self.current_stop_index}, line_id={self.current_line_id}, "
                f"comms_degraded={self.comms_degraded}, slave_state={self.slave_state}, "
                f"slave_at_base={self.slave_at_base}, slave_link_ok={self.slave_link_ok}"
            )
        else:
            response.detail = self.state
        return response


def main() -> None:
    rclpy.init()
    node = MissionManagerNode()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        executor.shutdown()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
