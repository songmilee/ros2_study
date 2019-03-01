import rclpy
from example_interfaces.srv import AddTwoInts

def main(args=None):
    rclpy.init(args=args)
    node = rclpy.create_node('py_client')
    cli = node.create_client(AddTwoInts, 'add_two_ints')

    req = AddTwoInts.Request()
    req.a = 30
    req.b = 15

    while not cli.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('service not avaliable, waiting again......')

    future = cli.call_async(req)
    rclpy.spin_until_future_complete(node, future)

    if future.result() is not None:
        node.get_logger().info('Result of add two ints %d + %d = %d' % (req.a, req.b, future.result().sum))   
    else:
        node.get_logger().info('Service call failed %r' % (future.exception()))

    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()