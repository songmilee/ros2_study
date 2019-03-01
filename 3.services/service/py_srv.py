import rclpy
from example_interfaces.srv import AddTwoInts

global_node = None

def py_srv_callback(request, response):
    global global_node
    response.sum = request.a + request.b

    global_node.get_logger().info("Incoming request : %d %d" % (request.a, request.b))

    return response


def main(args=None):
    global global_node
    rclpy.init(args=None)

    global_node = rclpy.create_node('py_srv')

    srv = global_node.create_service(AddTwoInts, 'add_two_ints', py_srv_callback)

    while rclpy.ok():
        rclpy.spin(global_node)
    
    global_node.destroy_service(srv)
    rclpy.shutdown()

if __name__ == "__main__":
    main()