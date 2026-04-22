"""Publicador de snapshot de salud de la maestra."""

from __future__ import annotations

import json
from pathlib import Path
from typing import Any

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import Heartbeat, MasterStatus, MissionEvent, MissionState


class MasterHealthPublisherNode(Node):
    """Escribe un snapshot JSON mínimo para el sentinel externo."""

    CRITICAL_STATES = {"EXECUTING", "RETURNING_HOME", "PURGING"}

    def __init__(self) -> None:
        super().__init__("master_health_publisher")

        self.declare_parameter("machine_id", "master")
        self.declare_parameter("health_path", "/run/atm/master_health.json")
        self.declare_parameter("write_period_sec", 0.5)

        self.machine_id = self.get_parameter("machine_id").value
        self.health_path = self.resolve_health_path(self.get_parameter("health_path").value)

        self.mission_state = "BOOT"
        self.mission_id = ""
        self.mission_type = ""
        self.current_line_id = ""
        self.current_stop_index = 0
        self.comms_degraded = False
        self.pump_enabled = False
        self.reel_state = "UNKNOWN"
        self.hose_guide_state = "UNKNOWN"
        self.system_armed = False
        self.last_slave_heartbeat = 0.0

        self.create_subscription(MissionState, "mission/state", self.handle_mission_state, 20)
        self.create_subscription(MasterStatus, "master/status", self.handle_master_status, 20)
        self.create_subscription(MasterStatus, "master/reel_status", self.handle_reel_status, 20)
        self.create_subscription(MasterStatus, "master/hose_guide_status", self.handle_hose_guide_status, 20)
        self.create_subscription(MissionEvent, "mission/events", self.handle_mission_event, 20)
        self.create_subscription(Heartbeat, "link/slave_heartbeat", self.handle_slave_heartbeat, 20)

        period = float(self.get_parameter("write_period_sec").value)
        self.write_timer = self.create_timer(period, self.write_health_snapshot)

        self.get_logger().info(f"Master health publisher escribiendo en {self.health_path}")

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

    def handle_mission_state(self, msg: MissionState) -> None:
        self.mission_state = msg.state
        self.mission_id = msg.mission_id
        self.mission_type = msg.mission_type
        self.current_line_id = msg.current_line_id
        self.current_stop_index = msg.current_stop_index
        self.comms_degraded = msg.comms_degraded

    def handle_master_status(self, msg: MasterStatus) -> None:
        self.pump_enabled = msg.pump_enabled
        self.system_armed = self.system_armed or msg.system_armed

    def handle_reel_status(self, msg: MasterStatus) -> None:
        if msg.reel_state != "UNKNOWN":
            self.reel_state = msg.reel_state

    def handle_hose_guide_status(self, msg: MasterStatus) -> None:
        if msg.reel_state != "UNKNOWN":
            self.hose_guide_state = msg.reel_state

    def handle_mission_event(self, msg: MissionEvent) -> None:
        if msg.event_type == "system_armed":
            self.system_armed = True
        elif msg.event_type == "system_disarmed":
            self.system_armed = False

    def handle_slave_heartbeat(self, _msg: Heartbeat) -> None:
        self.last_slave_heartbeat = self.get_clock().now().nanoseconds / 1e9

    def snapshot(self) -> dict[str, Any]:
        now_sec = self.get_clock().now().nanoseconds / 1e9
        slave_hb_age = None
        if self.last_slave_heartbeat > 0.0:
            slave_hb_age = round(now_sec - self.last_slave_heartbeat, 3)

        return {
            "machine_id": self.machine_id,
            "timestamp": self.get_clock().now().to_msg().sec,
            "mission_id": self.mission_id,
            "mission_type": self.mission_type,
            "mission_state": self.mission_state,
            "current_line_id": self.current_line_id,
            "current_stop_index": int(self.current_stop_index),
            "critical_operation": self.mission_state in self.CRITICAL_STATES,
            "comms_degraded": bool(self.comms_degraded),
            "system_armed": bool(self.system_armed),
            "pump_enabled": bool(self.pump_enabled),
            "reel_state": self.reel_state,
            "hose_guide_state": self.hose_guide_state,
            "last_slave_heartbeat_age_sec": slave_hb_age,
        }

    def write_health_snapshot(self) -> None:
        tmp_path = self.health_path.with_suffix(".tmp")
        with tmp_path.open("w", encoding="utf-8") as handle:
            json.dump(self.snapshot(), handle, indent=2, sort_keys=True)
        tmp_path.replace(self.health_path)


def main() -> None:
    rclpy.init()
    node = MasterHealthPublisherNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
