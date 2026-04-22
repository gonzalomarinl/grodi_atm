"""Controlador del motor de la bobina de suelo."""

from __future__ import annotations

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import MasterStatus
from atm_interfaces.srv import SetAdmissionReelMode


class GroundReelMotorNode(Node):
    """Gestiona el motor de enrollado y desenrollado de la manguera principal.

    Mantiene la interfaz ya usada por la maestra:
    - servicio ``master/set_admission_reel_mode``;
    - topic ``master/reel_status``.

    En esta fase el backend queda preparado para hardware real, pero funciona en
    modo lógico mediante parámetros y publicación de estado.
    """

    VALID_MODES = {"STOP", "UNROLL", "ROLL"}

    def __init__(self) -> None:
        super().__init__("ground_reel_motor")

        self.declare_parameter("use_mock_backend", True)
        self.declare_parameter("startup_mode", "STOP")
        self.declare_parameter("startup_speed", 0.0)
        self.declare_parameter("status_period_sec", 0.5)
        self.declare_parameter("max_speed", 1.0)

        startup_mode = str(self.get_parameter("startup_mode").value).upper()
        self.mode = startup_mode if startup_mode in self.VALID_MODES else "STOP"
        self.speed = max(0.0, float(self.get_parameter("startup_speed").value))
        self.max_speed = max(0.0, float(self.get_parameter("max_speed").value))
        self.use_mock_backend = bool(self.get_parameter("use_mock_backend").value)

        self.status_pub = self.create_publisher(MasterStatus, "master/reel_status", 10)
        self.create_service(
            SetAdmissionReelMode,
            "master/set_admission_reel_mode",
            self.handle_set_mode,
        )
        self.status_timer = self.create_timer(
            float(self.get_parameter("status_period_sec").value),
            self.publish_status,
        )

        backend_name = "mock" if self.use_mock_backend else "hardware_ready"
        self.get_logger().info(f"Ground reel motor listo. backend={backend_name}")

    def handle_set_mode(
        self,
        request: SetAdmissionReelMode.Request,
        response: SetAdmissionReelMode.Response,
    ) -> SetAdmissionReelMode.Response:
        requested_mode = request.mode.upper()
        if requested_mode not in self.VALID_MODES:
            response.success = False
            response.message = f"Modo no válido: {request.mode}"
            return response

        clamped_speed = min(max(float(request.speed), 0.0), self.max_speed)
        if requested_mode == "STOP":
            clamped_speed = 0.0

        self.mode = requested_mode
        self.speed = clamped_speed
        response.success = True
        response.message = f"Bobina de suelo en {self.mode} a {self.speed:.2f}"
        self.get_logger().info(response.message)
        return response

    def publish_status(self) -> None:
        msg = MasterStatus()
        msg.state = "READY"
        msg.pump_enabled = False
        msg.reel_state = f"{self.mode}:{self.speed:.2f}"
        msg.link_ok = True
        msg.system_armed = False
        self.status_pub.publish(msg)


def main() -> None:
    rclpy.init()
    node = GroundReelMotorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
