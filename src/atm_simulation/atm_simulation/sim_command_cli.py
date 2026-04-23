"""CLI robusto para enviar comandos a la simulacion sin depender de input() en launch."""

from __future__ import annotations

import argparse
import json
import sys
import time
import uuid

import rclpy
from rclpy.node import Node
from std_msgs.msg import String


MODE_ALIASES = {
    "n": "NORMAL",
    "normal": "NORMAL",
    "retry": "RETRY_LORA",
    "retry_lora": "RETRY_LORA",
    "degraded": "LINK_DEGRADED",
    "link_degraded": "LINK_DEGRADED",
    "emergency": "EMERGENCY_STOP",
    "emergency_stop": "EMERGENCY_STOP",
    "fault": "ACTUATION_FAULT",
    "actuation_fault": "ACTUATION_FAULT",
}


class SimCommandCli(Node):
    """Publica una peticion en sim/mission/request."""

    def __init__(self) -> None:
        super().__init__("sim_command_cli")
        self.publisher = self.create_publisher(String, "sim/mission/request", 10)

    def publish_request(self, payload: dict[str, object], repeat: int = 3) -> None:
        msg = String()
        msg.data = json.dumps(payload, ensure_ascii=True)

        deadline = time.monotonic() + 3.0
        while self.publisher.get_subscription_count() == 0 and time.monotonic() < deadline:
            rclpy.spin_once(self, timeout_sec=0.1)

        for _ in range(max(1, repeat)):
            self.publisher.publish(msg)
            rclpy.spin_once(self, timeout_sec=0.1)


def normalize_mode(value: str) -> str:
    return MODE_ALIASES.get(value.strip().lower(), "NORMAL")


def parse_args(argv: list[str]) -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Envia misiones a la simulacion Gazebo por topic ROS 2.",
    )
    subparsers = parser.add_subparsers(dest="command", required=True)

    general = subparsers.add_parser("general", help="lanza mision general en huecos 1..4")
    general.add_argument(
        "--mode",
        default="normal",
        help="normal, retry_lora, link_degraded, emergency_stop o actuation_fault",
    )
    general.add_argument("--mission-id", default="", help="identificador opcional de mision")

    selective = subparsers.add_parser("selective", help="lanza mision selectiva")
    selective.add_argument("gaps", nargs="+", type=int, help="huecos objetivo, por ejemplo: 1 3 4")
    selective.add_argument(
        "--mode",
        default="normal",
        help="normal, retry_lora, link_degraded, emergency_stop o actuation_fault",
    )
    selective.add_argument("--mission-id", default="", help="identificador opcional de mision")

    return parser.parse_args(argv)


def build_payload(args: argparse.Namespace) -> dict[str, object]:
    mission_id = args.mission_id or f"simcli_{uuid.uuid4().hex[:8]}"
    mode = normalize_mode(args.mode)

    if args.command == "general":
        return {
            "command": "start",
            "mission_id": mission_id,
            "mission_mode": "GENERAL",
            "targets": [1, 2, 3, 4],
            "test_mode": mode,
        }

    selected: list[int] = []
    for gap in args.gaps:
        if 1 <= gap <= 4 and gap not in selected:
            selected.append(gap)
    if not selected:
        raise ValueError("No se ha indicado ningun hueco valido entre 1 y 4.")

    return {
        "command": "start",
        "mission_id": mission_id,
        "mission_mode": "SELECTIVE",
        "targets": selected,
        "test_mode": mode,
    }


def main(argv: list[str] | None = None) -> int:
    args = parse_args(argv if argv is not None else sys.argv[1:])
    try:
        payload = build_payload(args)
    except ValueError as exc:
        print(f"Error: {exc}", file=sys.stderr)
        return 2

    rclpy.init()
    node = SimCommandCli()
    try:
        node.publish_request(payload)
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

    print(f"Mision enviada a sim/mission/request: {payload}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
