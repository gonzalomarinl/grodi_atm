"""Logger base de eventos de misión."""

from pathlib import Path

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import FaultReport, MissionEvent, SprayReport


class MissionEventLoggerNode(Node):
    """Persiste eventos relevantes en un log de texto simple."""

    def __init__(self) -> None:
        super().__init__("mission_event_logger")

        self.declare_parameter("log_path", "/tmp/atm_mission_events.log")
        self.log_path = Path(self.get_parameter("log_path").value)
        self.log_path.parent.mkdir(parents=True, exist_ok=True)

        self.create_subscription(MissionEvent, "mission/events", self.handle_mission_event, 50)
        self.create_subscription(FaultReport, "system/faults", self.handle_fault_report, 50)
        self.create_subscription(SprayReport, "mission/spray_report", self.handle_spray_report, 50)

        self.get_logger().info(f"Mission event logger escribiendo en {self.log_path}")

    def append_line(self, line: str) -> None:
        with self.log_path.open("a", encoding="utf-8") as handle:
            handle.write(line + "\n")

    def handle_mission_event(self, msg: MissionEvent) -> None:
        self.append_line(
            f"[EVENT] mission_id={msg.mission_id} type={msg.event_type} source={msg.source} detail={msg.detail}"
        )

    def handle_fault_report(self, msg: FaultReport) -> None:
        self.append_line(
            f"[FAULT] mission_id={msg.mission_id} source={msg.source} code={msg.fault_code} "
            f"severity={msg.severity} return_home={msg.requires_return_home} desc={msg.description}"
        )

    def handle_spray_report(self, msg: SprayReport) -> None:
        self.append_line(
            f"[SPRAY] mission_id={msg.mission_id} line_id={msg.line_id} stop_index={msg.stop_index} "
            f"success={msg.success} duration_sec={msg.duration_sec:.2f}"
        )


def main() -> None:
    rclpy.init()
    node = MissionEventLoggerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
