#include <iostream>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "contact/msg/contact.hpp"

using namespace std::chrono_literals;

class ContactPublisher : public rclcpp::Node
{
public:
  ContactPublisher()
  : Node("address_book_publisher")
  {
    contact_publisher_ = this->create_publisher<contact::msg::Contact>("contact");

    auto publish_msg = [this]() -> void {
        auto msg = std::make_shared<contact::msg::Contact>();

        msg->first_name = "John";
        msg->last_name = "Doe";
        msg->age = 30;
        msg->gender = msg->MALE;
        msg->address = "unknown";

        std::cout << "Publishing Contact\nFirst:" << msg->first_name <<
          "  Last:" << msg->last_name << std::endl;

        contact_publisher_->publish(msg);
      };
    timer_ = this->create_wall_timer(1s, publish_msg);
  }

private:
  rclcpp::Publisher<contact::msg::Contact>::SharedPtr contact_publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);

  auto publisher_node = std::make_shared<ContactPublisher>();

  rclcpp::spin(publisher_node);

  return 0;
}