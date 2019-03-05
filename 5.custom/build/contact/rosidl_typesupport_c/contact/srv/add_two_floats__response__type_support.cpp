// generated from rosidl_typesupport_c/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

#include <cstddef>

#include "rosidl_generator_c/message_type_support_struct.h"

#include "contact/msg/rosidl_typesupport_c__visibility_control.h"
#include "contact/srv/add_two_floats__response__struct.h"

#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace contact
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _type_support_ids_t
{
  const char * typesupport_identifier[3];
} _type_support_ids_t;

static const _type_support_ids_t _AddTwoFloats_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_opensplice_c",  // ::rosidl_typesupport_opensplice_c::typesupport_identifier,
  }
};

typedef struct _type_support_symbol_names_t
{
  const char * symbol_name[3];
} _type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _type_support_symbol_names_t _AddTwoFloats_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, contact, srv, AddTwoFloats_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, contact, srv, AddTwoFloats_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, contact, srv, AddTwoFloats_Response)),
  }
};

typedef struct _type_support_data_t
{
  void * data[3];
} _type_support_data_t;

static _type_support_data_t _AddTwoFloats_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddTwoFloats_Response_message_typesupport_map = {
  3,
  "contact",
  &_AddTwoFloats_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AddTwoFloats_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AddTwoFloats_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddTwoFloats_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddTwoFloats_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace contact

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_contact
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, contact, srv, AddTwoFloats_Response)() {
  return &::contact::srv::rosidl_typesupport_c::AddTwoFloats_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif