// generated from rosidl_typesupport_introspection_cpp/resource/srv__type_support.cpp.em
// generated code does not contain a copyright notice

#include <rosidl_generator_c/service_type_support_struct.h>
#include <rosidl_typesupport_cpp/message_type_support.hpp>
#include <rosidl_typesupport_cpp/service_type_support.hpp>
#include "rosidl_typesupport_interface/macros.h"

#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

#include "contact/srv/add_two_floats__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

#include "contact/srv/add_two_floats__request__struct.hpp"
#include "contact/srv/add_two_floats__response__struct.hpp"

namespace contact
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers AddTwoFloats_service_members = {
  "contact",  // package name
  "AddTwoFloats",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<contact::AddTwoFloats>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t AddTwoFloats_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AddTwoFloats_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace contact


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<contact::srv::AddTwoFloats>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::contact::srv::rosidl_typesupport_introspection_cpp::AddTwoFloats_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::contact::srv::AddTwoFloats_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::contact::srv::AddTwoFloats_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, contact, srv, AddTwoFloats)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<contact::srv::AddTwoFloats>();
}

#ifdef __cplusplus
}
#endif
