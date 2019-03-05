// generated from rosidl_typesupport_fastrtps_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

#include "contact/srv/add_two_floats__request__rosidl_typesupport_fastrtps_cpp.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_contact
cdr_serialize(
  const contact::srv::AddTwoFloats_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // field.name a
  cdr << ros_message.a;
  // field.name b
  cdr << ros_message.b;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_contact
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  contact::srv::AddTwoFloats_Request & ros_message)
{
  // field.name a
  cdr >> ros_message.a;

  // field.name b
  cdr >> ros_message.b;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_contact
get_serialized_size(
  const contact::srv::AddTwoFloats_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  (void)padding;

  // field.name a
  {
    size_t item_size = sizeof(ros_message.a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b
  {
    size_t item_size = sizeof(ros_message.b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_contact
max_serialized_size_AddTwoFloats_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  (void)padding;
  (void)full_bounded;

  // field.name a
  {
    size_t array_size = 1;


    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // field.name b
  {
    size_t array_size = 1;


    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool __cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const contact::srv::AddTwoFloats_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool __cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<contact::srv::AddTwoFloats_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t __get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const contact::srv::AddTwoFloats_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t __max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AddTwoFloats_Request(full_bounded, 0);
}

static message_type_support_callbacks_t callbacks = {
  "contact",
  "AddTwoFloats_Request",
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

}  // namespace srv

}  // namespace contact

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_contact
const rosidl_message_type_support_t *
get_message_type_support_handle<contact::srv::AddTwoFloats_Request>()
{
  return &contact::srv::typesupport_fastrtps_cpp::handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, contact, srv, AddTwoFloats_Request)() {
  return &contact::srv::typesupport_fastrtps_cpp::handle;
}

#ifdef __cplusplus
}
#endif
