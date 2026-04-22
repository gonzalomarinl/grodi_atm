"""Logger específico de diagnósticos del enlace."""

from __future__ import annotations

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import MissionEvent
from atm_logging.paths import resolve_base_log_dir
from atm_logging.schema import base_record, stamp_to_dict
from atm_logging.writers import append_jsonl


class LinkDiagnosticsLoggerNode(Node):
    """Persiste eventos de ACK, reintentos, duplicados y timeouts del enlace."""

    def __init__(self) -> None:
        super().__init__("link_diagnostics_logger")

        self.declare_parameter("machine_id", "master")
        self.declare_parameter("base_log_dir", "/var/log/atm")
        self.declare_parameter("fallback_log_dir", "/tmp/atm_logs")

        self.machine_id = str(self.get_parameter("machine_id").value)
        self.base_log_dir = resolve_base_log_dir(
            str(self.get_parameter("base_log_dir").value),
            str(self.get_parameter("fallback_log_dir").value),
        )
        self.link_path = self.base_log_dir / "link.jsonl"

        self.create_subscription(MissionEvent, "link/diagnostics", self.handle_link_event, 100)
        self.get_logger().info(f"Link diagnostics logger escribiendo en {self.link_path}")

    def handle_link_event(self, msg: MissionEvent) -> None:
        record = base_record(
            machine=self.machine_id,
            node=msg.source or self.get_name(),
            category="link",
            event_type=msg.event_type,
            mission_id=msg.mission_id,
        )
        record["detail"] = msg.detail
        record["stamp"] = stamp_to_dict(msg.stamp)
        append_jsonl(self.link_path, record)


def main() -> None:
    rclpy.init()
    node = LinkDiagnosticsLoggerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
