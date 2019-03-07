import rclpy
from contact.srv import AddTwoFloats

def main(args=None):
    rclpy.init(args=None)

    node = rclpy.create_node('client')
    cli = node.create_client(AddTwoFloats, 'add_two_floats')

    req = AddTwoFloats.Request()
    req.a = 9.9
    req.b = 3.1415

    while not cli.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('service not avaliable, waiting')

    future = cli.call_async(req)
    rclpy.spin_until_future_complete(node, future)

    if future.result() is not None:
        node.get_logger().info('Result of add two floats %f + %f = %f' %(req.a, req.b, future.result().sum))
    else:
        node.get_logger().info('Service call failed %r' %(future.exception()))

    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()