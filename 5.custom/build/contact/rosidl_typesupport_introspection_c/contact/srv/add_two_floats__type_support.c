// generated from rosidl_typesupport_introspection_c/resource/srv__type_support.c.em
// generated code does not contain a copyright notice

#ifndef CONTACT__SRV__ADD_TWO_FLOATS__TYPE_SUPPORT_H_
#define CONTACT__SRV__ADD_TWO_FLOATS__TYPE_SUPPORT_H_

#include <rosidl_generator_c/service_type_support_struct.h>
#include "contact/msg/rosidl_typesupport_introspection_c__visibility_control.h"

#include "contact/srv/add_two_floats__rosidl_typesupport_introspection_c.h"
#include "contact/srv/add_two_floats__request__rosidl_typesupport_introspection_c.h"
#include "contact/srv/add_two_floats__response__rosidl_typesupport_introspection_c.h"

#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_service_members = {
  "contact",  // package name
  "AddTwoFloats",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_Request_message_type_support_handle,
  NULL  // response message
  // contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_Request_message_type_support_handle
};

static rosidl_service_type_support_t contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_service_type_support_handle = {
  0,
  &contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, contact, srv, AddTwoFloats_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, contact, srv, AddTwoFloats_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_contact
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, contact, srv, AddTwoFloats)() {
  if (!contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_service_type_support_handle.typesupport_identifier) {
    contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, contact, srv, AddTwoFloats_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, contact, srv, AddTwoFloats_Response)()->data;
  }

  return &contact__srv__rosidl_typesupport_introspection_c__AddTwoFloats_service_type_support_handle;
}

#endif  // CONTACT__SRV__ADD_TWO_FLOATS__TYPE_SUPPORT_H_
