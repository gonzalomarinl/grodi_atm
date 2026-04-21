"""Servidor de acciones de navegación lógica de la esclava."""

from __future__ import annotations

import time

import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.node import Node

from atm_interfaces.action import NavigateToStop, ReturnToBase


class NavigationExecutorNode(Node):
    """Simula navegación y retorno a base de forma lógica."""

    def __init__(self) -> None:
        super().__init__("navigation_executor")

        self.declare_parameter("navigate_duration_sec", 2.0)
        self.declare_parameter("return_duration_sec", 2.5)
        self.declare_parameter("feedback_period_sec", 0.5)

        self.navigate_duration = float(self.get_parameter("navigate_duration_sec").value)
        self.return_duration = float(self.get_parameter("return_duration_sec").value)
        self.feedback_period = float(self.get_parameter("feedback_period_sec").value)

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

        self.get_logger().info("Navigation executor listo.")

    def on_goal(self, _goal_request):
        return GoalResponse.ACCEPT

    def on_cancel(self, _goal_handle):
        return CancelResponse.ACCEPT

    def execute_navigate(self, goal_handle):
        start = time.monotonic()
        feedback = NavigateToStop.Feedback()

        while (time.monotonic() - start) < self.navigate_duration:
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                result = NavigateToStop.Result()
                result.success = False
                result.stop_found = False
                result.message = "Navegación cancelada."
                return result

            feedback.navigation_state = "SEARCHING_STOP"
            feedback.current_line_id = goal_handle.request.line_id
            feedback.vision_confidence = 0.9
            goal_handle.publish_feedback(feedback)
            time.sleep(self.feedback_period)

        goal_handle.succeed()
        result = NavigateToStop.Result()
        result.success = True
        result.stop_found = True
        result.message = "Parada encontrada por navegación lógica."
        return result

    def execute_return(self, goal_handle):
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

        goal_handle.succeed()
        result = ReturnToBase.Result()
        result.success = True
        result.message = "Robot en base."
        return result


def main() -> None:
    rclpy.init()
    node = NavigationExecutorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
