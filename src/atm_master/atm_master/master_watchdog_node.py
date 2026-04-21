"""Watchdog base de la maestra para vigilar enlace y heartbeat."""

import rclpy
from rclpy.node import Node

from atm_interfaces.msg import Heartbeat


class MasterWatchdogNode(Node):
    """Publica heartbeat y detecta silencio del lado remoto.

    En esta primera fase deja resuelto el patrón de heartbeat.
    El degradado de comunicaciones se conectará con mission_manager en la siguiente iteración.
    """

    def __init__(self) -> None:
        super().__init__("master_watchdog")

        self.declare_parameter("machine_id", "master")
        self.declare_parameter("publish_period_sec", 1.0)
        self.declare_parameter("timeout_sec", 5.0)

        self.machine_id = self.get_parameter("machine_id").value
        self.timeout_sec = float(self.get_parameter("timeout_sec").value)
        self.seq = 0
        self.last_slave_heartbeat = None

        self.pub = self.create_publisher(Heartbeat, "link/master_heartbeat", 10)
        self.create_subscription(
            Heartbeat,
            "link/slave_heartbeat",
            self.handle_slave_heartbeat,
            10,
        )
        self.publish_timer = self.create_timer(
            float(self.get_parameter("publish_period_sec").value),
            self.publish_heartbeat,
        )
        self.check_timer = self.create_timer(1.0, self.check_link)

        self.get_logger().info("Master watchdog listo.")

    def publish_heartbeat(self) -> None:
        self.seq += 1
        msg = Heartbeat()
        msg.node_name = self.get_name()
        msg.machine_id = self.machine_id
        msg.stamp = self.get_clock().now().to_msg()
        msg.seq = self.seq
        msg.ok = True
        msg.state = "ALIVE"
        self.pub.publish(msg)

    def handle_slave_heartbeat(self, _msg: Heartbeat) -> None:
        self.last_slave_heartbeat = self.get_clock().now()

    def check_link(self) -> None:
        if self.last_slave_heartbeat is None:
            return

        delta = (self.get_clock().now() - self.last_slave_heartbeat).nanoseconds / 1e9
        if delta > self.timeout_sec:
            self.get_logger().warn(f"Timeout de heartbeat de esclava: {delta:.1f}s")


def main() -> None:
    rclpy.init()
    node = MasterWatchdogNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
