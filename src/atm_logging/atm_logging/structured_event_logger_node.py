"""Logger estructurado principal del sistema."""

from __future__ import annotations

from dataclasses import dataclass

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import FaultReport, MasterStatus, MissionEvent, MissionState, SlaveStatus
from atm_logging.paths import resolve_base_log_dir
from atm_logging.schema import base_record, stamp_to_dict
from atm_logging.writers import append_jsonl


@dataclass
class RuntimeCache:
    mission_state: dict | None = None
    slave_status: dict | None = None
    master_status: dict | None = None
    reel_status: dict | None = None
    hose_guide_status: dict | None = None


class StructuredEventLoggerNode(Node):
    """Persiste eventos, fallos y cambios relevantes de estado."""

    def __init__(self) -> None:
        super().__init__("structured_event_logger")

        self.declare_parameter("machine_id", "master")
        self.declare_parameter("base_log_dir", "/var/log/atm")
        self.declare_parameter("fallback_log_dir", "/tmp/atm_logs")

        self.machine_id = str(self.get_parameter("machine_id").value)
        self.base_log_dir = resolve_base_log_dir(
            str(self.get_parameter("base_log_dir").value),
            str(self.get_parameter("fallback_log_dir").value),
        )
        self.events_path = self.base_log_dir / "events.jsonl"
        self.faults_path = self.base_log_dir / "faults.jsonl"
        self.runtime_path = self.base_log_dir / "runtime.jsonl"
        self.cache = RuntimeCache()

        self.create_subscription(MissionEvent, "mission/events", self.handle_mission_event, 100)
        self.create_subscription(FaultReport, "system/faults", self.handle_fault_report, 100)
        self.create_subscription(MissionState, "mission/state", self.handle_mission_state, 50)
        self.create_subscription(SlaveStatus, "link/incoming/slave_status", self.handle_slave_status, 50)
        self.create_subscription(MasterStatus, "master/status", self.handle_master_status, 50)
        self.create_subscription(MasterStatus, "master/reel_status", self.handle_reel_status, 50)
        self.create_subscription(MasterStatus, "master/hose_guide_status", self.handle_hose_guide_status, 50)

        self.get_logger().info(f"Structured event logger escribiendo en {self.base_log_dir}")

    def append_runtime_if_changed(self, key: str, payload: dict) -> None:
        current = getattr(self.cache, key)
        if current == payload:
            return
        setattr(self.cache, key, payload)
        append_jsonl(self.runtime_path, payload)

    def handle_mission_event(self, msg: MissionEvent) -> None:
        record = base_record(
            machine=self.machine_id,
            node=msg.source or self.get_name(),
            category="mission",
            event_type=msg.event_type,
            mission_id=msg.mission_id,
        )
        record["detail"] = msg.detail
        record["stamp"] = stamp_to_dict(msg.stamp)
        append_jsonl(self.events_path, record)

    def handle_fault_report(self, msg: FaultReport) -> None:
        record = base_record(
            machine=self.machine_id,
            node=msg.source or self.get_name(),
            category="fault",
            event_type=msg.fault_code,
            mission_id=msg.mission_id,
        )
        record["severity"] = msg.severity
        record["description"] = msg.description
        record["requires_return_home"] = bool(msg.requires_return_home)
        record["stamp"] = stamp_to_dict(msg.stamp)
        append_jsonl(self.faults_path, record)

    def handle_mission_state(self, msg: MissionState) -> None:
        payload = base_record(
            machine=self.machine_id,
            node=self.get_name(),
            category="runtime",
            event_type="mission_state",
            mission_id=msg.mission_id,
        )
        payload["state"] = msg.state
        payload["mission_type"] = msg.mission_type
        payload["current_stop_index"] = int(msg.current_stop_index)
        payload["current_line_id"] = msg.current_line_id
        payload["comms_degraded"] = bool(msg.comms_degraded)
        payload["stamp"] = stamp_to_dict(msg.stamp)
        self.append_runtime_if_changed("mission_state", payload)

    def handle_slave_status(self, msg: SlaveStatus) -> None:
        payload = base_record(
            machine=self.machine_id,
            node=self.get_name(),
            category="runtime",
            event_type="slave_status",
        )
        payload["state"] = msg.state
        payload["at_base"] = bool(msg.at_base)
        payload["moving"] = bool(msg.moving)
        payload["atomizer_up"] = bool(msg.atomizer_up)
        payload["atomizer_down"] = bool(msg.atomizer_down)
        payload["current_line_id"] = msg.current_line_id
        payload["current_stop_index"] = int(msg.current_stop_index)
        payload["link_ok"] = bool(msg.link_ok)
        self.append_runtime_if_changed("slave_status", payload)

    def handle_master_status(self, msg: MasterStatus) -> None:
        payload = base_record(
            machine=self.machine_id,
            node=self.get_name(),
            category="runtime",
            event_type="master_status",
        )
        payload["state"] = msg.state
        payload["pump_enabled"] = bool(msg.pump_enabled)
        payload["reel_state"] = msg.reel_state
        payload["link_ok"] = bool(msg.link_ok)
        payload["system_armed"] = bool(msg.system_armed)
        self.append_runtime_if_changed("master_status", payload)

    def handle_reel_status(self, msg: MasterStatus) -> None:
        payload = base_record(
            machine=self.machine_id,
            node=self.get_name(),
            category="runtime",
            event_type="reel_status",
        )
        payload["state"] = msg.reel_state
        self.append_runtime_if_changed("reel_status", payload)

    def handle_hose_guide_status(self, msg: MasterStatus) -> None:
        payload = base_record(
            machine=self.machine_id,
            node=self.get_name(),
            category="runtime",
            event_type="hose_guide_status",
        )
        payload["state"] = msg.reel_state
        self.append_runtime_if_changed("hose_guide_status", payload)


def main() -> None:
    rclpy.init()
    node = StructuredEventLoggerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
