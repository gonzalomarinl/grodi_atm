"""Coordinador local de estado y misión de la esclava."""

from __future__ import annotations

from collections import deque

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from atm_interfaces.action import NavigateToStop, ReturnToBase, SprayAtStop
from atm_interfaces.msg import FaultReport, Heartbeat, LineTarget, MissionEvent, MissionState, SlaveStatus


class SlaveStateManagerNode(Node):
    """Coordina la ejecución local de la misión en la esclava."""

    def __init__(self) -> None:
        super().__init__("slave_state_manager")

        self.declare_parameter("machine_id", "slave")
        self.declare_parameter("status_period_sec", 0.5)
        self.declare_parameter("control_period_sec", 0.2)
        self.declare_parameter("startup_state", "AT_BASE")
        self.declare_parameter("max_stop_retries", 3)
        self.declare_parameter("max_skipped_waypoints", 3)

        self.machine_id = self.get_parameter("machine_id").value
        self.state = self.get_parameter("startup_state").value
        self.mission_id = ""
        self.mission_type = ""
        self.current_line_id = ""
        self.current_stop_index = 0
        self.at_base = self.state == "AT_BASE"
        self.moving = False
        self.atomizer_up = True
        self.atomizer_down = False
        self.link_ok = False
        self.last_master_heartbeat = 0.0
        self.max_stop_retries = int(self.get_parameter("max_stop_retries").value)
        self.max_skipped_waypoints = int(self.get_parameter("max_skipped_waypoints").value)

        self.mission_loaded = False
        self.return_requested = False
        self.action_in_progress = False
        self.current_phase = "IDLE"
        self.active_target: LineTarget | None = None
        self.pending_targets: deque[LineTarget] = deque()
        self.active_target_retry_count = 0
        self.skipped_target_count = 0

        self.status_pub = self.create_publisher(SlaveStatus, "slave/status", 20)
        self.event_pub = self.create_publisher(MissionEvent, "mission/events", 20)
        self.fault_pub = self.create_publisher(FaultReport, "system/faults", 20)

        self.create_subscription(MissionState, "slave/incoming/mission_state", self.handle_mission_state, 20)
        self.create_subscription(LineTarget, "slave/incoming/mission_target", self.handle_mission_target, 20)
        self.create_subscription(MissionEvent, "slave/incoming/mission_event", self.handle_mission_event, 20)
        self.create_subscription(Heartbeat, "link/master_heartbeat", self.handle_master_heartbeat, 20)
        self.create_subscription(MissionEvent, "slave/events/vertical", self.handle_vertical_event, 20)

        self.navigate_client = ActionClient(self, NavigateToStop, "slave/navigate_to_stop")
        self.spray_client = ActionClient(self, SprayAtStop, "slave/spray_at_stop")
        self.return_client = ActionClient(self, ReturnToBase, "slave/return_to_base")

        self.create_timer(float(self.get_parameter("status_period_sec").value), self.publish_status)
        self.create_timer(float(self.get_parameter("control_period_sec").value), self.control_loop)

        self.publish_event("slave_boot", "State manager inicializado.")
        self.get_logger().info("Slave state manager listo.")

    def handle_mission_state(self, msg: MissionState) -> None:
        self.mission_id = msg.mission_id
        self.mission_type = msg.mission_type
        if msg.state == "MISSION_LOADED":
            self.mission_loaded = True
            self.return_requested = False
            self.active_target_retry_count = 0
            self.skipped_target_count = 0
            self.publish_event("mission_loaded", f"Misión {msg.mission_id} cargada.")
        elif msg.state in ("EMERGENCY_STOP", "FAULT"):
            self.return_requested = True

    def handle_mission_target(self, msg: LineTarget) -> None:
        self.pending_targets.append(msg)
        gap_id = msg.gap_id or msg.line_id
        self.publish_event("target_received", f"Objetivo {gap_id}:{msg.stop_index} en cola.")

    def handle_mission_event(self, msg: MissionEvent) -> None:
        if msg.event_type in {"return_home", "cancel_mission", "mission_cancelled"}:
            self.return_requested = True
            self.publish_event("return_requested", f"Solicitud recibida: {msg.event_type}")

    def handle_master_heartbeat(self, _msg: Heartbeat) -> None:
        self.last_master_heartbeat = self.get_clock().now().nanoseconds / 1e9
        self.link_ok = True

    def handle_vertical_event(self, msg: MissionEvent) -> None:
        if msg.event_type == "vertical_lowered":
            self.atomizer_up = False
            self.atomizer_down = True
        elif msg.event_type == "vertical_raised":
            self.atomizer_up = True
            self.atomizer_down = False

    def publish_event(self, event_type: str, detail: str) -> None:
        msg = MissionEvent()
        msg.mission_id = self.mission_id
        msg.event_type = event_type
        msg.source = self.get_name()
        msg.detail = detail
        msg.stamp = self.get_clock().now().to_msg()
        self.event_pub.publish(msg)

    def publish_fault(self, code: str, description: str) -> None:
        msg = FaultReport()
        msg.mission_id = self.mission_id
        msg.source = self.get_name()
        msg.fault_code = code
        msg.severity = "ERROR"
        msg.description = description
        msg.requires_return_home = True
        msg.stamp = self.get_clock().now().to_msg()
        self.fault_pub.publish(msg)

    def publish_status(self) -> None:
        now_sec = self.get_clock().now().nanoseconds / 1e9
        if self.last_master_heartbeat > 0.0 and (now_sec - self.last_master_heartbeat) > 5.0:
            self.link_ok = False

        msg = SlaveStatus()
        msg.state = self.state
        msg.at_base = self.at_base
        msg.moving = self.moving
        msg.atomizer_up = self.atomizer_up
        msg.atomizer_down = self.atomizer_down
        msg.current_line_id = self.current_line_id
        msg.current_stop_index = int(self.current_stop_index)
        msg.link_ok = self.link_ok
        self.status_pub.publish(msg)

    def control_loop(self) -> None:
        if self.action_in_progress:
            return

        if self.return_requested and not self.at_base:
            self.start_return()
            return

        if self.return_requested and self.at_base:
            self.finish_mission()
            return

        if self.mission_loaded and self.active_target is None and self.pending_targets:
            self.active_target = self.pending_targets.popleft()
            self.active_target_retry_count = 0
            self.current_line_id = self.active_target.gap_id or self.active_target.line_id
            self.current_stop_index = self.active_target.stop_index
            self.start_navigation(self.active_target)
            return

        if self.mission_loaded and not self.pending_targets and self.active_target is None and not self.at_base:
            self.start_return()

    def start_navigation(self, target: LineTarget) -> None:
        if not self.navigate_client.wait_for_server(timeout_sec=1.0):
            self.publish_fault("NAV_SERVER_UNAVAILABLE", "Servidor de navegación no disponible.")
            self.return_requested = True
            return

        goal = NavigateToStop.Goal()
        goal.mission_id = self.mission_id
        goal.line_id = target.gap_id or target.line_id
        goal.stop_index = target.stop_index

        self.state = "MOVING"
        self.at_base = False
        self.moving = True
        self.action_in_progress = True
        self.current_phase = "NAVIGATING"
        self.publish_event("navigation_started", f"Hacia {goal.line_id}:{target.stop_index}")

        future = self.navigate_client.send_goal_async(goal, feedback_callback=self.on_navigation_feedback)
        future.add_done_callback(self.on_navigation_goal_response)

    def on_navigation_feedback(self, feedback_msg) -> None:
        feedback = feedback_msg.feedback
        self.current_line_id = feedback.current_line_id or self.current_line_id

    def on_navigation_goal_response(self, future) -> None:
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.action_in_progress = False
            self.publish_fault("NAV_GOAL_REJECTED", "La acción de navegación fue rechazada.")
            self.return_requested = True
            return
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.on_navigation_result)

    def on_navigation_result(self, future) -> None:
        self.action_in_progress = False
        self.moving = False
        result = future.result().result
        if not result.success or not result.stop_found:
            self.active_target_retry_count += 1
            if self.active_target_retry_count < self.max_stop_retries and self.active_target is not None:
                self.publish_event(
                    "stop_retry",
                    (
                        f"Reintento {self.active_target_retry_count}/{self.max_stop_retries} "
                        f"para {self.current_line_id}:{self.current_stop_index}"
                    ),
                )
                self.start_navigation(self.active_target)
                return

            self.skipped_target_count += 1
            self.publish_event(
                "target_skipped",
                (
                    f"Objetivo {self.current_line_id}:{self.current_stop_index} omitido tras "
                    f"{self.max_stop_retries} intentos."
                ),
            )
            self.active_target = None
            self.active_target_retry_count = 0
            self.state = "AT_BASE" if self.at_base else "STOP_CONFIRMED"
            if self.skipped_target_count >= self.max_skipped_waypoints or not self.pending_targets:
                self.publish_fault("NAV_FAILED", result.message)
                self.return_requested = True
            return

        self.state = "STOP_CONFIRMED"
        self.active_target_retry_count = 0
        self.publish_event("stop_confirmed", f"Parada confirmada en {self.current_line_id}:{self.current_stop_index}")
        self.start_spray()

    def start_spray(self) -> None:
        if not self.spray_client.wait_for_server(timeout_sec=1.0):
            self.publish_fault("SPRAY_SERVER_UNAVAILABLE", "Servidor de fumigación no disponible.")
            self.return_requested = True
            return

        goal = SprayAtStop.Goal()
        goal.mission_id = self.mission_id
        goal.line_id = self.current_line_id
        goal.stop_index = self.current_stop_index

        self.state = "LOWERING_ATOMIZER"
        self.action_in_progress = True
        self.current_phase = "SPRAYING"
        self.publish_event("spray_started", f"Fumigación en {self.current_line_id}:{self.current_stop_index}")

        future = self.spray_client.send_goal_async(goal, feedback_callback=self.on_spray_feedback)
        future.add_done_callback(self.on_spray_goal_response)

    def on_spray_feedback(self, feedback_msg) -> None:
        phase = feedback_msg.feedback.phase
        if phase == "LOWERING":
            self.state = "LOWERING_ATOMIZER"
        elif phase == "SPRAYING_ASCENT":
            self.state = "SPRAYING_ASCENT"

    def on_spray_goal_response(self, future) -> None:
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.action_in_progress = False
            self.publish_fault("SPRAY_GOAL_REJECTED", "La acción de fumigación fue rechazada.")
            self.return_requested = True
            return
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.on_spray_result)

    def on_spray_result(self, future) -> None:
        self.action_in_progress = False
        result = future.result().result
        if not result.success:
            self.publish_fault("SPRAY_FAILED", result.message)
            self.return_requested = True
            return

        self.publish_event("spray_completed", f"Fumigación completada en {self.current_line_id}:{self.current_stop_index}")
        self.active_target = None
        self.active_target_retry_count = 0
        self.state = "AT_BASE" if not self.pending_targets and self.at_base else "STOP_CONFIRMED"

        if not self.pending_targets:
            self.return_requested = True

    def start_return(self) -> None:
        if not self.return_client.wait_for_server(timeout_sec=1.0):
            self.publish_fault("RETURN_SERVER_UNAVAILABLE", "Servidor de retorno no disponible.")
            return

        goal = ReturnToBase.Goal()
        goal.mission_id = self.mission_id
        goal.reason = "requested_by_state_manager"

        self.state = "RETURNING"
        self.moving = True
        self.action_in_progress = True
        self.current_phase = "RETURNING"
        self.publish_event("return_started", "Iniciando vuelta a base.")

        future = self.return_client.send_goal_async(goal)
        future.add_done_callback(self.on_return_goal_response)

    def on_return_goal_response(self, future) -> None:
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.action_in_progress = False
            self.publish_fault("RETURN_GOAL_REJECTED", "La acción de vuelta a base fue rechazada.")
            return
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.on_return_result)

    def on_return_result(self, future) -> None:
        self.action_in_progress = False
        self.moving = False
        result = future.result().result
        if not result.success:
            self.publish_fault("RETURN_FAILED", result.message)
            self.state = "LOCAL_FAULT"
            return

        self.at_base = True
        self.state = "AT_BASE"
        self.publish_event("return_completed", "Robot en base.")
        self.finish_mission()

    def finish_mission(self) -> None:
        self.mission_loaded = False
        self.return_requested = False
        self.active_target = None
        self.pending_targets.clear()
        self.active_target_retry_count = 0
        self.skipped_target_count = 0
        self.current_phase = "IDLE"
        self.current_line_id = ""
        self.current_stop_index = 0


def main() -> None:
    rclpy.init()
    node = SlaveStateManagerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
