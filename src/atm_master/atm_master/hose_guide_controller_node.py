"""Controlador del guiado lateral de la manguera en la bobina de suelo."""

from __future__ import annotations

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import MasterStatus
from atm_interfaces.srv import SetAdmissionReelMode


class HoseGuideControllerNode(Node):
    """Gestiona el tornillo sin fin que ordena la manguera por capas."""

    VALID_MODES = {"STOP", "UNROLL", "ROLL"}

    def __init__(self) -> None:
        super().__init__("hose_guide_controller")

        self.declare_parameter("use_mock_backend", True)
        self.declare_parameter("startup_mode", "STOP")
        self.declare_parameter("startup_speed", 0.0)
        self.declare_parameter("status_period_sec", 0.5)
        self.declare_parameter("step_period_sec", 0.1)
        self.declare_parameter("travel_min", 0.0)
        self.declare_parameter("travel_max", 1.0)
        self.declare_parameter("travel_increment", 0.02)
        self.declare_parameter("max_speed", 1.0)

        startup_mode = str(self.get_parameter("startup_mode").value).upper()
        self.mode = startup_mode if startup_mode in self.VALID_MODES else "STOP"
        self.speed = max(0.0, float(self.get_parameter("startup_speed").value))
        self.max_speed = max(0.0, float(self.get_parameter("max_speed").value))
        self.travel_min = float(self.get_parameter("travel_min").value)
        self.travel_max = float(self.get_parameter("travel_max").value)
        self.travel_increment = abs(float(self.get_parameter("travel_increment").value))
        self.position = self.travel_min
        self.direction = 1.0
        self.use_mock_backend = bool(self.get_parameter("use_mock_backend").value)

        self.status_pub = self.create_publisher(MasterStatus, "master/hose_guide_status", 10)
        self.create_service(
            SetAdmissionReelMode,
            "master/set_hose_guide_mode",
            self.handle_set_mode,
        )
        self.status_timer = self.create_timer(
            float(self.get_parameter("status_period_sec").value),
            self.publish_status,
        )
        self.step_timer = self.create_timer(
            float(self.get_parameter("step_period_sec").value),
            self.update_position,
        )

        backend_name = "mock" if self.use_mock_backend else "hardware_ready"
        self.get_logger().info(f"Hose guide controller listo. backend={backend_name}")

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
        response.message = (
            f"Guiado de manguera en {self.mode} a {self.speed:.2f} "
            f"(pos={self.position:.2f})"
        )
        self.get_logger().info(response.message)
        return response

    def update_position(self) -> None:
        if self.mode == "STOP" or self.speed <= 0.0:
            return

        increment = self.travel_increment * self.speed * self.direction
        self.position += increment

        if self.position >= self.travel_max:
            self.position = self.travel_max
            self.direction = -1.0
        elif self.position <= self.travel_min:
            self.position = self.travel_min
            self.direction = 1.0

    def publish_status(self) -> None:
        msg = MasterStatus()
        msg.state = "READY"
        msg.pump_enabled = False
        msg.reel_state = f"{self.mode}:{self.speed:.2f}:x={self.position:.2f}"
        msg.link_ok = True
        msg.system_armed = False
        self.status_pub.publish(msg)


def main() -> None:
    rclpy.init()
    node = HoseGuideControllerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
