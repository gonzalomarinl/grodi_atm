"""Nodo base de enrollado/desenrollado de la manguera de admisión."""

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import MasterStatus
from atm_interfaces.srv import SetAdmissionReelMode


class AdmissionReelControllerNode(Node):
    """Control lógico del carrete de admisión sin dancer arm."""

    VALID_MODES = {"STOP", "UNROLL", "ROLL"}

    def __init__(self) -> None:
        super().__init__("admission_reel_controller")

        self.mode = "STOP"
        self.speed = 0.0

        self.status_pub = self.create_publisher(MasterStatus, "master/reel_status", 10)
        self.create_service(
            SetAdmissionReelMode,
            "master/set_admission_reel_mode",
            self.handle_set_mode,
        )
        self.status_timer = self.create_timer(1.0, self.publish_status)

        self.get_logger().info("Admission reel controller listo.")

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

        self.mode = requested_mode
        self.speed = request.speed
        response.success = True
        response.message = f"Modo {self.mode} con velocidad {self.speed:.2f}"
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
    node = AdmissionReelControllerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
