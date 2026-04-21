"""Publicador de snapshot de salud de la esclava."""

from __future__ import annotations

import json
from pathlib import Path
from typing import Any

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import Heartbeat, SlaveStatus


class SlaveHealthPublisherNode(Node):
    """Escribe un snapshot JSON mínimo para el sentinel de la esclava."""

    CRITICAL_STATES = {
        "MOVING",
        "LOWERING_ATOMIZER",
        "SPRAYING_ASCENT",
        "RETURNING",
    }

    def __init__(self) -> None:
        super().__init__("slave_health_publisher")

        self.declare_parameter("machine_id", "slave")
        self.declare_parameter("health_path", "/run/atm/slave_health.json")
        self.declare_parameter("write_period_sec", 0.5)
        self.declare_parameter("startup_state", "AT_BASE")

        self.machine_id = self.get_parameter("machine_id").value
        self.health_path = self.resolve_health_path(self.get_parameter("health_path").value)

        self.state = self.get_parameter("startup_state").value
        self.at_base = self.state == "AT_BASE"
        self.moving = False
        self.atomizer_up = True
        self.atomizer_down = False
        self.current_line_id = ""
        self.current_stop_index = 0
        self.link_ok = False
        self.last_master_heartbeat = 0.0

        self.create_subscription(SlaveStatus, "slave/status", self.handle_slave_status, 20)
        self.create_subscription(Heartbeat, "link/master_heartbeat", self.handle_master_heartbeat, 20)

        period = float(self.get_parameter("write_period_sec").value)
        self.write_timer = self.create_timer(period, self.write_health_snapshot)

        self.get_logger().info(f"Slave health publisher escribiendo en {self.health_path}")

    def resolve_health_path(self, configured_path: str) -> Path:
        path = Path(configured_path)
        try:
            path.parent.mkdir(parents=True, exist_ok=True)
            return path
        except PermissionError:
            fallback = Path("/tmp/atm") / path.name
            fallback.parent.mkdir(parents=True, exist_ok=True)
            self.get_logger().warn(
                f"Sin permisos para {path.parent}. Se usa ruta de desarrollo {fallback}."
            )
            return fallback

    def handle_slave_status(self, msg: SlaveStatus) -> None:
        self.state = msg.state
        self.at_base = msg.at_base
        self.moving = msg.moving
        self.atomizer_up = msg.atomizer_up
        self.atomizer_down = msg.atomizer_down
        self.current_line_id = msg.current_line_id
        self.current_stop_index = msg.current_stop_index
        self.link_ok = msg.link_ok

    def handle_master_heartbeat(self, _msg: Heartbeat) -> None:
        self.last_master_heartbeat = self.get_clock().now().nanoseconds / 1e9
        self.link_ok = True

    def snapshot(self) -> dict[str, Any]:
        now_sec = self.get_clock().now().nanoseconds / 1e9
        master_hb_age = None
        if self.last_master_heartbeat > 0.0:
            master_hb_age = round(now_sec - self.last_master_heartbeat, 3)

        return {
            "machine_id": self.machine_id,
            "timestamp": self.get_clock().now().to_msg().sec,
            "state": self.state,
            "critical_operation": self.state in self.CRITICAL_STATES,
            "at_base": bool(self.at_base),
            "moving": bool(self.moving),
            "atomizer_up": bool(self.atomizer_up),
            "atomizer_down": bool(self.atomizer_down),
            "current_line_id": self.current_line_id,
            "current_stop_index": int(self.current_stop_index),
            "link_ok": bool(self.link_ok),
            "last_master_heartbeat_age_sec": master_hb_age,
        }

    def write_health_snapshot(self) -> None:
        tmp_path = self.health_path.with_suffix(".tmp")
        with tmp_path.open("w", encoding="utf-8") as handle:
            json.dump(self.snapshot(), handle, indent=2, sort_keys=True)
        tmp_path.replace(self.health_path)


def main() -> None:
    rclpy.init()
    node = SlaveHealthPublisherNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
