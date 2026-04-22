"""Nodo base de coordinación global de misión para la Raspberry maestra."""

from __future__ import annotations

import time
from functools import partial

import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from atm_interfaces.action import ExecuteMission
from atm_interfaces.msg import FaultReport, Heartbeat, LineTarget, MissionEvent, MissionState, SlaveStatus
from atm_interfaces.srv import (
    ArmSystem,
    EmergencyStop,
    GetSystemState,
    ResetFault,
    SetAdmissionReelMode,
    StartPump,
    StopPump,
)


class MissionManagerNode(Node):
    """Gestor global de estados de misión."""

    def __init__(self) -> None:
        super().__init__("mission_manager")

        self.declare_parameter("machine_id", "master")
        self.declare_parameter("default_mission_type", "GENERAL_STOP_MISSION")
        self.declare_parameter("startup_state", "IDLE")
        self.declare_parameter("execute_feedback_period_sec", 0.5)
        self.declare_parameter("reel_unroll_speed", 1.0)
        self.declare_parameter("reel_roll_speed", 1.0)
        self.declare_parameter("heartbeat_timeout_sec", 5.0)
        self.declare_parameter("link_check_period_sec", 0.5)

        self.machine_id = self.get_parameter("machine_id").value
        self.mission_id = ""
        self.mission_type = self.get_parameter("default_mission_type").value
        self.state = self.get_parameter("startup_state").value
        self.current_stop_index = 0
        self.current_line_id = ""
        self.comms_degraded = False
        self.system_armed = False
        self.feedback_period = float(self.get_parameter("execute_feedback_period_sec").value)
        self.heartbeat_timeout = float(self.get_parameter("heartbeat_timeout_sec").value)

        self.slave_state = "UNKNOWN"
        self.slave_at_base = False
        self.slave_link_ok = False
        self.last_slave_heartbeat_ns = self.get_clock().now().nanoseconds
        self.active_goal_handle = None
        self.goal_cancel_requested = False
        self.return_home_command_sent = False
        self.emergency_stop_requested = False
        self.mission_fault = None
        self.mission_finished = False
        self.callback_group = ReentrantCallbackGroup()
        self.reel_unroll_speed = float(self.get_parameter("reel_unroll_speed").value)
        self.reel_roll_speed = float(self.get_parameter("reel_roll_speed").value)
        self.current_reel_mode = "STOP"
        self.current_reel_speed = 0.0
        self.current_hose_guide_mode = "STOP"
        self.current_hose_guide_speed = 0.0

        self.state_pub = self.create_publisher(MissionState, "mission/state", 10)
        self.event_pub = self.create_publisher(MissionEvent, "mission/events", 20)
        self.link_target_pub = self.create_publisher(LineTarget, "link/outgoing/mission_target", 20)
        self.link_event_pub = self.create_publisher(MissionEvent, "link/outgoing/mission_event", 20)
        self.start_pump_client = self.create_client(StartPump, "master/start_pump")
        self.stop_pump_client = self.create_client(StopPump, "master/stop_pump")
        self.reel_client = self.create_client(SetAdmissionReelMode, "master/set_admission_reel_mode")
        self.hose_guide_client = self.create_client(SetAdmissionReelMode, "master/set_hose_guide_mode")

        self.create_subscription(
            Heartbeat,
            "link/slave_heartbeat",
            self.handle_slave_heartbeat,
            20,
            callback_group=self.callback_group,
        )
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
        self.create_service(EmergencyStop, "mission/emergency_stop", self.handle_emergency_stop)
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
        self.link_timer = self.create_timer(
            float(self.get_parameter("link_check_period_sec").value),
            self.check_slave_link,
        )

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

        if self.emergency_stop_requested:
            self.state = "EMERGENCY_STOP"
        elif self.comms_degraded:
            self.state = "DEGRADED_COMMS"
        elif msg.state == "RETURNING":
            self.state = "RETURNING_HOME"
        elif msg.state in {"MOVING", "STOP_CONFIRMED", "LOWERING_ATOMIZER", "SPRAYING_ASCENT"}:
            self.state = "EXECUTING"

        self.sync_reel_with_slave_state(msg.state)

    def handle_slave_heartbeat(self, _msg: Heartbeat) -> None:
        self.last_slave_heartbeat_ns = self.get_clock().now().nanoseconds
        self.slave_link_ok = True

    def handle_link_event(self, msg: MissionEvent) -> None:
        if msg.event_type == "return_completed":
            if self.emergency_stop_requested:
                self.state = "EMERGENCY_STOP"
            elif self.comms_degraded:
                self.state = "DEGRADED_COMMS"
            elif not self.goal_cancel_requested and self.mission_fault is None:
                self.state = "COMPLETED"
            else:
                self.state = "IDLE"
            self.mission_finished = True
        elif msg.event_type == "return_started":
            if self.emergency_stop_requested:
                self.state = "EMERGENCY_STOP"
            elif self.comms_degraded:
                self.state = "DEGRADED_COMMS"
            else:
                self.state = "RETURNING_HOME"
        elif msg.event_type == "pump_on_request":
            self.handle_pump_request(enable=True, source_event=msg)
        elif msg.event_type == "pump_off_request":
            self.handle_pump_request(enable=False, source_event=msg)

    def handle_fault_report(self, msg: FaultReport) -> None:
        self.mission_fault = msg
        self.state = "FAULT"
        self.comms_degraded = False
        self.sync_reel("STOP", 0.0)
        self.call_stop_pump(ack_event_type=None)
        self.publish_event("fault_detected", f"{msg.fault_code}: {msg.description}")

    def handle_goal(self, goal_request: ExecuteMission.Goal) -> GoalResponse:
        if not self.system_armed:
            self.get_logger().warning("Rechazando misión: sistema no armado.")
            return GoalResponse.REJECT
        if len(goal_request.line_ids) != len(goal_request.stop_indices):
            self.get_logger().warning("Rechazando misión: line_ids y stop_indices no tienen la misma longitud.")
            return GoalResponse.REJECT
        if goal_request.target_line_ids and len(goal_request.target_line_ids) != len(goal_request.line_ids):
            self.get_logger().warning(
                "Rechazando misión: target_line_ids y line_ids no tienen la misma longitud."
            )
            return GoalResponse.REJECT
        if self.active_goal_handle is not None:
            self.get_logger().warning("Rechazando misión: ya existe una misión en curso.")
            return GoalResponse.REJECT
        if self.state in {"FAULT", "EMERGENCY_STOP", "DEGRADED_COMMS"}:
            self.get_logger().warning(f"Rechazando misión: sistema en estado {self.state}.")
            return GoalResponse.REJECT
        return GoalResponse.ACCEPT

    def handle_cancel(self, _goal_handle) -> CancelResponse:
        self.goal_cancel_requested = True
        self.publish_event("mission_cancelled", "Cancelación solicitada desde cliente de acción.")
        return CancelResponse.ACCEPT

    def check_slave_link(self) -> None:
        now_ns = self.get_clock().now().nanoseconds
        delta_sec = (now_ns - self.last_slave_heartbeat_ns) / 1e9
        link_ok = delta_sec <= self.heartbeat_timeout
        self.slave_link_ok = link_ok

        if link_ok or self.comms_degraded or self.emergency_stop_requested or self.mission_fault is not None:
            return

        if self.active_goal_handle is None:
            return

        self.comms_degraded = True
        self.state = "DEGRADED_COMMS"
        self.sync_reel("STOP", 0.0)
        self.call_stop_pump(ack_event_type=None)
        self.publish_event(
            "link_degraded",
            f"Heartbeat de esclava perdido durante {delta_sec:.1f}s; degradación de comunicaciones.",
        )
        if not self.return_home_command_sent:
            self.return_home_command_sent = True
            self.publish_event("return_home", "Comunicaciones degradadas: retorno seguro solicitado.")

    def publish_targets(
        self,
        gap_ids: list[str],
        target_line_ids: list[str],
        stop_indices: list[int],
        mission_type: str,
    ) -> None:
        if target_line_ids:
            target_lines = target_line_ids
        else:
            target_lines = [""] * len(gap_ids)

        for idx, (gap_id, target_line_id, stop_index) in enumerate(
            zip(gap_ids, target_lines, stop_indices, strict=True)
        ):
            target = LineTarget()
            target.mission_id = self.mission_id
            target.gap_id = gap_id
            target.line_id = target_line_id
            target.stop_index = int(stop_index)
            target.mode = mission_type
            target.selected_by_vega = mission_type == "SELECTIVE_LINE_MISSION"
            target.notes = f"target_{idx}"
            self.link_target_pub.publish(target)

    def sync_reel_with_slave_state(self, slave_state: str) -> None:
        if slave_state == "MOVING":
            self.sync_reel("UNROLL", self.reel_unroll_speed)
        elif slave_state == "RETURNING":
            self.sync_reel("ROLL", self.reel_roll_speed)
        else:
            self.sync_reel("STOP", 0.0)

    def sync_reel(self, mode: str, speed: float) -> None:
        if mode == self.current_reel_mode and abs(speed - self.current_reel_speed) < 1e-6:
            self.sync_hose_guide(mode, speed)
            return

        if self.reel_client.wait_for_service(timeout_sec=0.2):
            request = SetAdmissionReelMode.Request()
            request.mode = mode
            request.speed = float(speed)
            future = self.reel_client.call_async(request)
            future.add_done_callback(partial(self.on_reel_response, mode=mode, speed=speed))
        else:
            self.get_logger().warning("Servicio de carrete no disponible.")

        self.sync_hose_guide(mode, speed)

    def on_reel_response(self, future, mode: str, speed: float) -> None:
        try:
            response = future.result()
        except Exception as exc:
            self.get_logger().warning(f"Fallo llamando al carrete: {exc}")
            return
        if response.success:
            self.current_reel_mode = mode
            self.current_reel_speed = speed
            self.publish_event("reel_mode_changed", response.message)
        else:
            self.get_logger().warning(f"No se pudo cambiar el carrete: {response.message}")

    def sync_hose_guide(self, mode: str, speed: float) -> None:
        if mode == self.current_hose_guide_mode and abs(speed - self.current_hose_guide_speed) < 1e-6:
            return
        if not self.hose_guide_client.wait_for_service(timeout_sec=0.2):
            self.get_logger().warning("Servicio de guiado de manguera no disponible.")
            return
        request = SetAdmissionReelMode.Request()
        request.mode = mode
        request.speed = float(speed)
        future = self.hose_guide_client.call_async(request)
        future.add_done_callback(partial(self.on_hose_guide_response, mode=mode, speed=speed))

    def on_hose_guide_response(self, future, mode: str, speed: float) -> None:
        try:
            response = future.result()
        except Exception as exc:
            self.get_logger().warning(f"Fallo llamando al guiado de manguera: {exc}")
            return
        if response.success:
            self.current_hose_guide_mode = mode
            self.current_hose_guide_speed = speed
            self.publish_event("hose_guide_mode_changed", response.message)
        else:
            self.get_logger().warning(f"No se pudo cambiar el guiado: {response.message}")

    def handle_pump_request(self, enable: bool, source_event: MissionEvent) -> None:
        if enable and not self.system_armed:
            self.get_logger().warning("Solicitud de bomba ignorada: sistema no armado.")
            return
        if enable:
            self.call_start_pump(source_event.mission_id, "pump_on_ack")
        else:
            self.call_stop_pump("pump_off_ack", source_event.mission_id)

    def call_start_pump(self, mission_id: str, ack_event_type: str | None) -> None:
        if not self.start_pump_client.wait_for_service(timeout_sec=0.5):
            self.get_logger().warning("Servicio de arranque de bomba no disponible.")
            return
        request = StartPump.Request()
        request.enable = True
        future = self.start_pump_client.call_async(request)
        future.add_done_callback(
            partial(self.on_pump_response, mission_id=mission_id, ack_event_type=ack_event_type)
        )

    def call_stop_pump(self, ack_event_type: str | None, mission_id: str | None = None) -> None:
        if not self.stop_pump_client.wait_for_service(timeout_sec=0.5):
            self.get_logger().warning("Servicio de parada de bomba no disponible.")
            return
        request = StopPump.Request()
        request.stop = True
        future = self.stop_pump_client.call_async(request)
        future.add_done_callback(
            partial(
                self.on_pump_response,
                mission_id=mission_id or self.mission_id,
                ack_event_type=ack_event_type,
            )
        )

    def on_pump_response(self, future, mission_id: str, ack_event_type: str | None) -> None:
        try:
            response = future.result()
        except Exception as exc:
            self.get_logger().warning(f"Fallo llamando a la bomba: {exc}")
            return
        if not response.success:
            self.get_logger().warning(f"Bomba sin confirmar: {response.message}")
            return
        if ack_event_type is not None:
            self.publish_link_only_event(ack_event_type, response.message, mission_id)

    def publish_link_only_event(self, event_type: str, detail: str, mission_id: str) -> None:
        msg = MissionEvent()
        msg.mission_id = mission_id
        msg.event_type = event_type
        msg.source = self.get_name()
        msg.detail = detail
        msg.stamp = self.get_clock().now().to_msg()
        self.event_pub.publish(msg)
        self.link_event_pub.publish(msg)

    def execute_mission(self, goal_handle) -> ExecuteMission.Result:
        self.active_goal_handle = goal_handle
        self.goal_cancel_requested = False
        self.return_home_command_sent = False
        self.emergency_stop_requested = False
        self.mission_fault = None
        self.mission_finished = False
        self.comms_degraded = False

        self.mission_id = goal_handle.request.mission_id
        self.mission_type = goal_handle.request.mission_type
        self.current_stop_index = 0
        self.current_line_id = ""
        self.slave_state = "UNKNOWN"
        self.slave_at_base = False
        self.sync_reel("STOP", 0.0)

        self.state = "MISSION_LOADED"
        self.publish_state()
        self.publish_event("mission_loaded", f"Misión {self.mission_id} cargada en maestra.")
        self.publish_targets(
            list(goal_handle.request.line_ids),
            list(goal_handle.request.target_line_ids),
            list(goal_handle.request.stop_indices),
            self.mission_type,
        )
        self.state = "EXECUTING"
        self.publish_event("mission_dispatched", f"Se enviaron {len(goal_handle.request.line_ids)} objetivos.")

        feedback = ExecuteMission.Feedback()
        while rclpy.ok():
            if goal_handle.is_cancel_requested and not self.return_home_command_sent:
                self.goal_cancel_requested = True
                self.state = "RETURNING_HOME"
                self.sync_reel("ROLL", self.reel_roll_speed)
                self.return_home_command_sent = True
                self.publish_event("return_home", "Cancelación activa: retorno a base solicitado.")

            if self.mission_fault is not None:
                self.sync_reel("STOP", 0.0)
                self.call_stop_pump(ack_event_type=None)
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
                elif self.emergency_stop_requested or self.comms_degraded:
                    goal_handle.abort()
                else:
                    goal_handle.succeed()

                result = ExecuteMission.Result()
                result.success = not (self.goal_cancel_requested or self.emergency_stop_requested or self.comms_degraded)
                result.final_state = self.state
                if self.goal_cancel_requested:
                    result.message = "Misión cancelada y robot en base."
                elif self.emergency_stop_requested:
                    result.message = "Parada de emergencia ejecutada y robot en base."
                elif self.comms_degraded:
                    result.message = "Comunicaciones degradadas; retorno seguro completado."
                else:
                    result.message = "Misión completada y robot en base."

                self.active_goal_handle = None
                self.goal_cancel_requested = False
                self.mission_finished = False
                self.sync_reel("STOP", 0.0)
                self.call_stop_pump(ack_event_type=None)
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

    def handle_emergency_stop(
        self,
        request: EmergencyStop.Request,
        response: EmergencyStop.Response,
    ) -> EmergencyStop.Response:
        self.emergency_stop_requested = True
        self.goal_cancel_requested = False
        self.comms_degraded = False
        self.state = "EMERGENCY_STOP"
        self.sync_reel("STOP", 0.0)
        self.call_stop_pump(ack_event_type=None)
        self.publish_event(
            "emergency_stop",
            f"Parada de emergencia solicitada desde {request.source}: {request.reason}",
        )
        response.success = True
        response.message = "Parada de emergencia latched en la maestra."
        return response

    def handle_reset_fault(self, request: ResetFault.Request, response: ResetFault.Response) -> ResetFault.Response:
        if self.state not in {"FAULT", "EMERGENCY_STOP", "DEGRADED_COMMS"}:
            response.success = False
            response.message = f"No hay fallo activo que resetear. Fuente solicitada: {request.source}"
            return response

        self.state = "IDLE"
        self.comms_degraded = False
        self.emergency_stop_requested = False
        self.goal_cancel_requested = False
        self.return_home_command_sent = False
        self.mission_fault = None
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
