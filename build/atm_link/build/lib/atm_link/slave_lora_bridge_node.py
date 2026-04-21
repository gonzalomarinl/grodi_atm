"""Bridge esclavo entre ROS 2 local y transporte compacto maestra-esclava."""

from __future__ import annotations

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import FaultReport, Heartbeat, LineTarget, MissionEvent, MissionState, SlaveStatus
from atm_link.codec import (
    fault_to_frame,
    frame_to_heartbeat,
    frame_to_line_target,
    frame_to_mission_event,
    frame_to_mission_state,
    heartbeat_to_frame,
    mission_event_to_frame,
    slave_status_to_frame,
)
from atm_link.protocol import HEARTBEAT, MISSION_EVENT, MISSION_STATE, MISSION_TARGET
from atm_link.transport import JsonlTransport


class SlaveLoraBridgeNode(Node):
    """Bridge esclavo usando un transporte compacto y mensajes pequeños."""

    def __init__(self) -> None:
        super().__init__("slave_lora_bridge")

        self.declare_parameter("machine_id", "slave")
        self.declare_parameter("tx_path", "/tmp/atm_lora_slave_to_master.jsonl")
        self.declare_parameter("rx_path", "/tmp/atm_lora_master_to_slave.jsonl")
        self.declare_parameter("poll_period_sec", 0.2)
        self.declare_parameter("heartbeat_period_sec", 1.0)

        self.machine_id = self.get_parameter("machine_id").value
        self.transport = JsonlTransport(
            self.get_parameter("tx_path").value,
            self.get_parameter("rx_path").value,
        )
        self.seq = 0

        self.master_hb_pub = self.create_publisher(Heartbeat, "link/master_heartbeat", 20)
        self.mission_state_pub = self.create_publisher(MissionState, "slave/incoming/mission_state", 20)
        self.target_pub = self.create_publisher(LineTarget, "slave/incoming/mission_target", 20)
        self.event_pub = self.create_publisher(MissionEvent, "slave/incoming/mission_event", 20)

        self.create_subscription(SlaveStatus, "slave/status", self.handle_slave_status, 20)
        self.create_subscription(FaultReport, "system/faults", self.handle_fault_report, 20)
        self.create_subscription(MissionEvent, "mission/events", self.handle_mission_event, 20)

        self.poll_timer = self.create_timer(
            float(self.get_parameter("poll_period_sec").value),
            self.poll_transport,
        )
        self.heartbeat_timer = self.create_timer(
            float(self.get_parameter("heartbeat_period_sec").value),
            self.publish_local_heartbeat,
        )

        self.get_logger().info("Slave LoRa bridge listo.")

    def publish_local_heartbeat(self) -> None:
        self.seq += 1
        msg = Heartbeat()
        msg.node_name = self.get_name()
        msg.machine_id = self.machine_id
        msg.seq = self.seq
        msg.ok = True
        msg.state = "ALIVE"
        self.transport.send(heartbeat_to_frame(msg))

    def handle_slave_status(self, msg: SlaveStatus) -> None:
        self.transport.send(slave_status_to_frame(msg))

    def handle_fault_report(self, msg: FaultReport) -> None:
        self.transport.send(fault_to_frame(msg))

    def handle_mission_event(self, msg: MissionEvent) -> None:
        interesting = {"return_started", "return_completed", "mission_cancelled", "fault_detected"}
        if msg.event_type in interesting:
            self.transport.send(mission_event_to_frame(msg))

    def poll_transport(self) -> None:
        for frame in self.transport.poll():
            msg_type = frame.get("msg_type", "")
            if msg_type == HEARTBEAT:
                self.master_hb_pub.publish(frame_to_heartbeat(frame))
            elif msg_type == MISSION_STATE:
                self.mission_state_pub.publish(frame_to_mission_state(frame))
            elif msg_type == MISSION_TARGET:
                self.target_pub.publish(frame_to_line_target(frame))
            elif msg_type == MISSION_EVENT:
                self.event_pub.publish(frame_to_mission_event(frame))


def main() -> None:
    rclpy.init()
    node = SlaveLoraBridgeNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
