"""Cargador de misión desde servidor o snapshot local para la Raspberry maestra."""

from __future__ import annotations

import json
import uuid
from pathlib import Path

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from std_srvs.srv import Trigger

from atm_interfaces.action import ExecuteMission


class ServerMissionLoaderNode(Node):
    """Prepara la misión del atomizador a partir de datos externos.

    Esta primera versión queda lista para pruebas futuras:
    - puede consultar periódicamente una fuente local JSON;
    - filtra por zona e id del robot;
    - traduce el mapa general a waypoints entre líneos;
    - traduce anomalías a gaps concretos;
    - deja una confirmación explícita antes de ejecutar la misión.

    La integración HTTP real con servidor puede añadirse encima de esta misma lógica
    cuando quede cerrada la API.
    """

    def __init__(self) -> None:
        super().__init__("server_mission_loader")

        self.declare_parameter("zone_id", "zone_a")
        self.declare_parameter("robot_id", "atm_001")
        self.declare_parameter("mission_source_path", "/tmp/atm_pending_mission.json")
        self.declare_parameter("poll_period_sec", 10.0)
        self.declare_parameter("auto_poll", True)

        self.zone_id = str(self.get_parameter("zone_id").value)
        self.robot_id = str(self.get_parameter("robot_id").value)
        self.source_path = Path(str(self.get_parameter("mission_source_path").value))
        self.pending_mission: dict | None = None
        self.last_consumed_mission_id = ""

        self.execute_client = ActionClient(self, ExecuteMission, "mission/execute")
        self.create_service(Trigger, "mission_loader/check_pending", self.handle_check_pending)
        self.create_service(Trigger, "mission_loader/confirm_pending", self.handle_confirm_pending)
        self.create_service(Trigger, "mission_loader/clear_pending", self.handle_clear_pending)

        if bool(self.get_parameter("auto_poll").value):
            self.create_timer(float(self.get_parameter("poll_period_sec").value), self.poll_pending_source)

        self.get_logger().info(
            f"Mission loader listo. zone_id={self.zone_id}, robot_id={self.robot_id}, source={self.source_path}"
        )

    def poll_pending_source(self) -> None:
        mission = self.load_pending_snapshot()
        if mission is None:
            return
        if self.pending_mission != mission:
            self.pending_mission = mission
            self.get_logger().info(
                f"Misión pendiente cargada: type={mission['mission_type']} targets={len(mission['gap_ids'])}"
            )

    def load_pending_snapshot(self) -> dict | None:
        if not self.source_path.exists():
            return None
        try:
            payload = json.loads(self.source_path.read_text(encoding="utf-8"))
        except Exception as exc:
            self.get_logger().warning(f"No se pudo leer la misión pendiente: {exc}")
            return None

        if payload.get("zone_id") != self.zone_id:
            return None

        allowed_robots = payload.get("robot_ids", [])
        if allowed_robots and self.robot_id not in allowed_robots:
            return None

        line_count = int(payload.get("line_count", 0))
        mission_type = str(payload.get("mission_type", "GENERAL_STOP_MISSION"))
        anomaly_lines = [int(value) for value in payload.get("anomaly_line_ids", [])]

        if line_count < 2:
            self.get_logger().warning("Snapshot ignorado: line_count debe ser >= 2.")
            return None

        gap_ids, line_ids, stop_indices = self.plan_targets(
            mission_type=mission_type,
            line_count=line_count,
            anomaly_lines=anomaly_lines,
        )
        if not gap_ids:
            return None

        mission_id = payload.get("mission_id") or f"{mission_type.lower()}_{uuid.uuid4().hex[:8]}"
        if mission_id == self.last_consumed_mission_id:
            return None
        return {
            "mission_id": mission_id,
            "mission_type": mission_type,
            "gap_ids": gap_ids,
            "line_ids": line_ids,
            "stop_indices": stop_indices,
        }

    def plan_targets(
        self,
        mission_type: str,
        line_count: int,
        anomaly_lines: list[int],
    ) -> tuple[list[str], list[str], list[int]]:
        gap_count = line_count - 1

        if mission_type == "GENERAL_STOP_MISSION":
            gap_ids = [f"gap_{idx}_{idx + 1}" for idx in range(1, gap_count + 1)]
            line_ids = [""] * gap_count
            stop_indices = list(range(1, gap_count + 1))
            return gap_ids, line_ids, stop_indices

        if mission_type == "SELECTIVE_LINE_MISSION":
            if not anomaly_lines:
                self.get_logger().warning("Misión selectiva ignorada: no hay anomaly_line_ids.")
                return [], [], []

            gap_to_line: dict[int, str] = {}
            for line_id in anomaly_lines:
                gap_idx = max(1, min(gap_count, line_id - 1))
                gap_to_line.setdefault(gap_idx, f"line_{line_id}")

            gaps = sorted(gap_to_line.keys())
            gap_ids = [f"gap_{gap_idx}_{gap_idx + 1}" for gap_idx in gaps]
            mapped_lines = [gap_to_line[gap_idx] for gap_idx in gaps]
            stop_indices = gaps
            return gap_ids, mapped_lines, stop_indices

        self.get_logger().warning(f"mission_type desconocido: {mission_type}")
        return [], [], []

    def handle_check_pending(self, _request, response):
        mission = self.load_pending_snapshot()
        if mission is None:
            response.success = False
            response.message = "No hay misión pendiente compatible para este robot."
            return response

        self.pending_mission = mission
        response.success = True
        response.message = (
            f"Misión pendiente lista: {mission['mission_type']} con {len(mission['gap_ids'])} objetivos."
        )
        return response

    def handle_confirm_pending(self, _request, response):
        if self.pending_mission is None:
            response.success = False
            response.message = "No hay misión pendiente para confirmar."
            return response

        if not self.execute_client.wait_for_server(timeout_sec=2.0):
            response.success = False
            response.message = "Acción mission/execute no disponible."
            return response

        goal = ExecuteMission.Goal()
        goal.mission_id = str(self.pending_mission["mission_id"])
        goal.mission_type = str(self.pending_mission["mission_type"])
        goal.line_ids = list(self.pending_mission["gap_ids"])
        goal.target_line_ids = list(self.pending_mission["line_ids"])
        goal.stop_indices = [int(value) for value in self.pending_mission["stop_indices"]]
        self.execute_client.send_goal_async(goal)

        response.success = True
        response.message = f"Misión {goal.mission_id} enviada para ejecución."
        self.last_consumed_mission_id = goal.mission_id
        self.pending_mission = None
        return response

    def handle_clear_pending(self, _request, response):
        self.pending_mission = None
        response.success = True
        response.message = "Misión pendiente descartada."
        return response


def main() -> None:
    rclpy.init()
    node = ServerMissionLoaderNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
