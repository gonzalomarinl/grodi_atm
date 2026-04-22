"""Resumen estructurado por misión."""

from __future__ import annotations

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import FaultReport, LineTarget, MissionEvent, MissionState
from atm_logging.paths import mission_dir, resolve_base_log_dir
from atm_logging.schema import now_iso
from atm_logging.writers import write_json_atomic


class MissionSummaryLoggerNode(Node):
    """Construye un resumen compacto por misión."""

    TERMINAL_STATES = {"COMPLETED", "FAULT", "IDLE"}

    def __init__(self) -> None:
        super().__init__("mission_summary_logger")

        self.declare_parameter("machine_id", "master")
        self.declare_parameter("base_log_dir", "/var/log/atm")
        self.declare_parameter("fallback_log_dir", "/tmp/atm_logs")

        self.machine_id = str(self.get_parameter("machine_id").value)
        self.base_log_dir = resolve_base_log_dir(
            str(self.get_parameter("base_log_dir").value),
            str(self.get_parameter("fallback_log_dir").value),
        )
        self.summaries: dict[str, dict] = {}
        self.last_active_mission_id = ""

        self.create_subscription(MissionState, "mission/state", self.handle_mission_state, 50)
        self.create_subscription(MissionEvent, "mission/events", self.handle_mission_event, 100)
        self.create_subscription(FaultReport, "system/faults", self.handle_fault_report, 100)
        self.create_subscription(LineTarget, "link/outgoing/mission_target", self.handle_line_target, 50)

        self.get_logger().info(f"Mission summary logger escribiendo en {self.base_log_dir / 'missions'}")

    def ensure_summary(self, mission_id: str, mission_type: str = "") -> dict:
        if mission_id not in self.summaries:
            self.summaries[mission_id] = {
                "mission_id": mission_id,
                "machine": self.machine_id,
                "mission_type": mission_type,
                "created_at": now_iso(),
                "started_at": None,
                "finished_at": None,
                "final_state": "",
                "targets_total": 0,
                "targets_completed": 0,
                "targets_skipped": 0,
                "stop_retries": 0,
                "return_started": False,
                "return_completed": False,
                "faults": [],
                "event_counts": {},
                "target_refs": [],
            }
        elif mission_type and not self.summaries[mission_id]["mission_type"]:
            self.summaries[mission_id]["mission_type"] = mission_type
        return self.summaries[mission_id]

    def persist_summary(self, mission_id: str) -> None:
        summary = self.summaries.get(mission_id)
        if not summary:
            return
        target = mission_dir(self.base_log_dir, mission_id) / "summary.json"
        write_json_atomic(target, summary)

    def handle_mission_state(self, msg: MissionState) -> None:
        if not msg.mission_id:
            return
        summary = self.ensure_summary(msg.mission_id, msg.mission_type)
        self.last_active_mission_id = msg.mission_id

        if msg.state == "MISSION_LOADED" and summary["started_at"] is None:
            summary["started_at"] = now_iso()

        if msg.state in self.TERMINAL_STATES and not summary["finished_at"]:
            summary["finished_at"] = now_iso()
            summary["final_state"] = msg.state

        self.persist_summary(msg.mission_id)

    def handle_line_target(self, msg: LineTarget) -> None:
        if not msg.mission_id:
            return
        summary = self.ensure_summary(msg.mission_id)
        summary["targets_total"] += 1
        summary["target_refs"].append(
            {
                "gap_id": msg.gap_id,
                "line_id": msg.line_id,
                "stop_index": int(msg.stop_index),
            }
        )
        self.persist_summary(msg.mission_id)

    def handle_mission_event(self, msg: MissionEvent) -> None:
        mission_id = msg.mission_id or self.last_active_mission_id
        if not mission_id:
            return
        summary = self.ensure_summary(mission_id)
        summary["event_counts"][msg.event_type] = summary["event_counts"].get(msg.event_type, 0) + 1

        if msg.event_type == "spray_completed":
            summary["targets_completed"] += 1
        elif msg.event_type == "target_skipped":
            summary["targets_skipped"] += 1
        elif msg.event_type == "stop_retry":
            summary["stop_retries"] += 1
        elif msg.event_type == "return_started":
            summary["return_started"] = True
        elif msg.event_type == "return_completed":
            summary["return_completed"] = True

        self.persist_summary(mission_id)

    def handle_fault_report(self, msg: FaultReport) -> None:
        mission_id = msg.mission_id or self.last_active_mission_id
        if not mission_id:
            return
        summary = self.ensure_summary(mission_id)
        summary["faults"].append(
            {
                "fault_code": msg.fault_code,
                "severity": msg.severity,
                "description": msg.description,
                "requires_return_home": bool(msg.requires_return_home),
                "ts": now_iso(),
            }
        )
        if not summary["finished_at"]:
            summary["finished_at"] = now_iso()
        if not summary["final_state"]:
            summary["final_state"] = "FAULT"
        self.persist_summary(mission_id)


def main() -> None:
    rclpy.init()
    node = MissionSummaryLoggerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
