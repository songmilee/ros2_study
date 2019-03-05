// generated from rosidl_typesupport_fastrtps_cpp/resource/srv__type_support.cpp.em
// generated code does not contain a copyright notice

#include "contact/srv/add_two_floats__rosidl_typesupport_fastrtps_cpp.hpp"

#include "rmw/error_handling.h"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

#include "contact/srv/add_two_floats__struct.hpp"
#include "contact/srv/add_two_floats__request__rosidl_typesupport_fastrtps_cpp.hpp"
#include "contact/srv/add_two_floats__response__rosidl_typesupport_fastrtps_cpp.hpp"

namespace contact
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t callbacks = {
  "contact",
  "AddTwoFloats",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, contact, srv, AddTwoFloats_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, contact, srv, AddTwoFloats_Response)(),
};

static rosidl_service_type_support_t handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace contact

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_contact
const rosidl_service_type_support_t *
get_service_type_support_handle<contact::srv::AddTwoFloats>()
{
  return &contact::srv::typesupport_fastrtps_cpp::handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, contact, srv, AddTwoFloats)() {
  return &contact::srv::typesupport_fastrtps_cpp::handle;
}

#ifdef __cplusplus
}
#endif
