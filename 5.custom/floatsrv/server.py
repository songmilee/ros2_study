import rclpy
from contact.srv import AddTwoFloats

g_node = None

def add_two_floats_callback(req, res):
    global g_node
    res.sum = req.a + req.b

    g_node.get_logger().info("request : %f %f" % (req.a, req.b))

    return res

def main(args=None):
    global g_node
    rclpy.init(args=None)

    g_node = rclpy.create_node('server')

    srv = g_node.create_service(AddTwoFloats, 'add_two_floats', add_two_floats_callback)

    while rclpy.ok():
        rclpy.spin_once(g_node)

    g_node.destroy_service(srv)
    rclpy.shutdown()

if __name__ == "__main__":
    main()