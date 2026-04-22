"""Control legacy de subida y bajada lógica del atomizador."""

from __future__ import annotations

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import MissionEvent


class VerticalAtomizerControllerNode(Node):
    """Controla de forma lógica dos estados: UP y DOWN."""

    def __init__(self) -> None:
        super().__init__("vertical_atomizer_controller")

        self.declare_parameter("lower_duration_sec", 1.5)
        self.declare_parameter("raise_duration_sec", 1.5)
        self.declare_parameter("startup_position", "UP")

        self.lower_duration = float(self.get_parameter("lower_duration_sec").value)
        self.raise_duration = float(self.get_parameter("raise_duration_sec").value)
        self.position = self.get_parameter("startup_position").value.upper()
        self.pending_event = None

        self.command_sub = self.create_subscription(
            MissionEvent,
            "slave/commands/vertical",
            self.handle_vertical_command,
            20,
        )
        self.event_pub = self.create_publisher(MissionEvent, "slave/events/vertical", 20)

        self.get_logger().info("Vertical atomizer controller listo.")

    def handle_vertical_command(self, msg: MissionEvent) -> None:
        if msg.event_type == "lower_atomizer" and self.position == "UP":
            self.position = "MOVING_DOWN"
            self.schedule_event("vertical_lowered", self.lower_duration)
        elif msg.event_type == "raise_atomizer" and self.position in {"DOWN", "MOVING_DOWN"}:
            self.position = "MOVING_UP"
            self.schedule_event("vertical_raised", self.raise_duration)

    def schedule_event(self, event_type: str, delay: float) -> None:
        def _publish():
            event = MissionEvent()
            event.event_type = event_type
            event.source = self.get_name()
            event.detail = self.position
            event.stamp = self.get_clock().now().to_msg()
            self.event_pub.publish(event)
            self.position = "DOWN" if event_type == "vertical_lowered" else "UP"
            if self.pending_event is not None:
                self.pending_event.cancel()
                self.pending_event = None

        if self.pending_event is not None:
            self.pending_event.cancel()
        self.pending_event = self.create_timer(delay, _publish)


def main() -> None:
    rclpy.init()
    node = VerticalAtomizerControllerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
