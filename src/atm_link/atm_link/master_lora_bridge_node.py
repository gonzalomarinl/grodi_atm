"""Bridge maestro entre ROS 2 local y enlace fiable maestra-esclava."""

from __future__ import annotations

from collections import deque
import time

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import FaultReport, Heartbeat, LineTarget, MissionEvent, MissionState, SlaveStatus
from atm_link import protocol
from atm_link.codec import (
    frame_to_fault,
    frame_to_heartbeat,
    frame_to_mission_event,
    frame_to_slave_status,
    heartbeat_to_frame,
    line_target_to_frame,
    mission_event_to_frame,
    mission_state_to_frame,
)
from atm_link.transport import create_transport


class MasterLoraBridgeNode(Node):
    """Bridge maestro usando un transporte fiable y mensajes pequeños."""

    def __init__(self) -> None:
        super().__init__("master_lora_bridge")

        self.declare_parameter("machine_id", "master")
        self.declare_parameter("transport_type", "jsonl")
        self.declare_parameter("tx_path", "/tmp/atm_lora_master_to_slave.jsonl")
        self.declare_parameter("rx_path", "/tmp/atm_lora_slave_to_master.jsonl")
        self.declare_parameter("uart_port", "/dev/serial0")
        self.declare_parameter("uart_baudrate", 9600)
        self.declare_parameter("uart_timeout_sec", 0.05)
        self.declare_parameter("poll_period_sec", 0.1)
        self.declare_parameter("ack_timeout_sec", 0.4)
        self.declare_parameter("max_retries", 3)
        self.declare_parameter("dedupe_window_size", 64)

        self.transport = create_transport(
            str(self.get_parameter("transport_type").value),
            tx_path=str(self.get_parameter("tx_path").value),
            rx_path=str(self.get_parameter("rx_path").value),
            uart_port=str(self.get_parameter("uart_port").value),
            uart_baudrate=int(self.get_parameter("uart_baudrate").value),
            uart_timeout_sec=float(self.get_parameter("uart_timeout_sec").value),
        )
        self.ack_timeout = float(self.get_parameter("ack_timeout_sec").value)
        self.max_retries = int(self.get_parameter("max_retries").value)
        self.received_history: deque[int] = deque(maxlen=max(1, int(self.get_parameter("dedupe_window_size").value)))
        self.seq = 0
        self.pending_acks: dict[int, dict] = {}

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

    def next_seq(self) -> int:
        self.seq = protocol.next_seq(self.seq)
        return self.seq

    def send_frame(self, frame: dict) -> None:
        seq = self.next_seq()
        full_frame = protocol.build_frame(
            msg_type=frame["msg_type"],
            payload=frame.get("payload", {}),
            seq=seq,
            ack_seq=0,
            source_id=protocol.MASTER_ID,
            target_id=protocol.SLAVE_ID,
        )
        self.transport.send(full_frame)
        if protocol.requires_ack(full_frame):
            self.pending_acks[seq] = {"frame": full_frame, "sent_at": time.monotonic(), "retries": 0}

    def handle_master_heartbeat(self, msg: Heartbeat) -> None:
        self.send_frame(heartbeat_to_frame(msg))

    def handle_mission_state(self, msg: MissionState) -> None:
        self.send_frame(mission_state_to_frame(msg))

    def handle_line_target(self, msg: LineTarget) -> None:
        self.send_frame(line_target_to_frame(msg))

    def handle_mission_event(self, msg: MissionEvent) -> None:
        self.send_frame(mission_event_to_frame(msg))

    def send_ack(self, received_frame: dict) -> None:
        self.transport.send(
            protocol.build_ack(
                seq=self.next_seq(),
                ack_seq=int(received_frame.get("seq", 0)),
                source_id=protocol.MASTER_ID,
                target_id=protocol.SLAVE_ID,
            )
        )

    def mark_duplicate(self, frame: dict) -> bool:
        seq = int(frame.get("seq", 0))
        if seq in self.received_history:
            return True
        self.received_history.append(seq)
        return False

    def handle_ack(self, frame: dict) -> None:
        self.pending_acks.pop(int(frame.get("ack_seq", 0)), None)

    def retry_pending(self) -> None:
        now = time.monotonic()
        expired: list[int] = []
        for seq, entry in list(self.pending_acks.items()):
            if (now - entry["sent_at"]) < self.ack_timeout:
                continue
            if entry["retries"] >= self.max_retries:
                self.get_logger().warning(
                    f"ACK agotado para seq={seq}, tipo={entry['frame'].get('msg_type', '')}"
                )
                expired.append(seq)
                continue
            entry["retries"] += 1
            entry["sent_at"] = now
            self.transport.send(entry["frame"])
            self.get_logger().warning(
                f"Reintentando seq={seq}, tipo={entry['frame'].get('msg_type', '')}, "
                f"intento={entry['retries']}/{self.max_retries}"
            )
        for seq in expired:
            self.pending_acks.pop(seq, None)

    def publish_received_frame(self, frame: dict) -> None:
        msg_type = frame.get("msg_type", "")
        if msg_type == protocol.HEARTBEAT:
            self.slave_hb_pub.publish(frame_to_heartbeat(frame))
        elif msg_type == protocol.SLAVE_STATUS:
            self.slave_status_pub.publish(frame_to_slave_status(frame))
        elif msg_type == protocol.FAULT:
            self.fault_pub.publish(frame_to_fault(frame))
        elif msg_type == protocol.MISSION_EVENT:
            self.event_pub.publish(frame_to_mission_event(frame))

    def poll_transport(self) -> None:
        self.retry_pending()
        for frame in self.transport.poll():
            if not protocol.target_matches(frame, protocol.MASTER_ID):
                continue

            parsed_flags = protocol.parse_flags(int(frame.get("flags", 0)))
            if frame.get("msg_type") == protocol.LINK_ACK or parsed_flags["is_ack"]:
                self.handle_ack(frame)
                continue

            is_duplicate = self.mark_duplicate(frame)
            if parsed_flags["ack_required"]:
                self.send_ack(frame)
            if is_duplicate:
                continue

            self.publish_received_frame(frame)

    def destroy_node(self):
        try:
            self.transport.close()
        except Exception:
            pass
        return super().destroy_node()


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
