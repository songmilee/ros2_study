
import rclpy

from std_msgs.msg import String
 
 
def main(args=None):
    rclpy.init(args=args)
 
    node = rclpy.create_node('my_publisher')
    publisher = node.create_publisher(String, 'my')
 
    msg = String()
    
    def timer_callback():
        msg.data = 'This is my first publishing'
        node.get_logger().info('Publishing my message: "%s"' % msg.data)
        publisher.publish(msg)
 
    timer_period = 0.5  # seconds
    timer = node.create_timer(timer_period, timer_callback)
 
    rclpy.spin(node)

    node.destroy_timer(timer)
    node.destroy_node()
    rclpy.shutdown()
 
 
if __name__ == '__main__':
    main()