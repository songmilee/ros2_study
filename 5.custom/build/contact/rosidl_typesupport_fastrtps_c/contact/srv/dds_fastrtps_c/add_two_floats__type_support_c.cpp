// generated from rosidl_typesupport_fastrtps_c/resource/srv__type_support_c.cpp.em
// generated code does not contain a copyright notice

#include "contact/srv/add_two_floats__rosidl_typesupport_fastrtps_c.h"

// Provides the definition of the service_type_support_callbacks_t struct.
#include <rosidl_typesupport_fastrtps_cpp/service_type_support.h>

#include "rosidl_typesupport_cpp/service_type_support.hpp"
#include "rosidl_typesupport_fastrtps_c/identifier.h"

#include "contact/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "contact/srv/add_two_floats__request.h"
#include "contact/srv/add_two_floats__response.h"

#include "contact/srv/add_two_floats__request__rosidl_typesupport_fastrtps_c.h"
#include "contact/srv/add_two_floats__response__rosidl_typesupport_fastrtps_c.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t callbacks = {
  "contact",
  "AddTwoFloats",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, contact, srv, AddTwoFloats_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, contact, srv, AddTwoFloats_Response)(),
};

static rosidl_service_type_support_t handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, contact, srv, AddTwoFloats)() {
  return &handle;
}

#if defined(__cplusplus)
}
#endif
