"""Nodo base de control de bomba de la maestra."""

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import MasterStatus
from atm_interfaces.srv import StartPump, StopPump


class PumpControllerNode(Node):
    """Control lógico de bomba.

    Esta versión todavía no toca GPIO real. Deja resueltos:
    - servicios ROS 2 para arranque/parada;
    - publicación de estado;
    - punto único donde conectar la electrónica real después.
    """

    def __init__(self) -> None:
        super().__init__("pump_controller")

        self.declare_parameter("startup_enabled", False)
        self.pump_enabled = bool(self.get_parameter("startup_enabled").value)

        self.status_pub = self.create_publisher(MasterStatus, "master/status", 10)
        self.create_service(StartPump, "master/start_pump", self.handle_start_pump)
        self.create_service(StopPump, "master/stop_pump", self.handle_stop_pump)
        self.status_timer = self.create_timer(1.0, self.publish_status)

        self.get_logger().info("Pump controller listo.")

    def handle_start_pump(self, request: StartPump.Request, response: StartPump.Response) -> StartPump.Response:
        self.pump_enabled = request.enable
        response.success = True
        response.message = "Bomba habilitada." if self.pump_enabled else "Petición recibida con enable=False."
        self.get_logger().info(response.message)
        return response

    def handle_stop_pump(self, request: StopPump.Request, response: StopPump.Response) -> StopPump.Response:
        self.pump_enabled = not request.stop
        response.success = True
        response.message = "Bomba parada." if request.stop else "Petición recibida con stop=False."
        self.get_logger().info(response.message)
        return response

    def publish_status(self) -> None:
        msg = MasterStatus()
        msg.state = "READY" if self.pump_enabled else "IDLE"
        msg.pump_enabled = self.pump_enabled
        msg.reel_state = "UNKNOWN"
        msg.link_ok = True
        msg.system_armed = False
        self.status_pub.publish(msg)


def main() -> None:
    rclpy.init()
    node = PumpControllerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
