"""Controlador del motor de bobina vertical del robot.

La bobina vertical acciona el tubo en T mediante una manguera o cable:
- al desenrollar, el tubo desciende;
- al enrollar, el tubo asciende.
"""

from __future__ import annotations

from threading import Lock, Thread
import time

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import MissionEvent


class VerticalReelControllerNode(Node):
    """Gestiona el motor que desenrolla/enrolla para bajar o subir el tubo en T."""

    def __init__(self) -> None:
        super().__init__("vertical_reel_controller")

        self.declare_parameter("use_mock_backend", True)
        self.declare_parameter("lower_duration_sec", 1.5)
        self.declare_parameter("raise_duration_sec", 2.0)
        self.declare_parameter("startup_position", "UP")

        self.lower_duration = float(self.get_parameter("lower_duration_sec").value)
        self.raise_duration = float(self.get_parameter("raise_duration_sec").value)
        self.position = str(self.get_parameter("startup_position").value).upper()
        self.use_mock_backend = bool(self.get_parameter("use_mock_backend").value)
        self.motion_lock = Lock()
        self.motion_generation = 0

        self.command_sub = self.create_subscription(
            MissionEvent,
            "slave/commands/vertical",
            self.handle_vertical_command,
            20,
        )
        self.event_pub = self.create_publisher(MissionEvent, "slave/events/vertical", 20)

        self.get_logger().info("Vertical reel controller listo.")

    def handle_vertical_command(self, msg: MissionEvent) -> None:
        with self.motion_lock:
            if msg.event_type == "lower_atomizer":
                if self.position == "DOWN":
                    self.publish_immediate_event(
                        event_type="vertical_lowered",
                        target_position="DOWN",
                        mission_id=msg.mission_id,
                    )
                    return
                if self.position == "UP":
                    self.position = "MOVING_DOWN"
                    self.motion_generation += 1
                    generation = self.motion_generation
                    self.get_logger().info(
                        f"Recibido lower_atomizer para misión {msg.mission_id or '<sin_misión>'}."
                    )
                    self.start_mock_motion(
                        generation=generation,
                        event_type="vertical_lowered",
                        target_position="DOWN",
                        mission_id=msg.mission_id,
                        delay=self.lower_duration,
                    )
                    return

            if msg.event_type == "raise_atomizer":
                if self.position == "UP":
                    self.publish_immediate_event(
                        event_type="vertical_raised",
                        target_position="UP",
                        mission_id=msg.mission_id,
                    )
                    return
                if self.position == "DOWN":
                    self.position = "MOVING_UP"
                    self.motion_generation += 1
                    generation = self.motion_generation
                    self.get_logger().info(
                        f"Recibido raise_atomizer para misión {msg.mission_id or '<sin_misión>'}."
                    )
                    self.start_mock_motion(
                        generation=generation,
                        event_type="vertical_raised",
                        target_position="UP",
                        mission_id=msg.mission_id,
                        delay=self.raise_duration,
                    )
                    return

            self.get_logger().warning(
                f"Comando vertical ignorado: {msg.event_type} con posición actual {self.position}."
            )

    def publish_immediate_event(
        self,
        event_type: str,
        target_position: str,
        mission_id: str,
    ) -> None:
        event = MissionEvent()
        event.mission_id = mission_id
        event.event_type = event_type
        event.source = self.get_name()
        event.detail = target_position
        event.stamp = self.get_clock().now().to_msg()
        self.position = target_position
        self.event_pub.publish(event)
        self.get_logger().info(
            f"Evento vertical inmediato: {event_type} -> posición {target_position}."
        )

    def start_mock_motion(
        self,
        generation: int,
        event_type: str,
        target_position: str,
        mission_id: str,
        delay: float,
    ) -> None:
        if not self.use_mock_backend:
            self.get_logger().warning(
                "Backend real de bobina vertical aún no implementado; se usa flujo lógico."
            )

        def _worker() -> None:
            time.sleep(max(delay, 0.0))
            with self.motion_lock:
                if generation != self.motion_generation:
                    return

                event = MissionEvent()
                event.mission_id = mission_id
                event.event_type = event_type
                event.source = self.get_name()
                event.detail = target_position
                event.stamp = self.get_clock().now().to_msg()

                self.position = target_position
                self.event_pub.publish(event)
                self.get_logger().info(
                    f"Evento vertical publicado: {event_type} -> posición {target_position}."
                )

        Thread(target=_worker, daemon=True).start()


def main() -> None:
    rclpy.init()
    node = VerticalReelControllerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
