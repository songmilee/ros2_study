// generated from rosidl_typesupport_fastrtps_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

#include "contact/msg/contact__rosidl_typesupport_fastrtps_cpp.hpp"

#include <limits>
#include <stdexcept>
#include <string>

#include "rosidl_typesupport_cpp/message_type_support.hpp"

#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"

#include "fastcdr/Cdr.h"

// forward declaration of message dependencies and their conversion functions

namespace contact
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_contact
cdr_serialize(
  const contact::msg::Contact & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // field.name first_name
  cdr << ros_message.first_name;
  // field.name last_name
  cdr << ros_message.last_name;
  // field.name gender
  cdr << (ros_message.gender ? true : false);
  // field.name age
  cdr << ros_message.age;
  // field.name address
  cdr << ros_message.address;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_contact
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  contact::msg::Contact & ros_message)
{
  // field.name first_name
  cdr >> ros_message.first_name;

  // field.name last_name
  cdr >> ros_message.last_name;

  // field.name gender
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gender = tmp ? true : false;
  }

  // field.name age
  cdr >> ros_message.age;

  // field.name address
  cdr >> ros_message.address;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_contact
get_serialized_size(
  const contact::msg::Contact & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  (void)padding;

  // field.name first_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    ros_message.first_name.size() + 1;
  // field.name last_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    ros_message.last_name.size() + 1;
  // field.name gender
  {
    size_t item_size = sizeof(ros_message.gender);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name age
  {
    size_t item_size = sizeof(ros_message.age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    ros_message.address.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_contact
max_serialized_size_Contact(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  (void)padding;
  (void)full_bounded;

  // field.name first_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) + 1;
    }
  }
  // field.name last_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) + 1;
    }
  }
  // field.name gender
  {
    size_t array_size = 1;


    current_alignment += array_size * sizeof(uint8_t);
  }
  // field.name age
  {
    size_t array_size = 1;


    current_alignment += array_size * sizeof(uint8_t);
  }
  // field.name address
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) + 1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool __cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const contact::msg::Contact *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool __cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<contact::msg::Contact *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t __get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const contact::msg::Contact *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t __max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Contact(full_bounded, 0);
}

static message_type_support_callbacks_t callbacks = {
  "contact",
  "Contact",
  __cdr_serialize,
  __cdr_deserialize,
  __get_serialized_size,
  __max_serialized_size
};

static rosidl_message_type_support_t handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace contact

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_contact
const rosidl_message_type_support_t *
get_message_type_support_handle<contact::msg::Contact>()
{
  return &contact::msg::typesupport_fastrtps_cpp::handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, contact, msg, Contact)() {
  return &contact::msg::typesupport_fastrtps_cpp::handle;
}

#ifdef __cplusplus
}
#endif
