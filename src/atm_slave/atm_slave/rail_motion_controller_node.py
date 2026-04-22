"""Controlador ROS 2 del movimiento del robot sobre la guía."""

from __future__ import annotations

import time
from dataclasses import dataclass

import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.node import Node

from atm_interfaces.action import NavigateToStop, ReturnToBase
from atm_interfaces.msg import MissionEvent, StopDetection


@dataclass
class MockRailState:
    current_stop_index: int = 0
    position_name: str = "UNKNOWN"
    state_name: str = "STOP"


class RailMotionControllerNode(Node):
    """Encapsula el backend de movimiento real o simulado del robot."""

    def __init__(self) -> None:
        super().__init__("rail_motion_controller")

        self.declare_parameter("use_mock_backend", True)
        self.declare_parameter("navigate_duration_sec", 2.0)
        self.declare_parameter("return_duration_sec", 2.5)
        self.declare_parameter("feedback_period_sec", 0.2)
        self.declare_parameter("stop_detection_timeout_sec", 20.0)
        self.declare_parameter("simulate_stop_detection", True)
        self.declare_parameter("motion_frequency", 200)
        self.declare_parameter("base_en_inicio", False)
        self.declare_parameter("dir_enable", True)

        self.use_mock_backend = bool(self.get_parameter("use_mock_backend").value)
        self.navigate_duration = float(self.get_parameter("navigate_duration_sec").value)
        self.return_duration = float(self.get_parameter("return_duration_sec").value)
        self.feedback_period = float(self.get_parameter("feedback_period_sec").value)
        self.stop_detection_timeout = float(self.get_parameter("stop_detection_timeout_sec").value)
        self.simulate_stop_detection = bool(self.get_parameter("simulate_stop_detection").value)
        self.mock_state = MockRailState()
        self.active_gap_id = ""
        self.last_detection_confidence = 0.0
        self.pending_detection_matches = False

        self.event_pub = self.create_publisher(MissionEvent, "mission/events", 20)
        self.create_subscription(StopDetection, "slave/vision/stop_detection", self.handle_stop_detection, 20)

        self.navigate_server = ActionServer(
            self,
            NavigateToStop,
            "slave/navigate_to_stop",
            execute_callback=self.execute_navigate,
            goal_callback=self.on_goal,
            cancel_callback=self.on_cancel,
        )
        self.return_server = ActionServer(
            self,
            ReturnToBase,
            "slave/return_to_base",
            execute_callback=self.execute_return,
            goal_callback=self.on_goal,
            cancel_callback=self.on_cancel,
        )

        self.backend = None
        if not self.use_mock_backend:
            self.backend = self.create_real_backend()

        backend_name = "mock" if self.use_mock_backend else "vega11"
        self.get_logger().info(f"Rail motion controller listo. backend={backend_name}")

    def create_real_backend(self):
        from atm_slave.hardware.moving_vega11 import Moving

        return Moving(
            freq=int(self.get_parameter("motion_frequency").value),
            base_en_inicio=bool(self.get_parameter("base_en_inicio").value),
            dir_enable=bool(self.get_parameter("dir_enable").value),
        )

    def on_goal(self, _goal_request):
        return GoalResponse.ACCEPT

    def on_cancel(self, _goal_handle):
        return CancelResponse.ACCEPT

    def handle_stop_detection(self, msg: StopDetection) -> None:
        if not msg.detected or not msg.mission_match:
            return
        if self.active_gap_id and msg.estimated_gap_id and msg.estimated_gap_id != self.active_gap_id:
            return

        self.last_detection_confidence = float(msg.confidence)
        self.pending_detection_matches = True
        if self.backend is not None:
            self.backend.setStopFlag()

    def publish_event(self, event_type: str, detail: str) -> None:
        msg = MissionEvent()
        msg.event_type = event_type
        msg.source = self.get_name()
        msg.detail = detail
        msg.stamp = self.get_clock().now().to_msg()
        self.event_pub.publish(msg)

    def determine_direction(self, target_stop_index: int) -> str:
        current_stop_index = self.mock_state.current_stop_index if self.use_mock_backend else self.mock_state.current_stop_index
        return "FORWARD" if target_stop_index >= current_stop_index else "BACKWARD"

    def execute_navigate(self, goal_handle):
        self.active_gap_id = goal_handle.request.line_id
        self.pending_detection_matches = False
        self.last_detection_confidence = 0.0
        direction = self.determine_direction(goal_handle.request.stop_index)

        if self.use_mock_backend:
            return self.execute_navigate_mock(goal_handle, direction)
        return self.execute_navigate_real(goal_handle, direction)

    def execute_navigate_mock(self, goal_handle, direction: str):
        start = time.monotonic()
        feedback = NavigateToStop.Feedback()
        feedback.current_line_id = goal_handle.request.line_id
        feedback.navigation_state = f"MOVING_{direction}"

        while (time.monotonic() - start) < self.navigate_duration:
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                result = NavigateToStop.Result()
                result.success = False
                result.stop_found = False
                result.message = "Navegación cancelada."
                return result

            if self.simulate_stop_detection and (time.monotonic() - start) >= self.navigate_duration:
                self.pending_detection_matches = True

            feedback.vision_confidence = self.last_detection_confidence or 0.9
            goal_handle.publish_feedback(feedback)
            time.sleep(self.feedback_period)

        self.mock_state.current_stop_index = int(goal_handle.request.stop_index)
        self.mock_state.position_name = "FRONT" if direction == "FORWARD" else "BACK"
        self.mock_state.state_name = "VISION"
        goal_handle.succeed()
        result = NavigateToStop.Result()
        result.success = True
        result.stop_found = True
        result.message = "Parada encontrada por backend de movimiento lógico."
        return result

    def execute_navigate_real(self, goal_handle, direction: str):
        from atm_slave.hardware.moving_vega11 import Moving

        feedback = NavigateToStop.Feedback()
        feedback.current_line_id = goal_handle.request.line_id
        t0 = time.monotonic()

        if direction == "FORWARD":
            self.backend.forward(stopby=Moving.VISION)
        else:
            self.backend.backward(stopby=Moving.VISION)

        while (time.monotonic() - t0) < self.stop_detection_timeout:
            if goal_handle.is_cancel_requested:
                self.backend.stop(Moving.STOP)
                goal_handle.canceled()
                result = NavigateToStop.Result()
                result.success = False
                result.stop_found = False
                result.message = "Navegación cancelada."
                return result

            if self.simulate_stop_detection and (time.monotonic() - t0) >= self.navigate_duration:
                self.backend.setStopFlag()

            current_state = self.backend.state_name()
            feedback.navigation_state = current_state
            feedback.current_line_id = goal_handle.request.line_id
            feedback.vision_confidence = self.last_detection_confidence or 0.0
            goal_handle.publish_feedback(feedback)

            if current_state == "VISION":
                self.mock_state.current_stop_index = int(goal_handle.request.stop_index)
                goal_handle.succeed()
                result = NavigateToStop.Result()
                result.success = True
                result.stop_found = True
                result.message = "Parada confirmada por backend Vega11."
                return result

            if current_state in {"FINAL", "INICIO", "STOP"} and (time.monotonic() - t0) > 1.0:
                break

            time.sleep(self.feedback_period)

        self.backend.stop(Moving.STOP)
        goal_handle.abort()
        result = NavigateToStop.Result()
        result.success = False
        result.stop_found = False
        result.message = "Timeout o fin de recorrido sin parada válida."
        return result

    def execute_return(self, goal_handle):
        if self.use_mock_backend:
            return self.execute_return_mock(goal_handle)
        return self.execute_return_real(goal_handle)

    def execute_return_mock(self, goal_handle):
        start = time.monotonic()
        feedback = ReturnToBase.Feedback()

        while (time.monotonic() - start) < self.return_duration:
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                result = ReturnToBase.Result()
                result.success = False
                result.message = "Retorno cancelado."
                return result

            feedback.phase = "RETURNING"
            goal_handle.publish_feedback(feedback)
            time.sleep(self.feedback_period)

        self.mock_state.current_stop_index = 0
        self.mock_state.position_name = "BASE"
        self.mock_state.state_name = "BASE"
        goal_handle.succeed()
        result = ReturnToBase.Result()
        result.success = True
        result.message = "Robot en base."
        return result

    def execute_return_real(self, goal_handle):
        from atm_slave.hardware.moving_vega11 import Moving

        feedback = ReturnToBase.Feedback()
        t0 = time.monotonic()
        self.backend.gotocharge()

        while (time.monotonic() - t0) < self.stop_detection_timeout:
            if goal_handle.is_cancel_requested:
                self.backend.stop(Moving.STOP)
                goal_handle.canceled()
                result = ReturnToBase.Result()
                result.success = False
                result.message = "Retorno cancelado."
                return result

            current_state = self.backend.state_name()
            feedback.phase = current_state
            goal_handle.publish_feedback(feedback)

            if current_state == "BASE":
                self.mock_state.current_stop_index = 0
                goal_handle.succeed()
                result = ReturnToBase.Result()
                result.success = True
                result.message = "Robot en base."
                return result

            time.sleep(self.feedback_period)

        self.backend.stop(Moving.STOP)
        goal_handle.abort()
        result = ReturnToBase.Result()
        result.success = False
        result.message = "Timeout volviendo a base."
        return result

    def destroy_node(self):
        if self.backend is not None:
            try:
                self.backend.close()
            except Exception:
                pass
        return super().destroy_node()


def main() -> None:
    rclpy.init()
    node = RailMotionControllerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
