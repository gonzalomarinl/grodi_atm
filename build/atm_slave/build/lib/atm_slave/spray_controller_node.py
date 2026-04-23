"""Servidor lógico de la secuencia de fumigación."""

from __future__ import annotations

from threading import Event
import time

import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from atm_interfaces.action import SprayAtStop
from atm_interfaces.msg import MissionEvent


class SprayControllerNode(Node):
    """Ejecuta la secuencia bajar -> fumigar en ascenso -> cerrar."""

    def __init__(self) -> None:
        super().__init__("spray_controller")

        self.declare_parameter("spray_duration_sec", 2.0)
        self.declare_parameter("wait_timeout_sec", 5.0)
        self.declare_parameter("pump_ack_timeout_sec", 3.0)
        self.declare_parameter("pump_off_ratio", 0.8)

        self.spray_duration = float(self.get_parameter("spray_duration_sec").value)
        self.wait_timeout = float(self.get_parameter("wait_timeout_sec").value)
        self.pump_ack_timeout = float(self.get_parameter("pump_ack_timeout_sec").value)
        self.pump_off_ratio = float(self.get_parameter("pump_off_ratio").value)
        self.last_vertical_event = ""
        self.vertical_lowered_event = Event()
        self.vertical_raised_event = Event()
        self.pump_on_ack_event = Event()
        self.pump_off_ack_event = Event()
        self.callback_group = ReentrantCallbackGroup()

        self.command_pub = self.create_publisher(MissionEvent, "slave/commands/vertical", 20)
        self.event_pub = self.create_publisher(MissionEvent, "mission/events", 20)
        self.create_subscription(
            MissionEvent,
            "slave/events/vertical",
            self.handle_vertical_event,
            20,
            callback_group=self.callback_group,
        )
        self.create_subscription(
            MissionEvent,
            "slave/incoming/mission_event",
            self.handle_link_event,
            20,
            callback_group=self.callback_group,
        )

        self.server = ActionServer(
            self,
            SprayAtStop,
            "slave/spray_at_stop",
            execute_callback=self.execute_spray,
            goal_callback=self.on_goal,
            cancel_callback=self.on_cancel,
            callback_group=self.callback_group,
        )

        self.get_logger().info("Spray controller listo.")

    def on_goal(self, _goal_request):
        return GoalResponse.ACCEPT

    def on_cancel(self, _goal_handle):
        return CancelResponse.ACCEPT

    def handle_vertical_event(self, msg: MissionEvent) -> None:
        self.last_vertical_event = msg.event_type
        if msg.event_type == "vertical_lowered":
            self.vertical_lowered_event.set()
        elif msg.event_type == "vertical_raised":
            self.vertical_raised_event.set()

    def handle_link_event(self, msg: MissionEvent) -> None:
        if msg.event_type == "pump_on_ack":
            self.pump_on_ack_event.set()
        elif msg.event_type == "pump_off_ack":
            self.pump_off_ack_event.set()

    def publish_vertical_command(self, event_type: str, mission_id: str) -> None:
        msg = MissionEvent()
        msg.mission_id = mission_id
        msg.event_type = event_type
        msg.source = self.get_name()
        msg.detail = ""
        msg.stamp = self.get_clock().now().to_msg()
        self.command_pub.publish(msg)

    def publish_control_event(self, event_type: str, mission_id: str, detail: str = "") -> None:
        msg = MissionEvent()
        msg.mission_id = mission_id
        msg.event_type = event_type
        msg.source = self.get_name()
        msg.detail = detail
        msg.stamp = self.get_clock().now().to_msg()
        self.event_pub.publish(msg)

    def wait_for_vertical_event(self, expected: str) -> bool:
        if expected == "vertical_lowered":
            return self.vertical_lowered_event.wait(timeout=self.wait_timeout)
        if expected == "vertical_raised":
            return self.vertical_raised_event.wait(timeout=self.wait_timeout)
        return False

    def wait_for_pump_event(self, expected: str) -> bool:
        if expected == "pump_on_ack":
            return self.pump_on_ack_event.wait(timeout=self.pump_ack_timeout)
        if expected == "pump_off_ack":
            return self.pump_off_ack_event.wait(timeout=self.pump_ack_timeout)
        return False

    def execute_spray(self, goal_handle):
        feedback = SprayAtStop.Feedback()

        self.last_vertical_event = ""
        self.vertical_lowered_event.clear()
        self.vertical_raised_event.clear()
        self.pump_on_ack_event.clear()
        self.pump_off_ack_event.clear()
        feedback.phase = "LOWERING"
        goal_handle.publish_feedback(feedback)
        self.publish_vertical_command("lower_atomizer", goal_handle.request.mission_id)
        if not self.wait_for_vertical_event("vertical_lowered"):
            goal_handle.abort()
            result = SprayAtStop.Result()
            result.success = False
            result.message = "Timeout esperando bajada del atomizador."
            return result

        self.publish_control_event("pump_on_request", goal_handle.request.mission_id)
        if not self.wait_for_pump_event("pump_on_ack"):
            goal_handle.abort()
            result = SprayAtStop.Result()
            result.success = False
            result.message = "Timeout esperando confirmación de bomba activa."
            return result

        feedback.phase = "SPRAYING_ASCENT"
        goal_handle.publish_feedback(feedback)
        self.publish_vertical_command("raise_atomizer", goal_handle.request.mission_id)
        start = time.monotonic()
        pump_off_sent = False
        while (time.monotonic() - start) < self.spray_duration:
            if goal_handle.is_cancel_requested:
                self.publish_control_event("pump_off_request", goal_handle.request.mission_id)
                goal_handle.canceled()
                result = SprayAtStop.Result()
                result.success = False
                result.message = "Fumigación cancelada."
                return result
            elapsed = time.monotonic() - start
            if not pump_off_sent and elapsed >= (self.spray_duration * self.pump_off_ratio):
                self.publish_control_event("pump_off_request", goal_handle.request.mission_id)
                if not self.wait_for_pump_event("pump_off_ack"):
                    goal_handle.abort()
                    result = SprayAtStop.Result()
                    result.success = False
                    result.message = "Timeout esperando confirmación de apagado de bomba."
                    return result
                pump_off_sent = True
            time.sleep(0.1)

        self.last_vertical_event = ""
        feedback.phase = "RAISING"
        goal_handle.publish_feedback(feedback)
        if not pump_off_sent:
            self.publish_control_event("pump_off_request", goal_handle.request.mission_id)
            if not self.wait_for_pump_event("pump_off_ack"):
                goal_handle.abort()
                result = SprayAtStop.Result()
                result.success = False
                result.message = "Timeout esperando confirmación final de apagado de bomba."
                return result
        if not self.wait_for_vertical_event("vertical_raised"):
            goal_handle.abort()
            result = SprayAtStop.Result()
            result.success = False
            result.message = "Timeout esperando subida del atomizador."
            return result

        feedback.phase = "DONE"
        goal_handle.publish_feedback(feedback)
        goal_handle.succeed()
        result = SprayAtStop.Result()
        result.success = True
        result.message = "Secuencia de fumigación completada."
        return result


def main() -> None:
    rclpy.init()
    node = SprayControllerNode()
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
