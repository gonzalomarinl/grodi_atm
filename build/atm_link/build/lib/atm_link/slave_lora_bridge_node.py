"""Bridge esclavo entre ROS 2 local y enlace fiable maestra-esclava."""

from __future__ import annotations

from collections import deque
import time

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import FaultReport, Heartbeat, LineTarget, MissionEvent, MissionState, SlaveStatus
from atm_link import protocol
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
from atm_link.transport import create_transport


class SlaveLoraBridgeNode(Node):
    """Bridge esclavo usando un transporte fiable y mensajes pequeños."""

    def __init__(self) -> None:
        super().__init__("slave_lora_bridge")

        self.declare_parameter("machine_id", "slave")
        self.declare_parameter("transport_type", "jsonl")
        self.declare_parameter("tx_path", "/tmp/atm_lora_slave_to_master.jsonl")
        self.declare_parameter("rx_path", "/tmp/atm_lora_master_to_slave.jsonl")
        self.declare_parameter("uart_port", "/dev/serial0")
        self.declare_parameter("uart_baudrate", 9600)
        self.declare_parameter("uart_timeout_sec", 0.05)
        self.declare_parameter("poll_period_sec", 0.1)
        self.declare_parameter("heartbeat_period_sec", 1.0)
        self.declare_parameter("ack_timeout_sec", 0.4)
        self.declare_parameter("max_retries", 3)
        self.declare_parameter("dedupe_window_size", 64)

        self.machine_id = self.get_parameter("machine_id").value
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

        self.master_hb_pub = self.create_publisher(Heartbeat, "link/master_heartbeat", 20)
        self.mission_state_pub = self.create_publisher(MissionState, "slave/incoming/mission_state", 20)
        self.target_pub = self.create_publisher(LineTarget, "slave/incoming/mission_target", 20)
        self.event_pub = self.create_publisher(MissionEvent, "slave/incoming/mission_event", 20)
        self.diag_pub = self.create_publisher(MissionEvent, "link/diagnostics", 50)

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

    def publish_diag(self, event_type: str, detail: str) -> None:
        msg = MissionEvent()
        msg.event_type = event_type
        msg.source = self.get_name()
        msg.detail = detail
        msg.stamp = self.get_clock().now().to_msg()
        self.diag_pub.publish(msg)

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
            source_id=protocol.SLAVE_ID,
            target_id=protocol.MASTER_ID,
        )
        self.transport.send(full_frame)
        if protocol.requires_ack(full_frame):
            self.pending_acks[seq] = {"frame": full_frame, "sent_at": time.monotonic(), "retries": 0}
            self.publish_diag("link_tx_critical", f"type={full_frame['msg_type']} seq={seq}")

    def publish_local_heartbeat(self) -> None:
        msg = Heartbeat()
        msg.node_name = self.get_name()
        msg.machine_id = self.machine_id
        msg.seq = self.next_seq()
        msg.ok = True
        msg.state = "ALIVE"
        self.transport.send(
            protocol.build_frame(
                msg_type=protocol.HEARTBEAT,
                payload=heartbeat_to_frame(msg)["payload"],
                seq=msg.seq,
                ack_seq=0,
                source_id=protocol.SLAVE_ID,
                target_id=protocol.MASTER_ID,
                ack_required=False,
                critical=False,
            )
        )
        self.publish_diag("link_tx_heartbeat", f"seq={msg.seq}")

    def handle_slave_status(self, msg: SlaveStatus) -> None:
        self.send_frame(slave_status_to_frame(msg))

    def handle_fault_report(self, msg: FaultReport) -> None:
        self.send_frame(fault_to_frame(msg))

    def handle_mission_event(self, msg: MissionEvent) -> None:
        interesting = {
            "return_started",
            "return_completed",
            "mission_cancelled",
            "fault_detected",
            "pump_on_request",
            "pump_on_ack",
            "pump_off_request",
            "pump_off_ack",
            "target_skipped",
            "stop_confirmed",
            "spray_started",
            "spray_completed",
        }
        if msg.event_type in interesting:
            self.send_frame(mission_event_to_frame(msg))

    def send_ack(self, received_frame: dict) -> None:
        ack_seq = int(received_frame.get("seq", 0))
        self.transport.send(
            protocol.build_ack(
                seq=self.next_seq(),
                ack_seq=ack_seq,
                source_id=protocol.SLAVE_ID,
                target_id=protocol.MASTER_ID,
            )
        )
        self.publish_diag("link_ack_tx", f"ack_seq={ack_seq}")

    def mark_duplicate(self, frame: dict) -> bool:
        seq = int(frame.get("seq", 0))
        if seq in self.received_history:
            return True
        self.received_history.append(seq)
        return False

    def handle_ack(self, frame: dict) -> None:
        ack_seq = int(frame.get("ack_seq", 0))
        if self.pending_acks.pop(ack_seq, None) is not None:
            self.publish_diag("link_ack_received", f"ack_seq={ack_seq}")

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
                self.publish_diag("link_ack_timeout", f"type={entry['frame'].get('msg_type', '')} seq={seq}")
                expired.append(seq)
                continue
            entry["retries"] += 1
            entry["sent_at"] = now
            self.transport.send(entry["frame"])
            self.publish_diag(
                "link_retry",
                f"type={entry['frame'].get('msg_type', '')} seq={seq} retries={entry['retries']}",
            )
            self.get_logger().warning(
                f"Reintentando seq={seq}, tipo={entry['frame'].get('msg_type', '')}, "
                f"intento={entry['retries']}/{self.max_retries}"
            )
        for seq in expired:
            self.pending_acks.pop(seq, None)

    def publish_received_frame(self, frame: dict) -> None:
        msg_type = frame.get("msg_type", "")
        if msg_type == protocol.HEARTBEAT:
            self.master_hb_pub.publish(frame_to_heartbeat(frame))
        elif msg_type == protocol.MISSION_STATE:
            self.mission_state_pub.publish(frame_to_mission_state(frame))
        elif msg_type == protocol.MISSION_TARGET:
            self.target_pub.publish(frame_to_line_target(frame))
        elif msg_type == protocol.MISSION_EVENT:
            self.event_pub.publish(frame_to_mission_event(frame))

    def poll_transport(self) -> None:
        self.retry_pending()
        for frame in self.transport.poll():
            if not protocol.target_matches(frame, protocol.SLAVE_ID):
                continue

            parsed_flags = protocol.parse_flags(int(frame.get("flags", 0)))
            if frame.get("msg_type") == protocol.LINK_ACK or parsed_flags["is_ack"]:
                self.handle_ack(frame)
                continue

            is_duplicate = self.mark_duplicate(frame)
            if parsed_flags["ack_required"]:
                self.send_ack(frame)
            if is_duplicate:
                self.publish_diag("link_duplicate_rx", f"type={frame.get('msg_type', '')} seq={frame.get('seq', 0)}")
                continue

            if parsed_flags["ack_required"]:
                self.publish_diag("link_rx_critical", f"type={frame.get('msg_type', '')} seq={frame.get('seq', 0)}")
            self.publish_received_frame(frame)

    def destroy_node(self):
        try:
            self.transport.close()
        except Exception:
            pass
        return super().destroy_node()


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
