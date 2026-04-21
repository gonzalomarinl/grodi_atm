"""Bridge maestro entre ROS 2 local y transporte compacto maestra-esclava."""

from __future__ import annotations

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import FaultReport, Heartbeat, LineTarget, MissionEvent, MissionState, SlaveStatus
from atm_link.codec import (
    fault_to_frame,
    frame_to_fault,
    frame_to_heartbeat,
    frame_to_mission_event,
    frame_to_slave_status,
    heartbeat_to_frame,
    line_target_to_frame,
    mission_event_to_frame,
    mission_state_to_frame,
)
from atm_link.protocol import FAULT, HEARTBEAT, MISSION_EVENT, SLAVE_STATUS
from atm_link.transport import JsonlTransport


class MasterLoraBridgeNode(Node):
    """Bridge maestro usando un transporte compacto y mensajes pequeños."""

    def __init__(self) -> None:
        super().__init__("master_lora_bridge")

        self.declare_parameter("machine_id", "master")
        self.declare_parameter("tx_path", "/tmp/atm_lora_master_to_slave.jsonl")
        self.declare_parameter("rx_path", "/tmp/atm_lora_slave_to_master.jsonl")
        self.declare_parameter("poll_period_sec", 0.2)
        self.declare_parameter("heartbeat_period_sec", 1.0)

        self.machine_id = self.get_parameter("machine_id").value
        self.transport = JsonlTransport(
            self.get_parameter("tx_path").value,
            self.get_parameter("rx_path").value,
        )

        self.slave_hb_pub = self.create_publisher(Heartbeat, "link/slave_heartbeat", 20)
        self.slave_status_pub = self.create_publisher(SlaveStatus, "link/incoming/slave_status", 20)
        self.fault_pub = self.create_publisher(FaultReport, "link/incoming/fault", 20)
        self.event_pub = self.create_publisher(MissionEvent, "link/incoming/event", 20)

        self.create_subscription(Heartbeat, "link/master_heartbeat", self.handle_master_heartbeat, 20)
        self.create_subscription(MissionState, "mission/state", self.handle_mission_state, 20)
        self.create_subscription(LineTarget, "link/outgoing/mission_target", self.handle_line_target, 20)
        self.create_subscription(MissionEvent, "link/outgoing/mission_event", self.handle_mission_event, 20)

        self.poll_timer = self.create_timer(
            float(self.get_parameter("poll_period_sec").value),
            self.poll_transport,
        )

        self.get_logger().info("Master LoRa bridge listo.")

    def handle_master_heartbeat(self, msg: Heartbeat) -> None:
        self.transport.send(heartbeat_to_frame(msg))

    def handle_mission_state(self, msg: MissionState) -> None:
        self.transport.send(mission_state_to_frame(msg))

    def handle_line_target(self, msg: LineTarget) -> None:
        self.transport.send(line_target_to_frame(msg))

    def handle_mission_event(self, msg: MissionEvent) -> None:
        self.transport.send(mission_event_to_frame(msg))

    def poll_transport(self) -> None:
        for frame in self.transport.poll():
            msg_type = frame.get("msg_type", "")
            if msg_type == HEARTBEAT:
                self.slave_hb_pub.publish(frame_to_heartbeat(frame))
            elif msg_type == SLAVE_STATUS:
                self.slave_status_pub.publish(frame_to_slave_status(frame))
            elif msg_type == FAULT:
                self.fault_pub.publish(frame_to_fault(frame))
            elif msg_type == MISSION_EVENT:
                self.event_pub.publish(frame_to_mission_event(frame))


def main() -> None:
    rclpy.init()
    node = MasterLoraBridgeNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
