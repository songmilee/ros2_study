// generated from rosidl_typesupport_introspection_c/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>

#include <contact/srv/add_two_floats__response__rosidl_typesupport_introspection_c.h>
#include "contact/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"

#include "contact/srv/add_two_floats__response__struct.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(contact__srv__AddTwoFloats_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_Response_message_members = {
  "contact",  // package name
  "AddTwoFloats_Response",  // message name
  1,  // number of fields
  sizeof(contact__srv__AddTwoFloats_Response),
  contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_Response_message_type_support_handle = {
  0,
  &contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_contact
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, contact, srv, AddTwoFloats_Response)() {
  if (!contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_Response_message_type_support_handle.typesupport_identifier) {
    contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
