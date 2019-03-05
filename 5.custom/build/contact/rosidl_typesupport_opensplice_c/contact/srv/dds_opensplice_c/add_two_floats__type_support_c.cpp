// generated from rosidl_typesupport_opensplice_c/resource/srv__type_support_c.cpp.em
// generated code does not contain a copyright notice

#include "contact/srv/add_two_floats__rosidl_typesupport_opensplice_c.h"

#include <cstring>
#include <iostream>
#include <sstream>

#include "rmw/rmw.h"

#include "contact/msg/rosidl_typesupport_opensplice_c__visibility_control.h"
#include "contact/srv/add_two_floats__request.h"
#include "contact/srv/add_two_floats__response.h"
#include "contact/srv/dds_opensplice/ccpp_AddTwoFloats_Request_.h"
#include "contact/srv/dds_opensplice/ccpp_AddTwoFloats_Response_.h"
#include "contact/srv/dds_opensplice/ccpp_Sample_AddTwoFloats_Request_.h"
#include "contact/srv/dds_opensplice/ccpp_Sample_AddTwoFloats_Response_.h"
#include "rosidl_typesupport_opensplice_c/identifier.h"

// TODO(dirk-thomas) including another cpp file is just nasty
#include "contact/srv/dds_opensplice/add_two_floats__type_support.cpp"
#include "contact/msg/rosidl_generator_c__visibility_control.h"

#if defined(__cplusplus)
extern "C"
{
#endif

// forward declare type support functions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, contact, srv, AddTwoFloats_Request)();
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, contact, srv, AddTwoFloats_Response)();

const char *
register_types__srv__AddTwoFloats(
  void * untyped_participant, const char * request_type_name, const char * response_type_name)
{
  return contact::srv::typesupport_opensplice_cpp::register_types__AddTwoFloats(
    untyped_participant, request_type_name, response_type_name);
}

const char *
create_requester__srv__AddTwoFloats(
  void * untyped_participant, const char * service_name,
  void ** untyped_requester, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  return contact::srv::typesupport_opensplice_cpp::create_requester__AddTwoFloats(
    untyped_participant, service_name,
    untyped_requester, untyped_reader,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    avoid_ros_namespace_conventions,
    allocator);
}

const char *
create_responder__srv__AddTwoFloats(
  void * untyped_participant, const char * service_name,
  void ** untyped_responder, void ** untyped_reader,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  bool avoid_ros_namespace_conventions,
  void * (*allocator)(size_t))
{
  return contact::srv::typesupport_opensplice_cpp::create_responder__AddTwoFloats(
    untyped_participant, service_name,
    untyped_responder, untyped_reader,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    avoid_ros_namespace_conventions,
    allocator);
}

const char *
send_request__srv__AddTwoFloats(
  void * untyped_requester, const void * untyped_ros_request, int64_t * sequence_number)
{
  using SampleT = rosidl_typesupport_opensplice_cpp::Sample<contact::srv::dds_::AddTwoFloats_Request_>;

  SampleT request;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, contact, srv, AddTwoFloats_Request)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  callbacks->convert_ros_to_dds(untyped_ros_request, static_cast<void *>(&request.data()));

  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    contact::srv::dds_::AddTwoFloats_Request_,
    contact::srv::dds_::AddTwoFloats_Response_
  >;

  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  const char * error_string = requester->send_request(request);
  if (error_string) {
    return error_string;
  }
  *sequence_number = request.sequence_number_;

  return nullptr;
}

const char *
take_request__srv__AddTwoFloats(
  void * untyped_responder, rmw_request_id_t * request_header, void * untyped_ros_request,
  bool * taken)
{
  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    contact::srv::dds_::AddTwoFloats_Request_,
    contact::srv::dds_::AddTwoFloats_Response_
  >;

  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  rosidl_typesupport_opensplice_cpp::Sample<contact::srv::dds_::AddTwoFloats_Request_> request;
  const char * error_string = responder->take_request(request, taken);
  if (error_string) {
    return error_string;
  }

  if (*taken) {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, contact, srv, AddTwoFloats_Request)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(static_cast<void *>(&request.data()), untyped_ros_request);

    request_header->sequence_number = request.sequence_number_;
    std::memcpy(
      &request_header->writer_guid[0], &request.client_guid_0_, sizeof(request.client_guid_0_));
    std::memcpy(
      &request_header->writer_guid[0] + sizeof(request.client_guid_0_),
      &request.client_guid_1_, sizeof(request.client_guid_1_));

    *taken = true;
    return nullptr;
  }
  *taken = false;
  return nullptr;
}

const char *
send_response__srv__AddTwoFloats(
  void * untyped_responder, const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  rosidl_typesupport_opensplice_cpp::Sample<contact::srv::dds_::AddTwoFloats_Response_> response;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, contact, srv, AddTwoFloats_Response)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  callbacks->convert_ros_to_dds(untyped_ros_response, static_cast<void *>(&response.data()));

  using ResponderT = rosidl_typesupport_opensplice_cpp::Responder<
    contact::srv::dds_::AddTwoFloats_Request_,
    contact::srv::dds_::AddTwoFloats_Response_
  >;
  auto responder = reinterpret_cast<ResponderT *>(untyped_responder);

  const char * error_string = responder->send_response(*request_header, response);
  if (error_string) {
    return error_string;
  }
  return nullptr;
}

const char *
take_response__srv__AddTwoFloats(
  void * untyped_requester, rmw_request_id_t * request_header, void * untyped_ros_response,
  bool * taken)
{
  using RequesterT = rosidl_typesupport_opensplice_cpp::Requester<
    contact::srv::dds_::AddTwoFloats_Request_,
    contact::srv::dds_::AddTwoFloats_Response_
  >;
  auto requester = reinterpret_cast<RequesterT *>(untyped_requester);

  rosidl_typesupport_opensplice_cpp::Sample<contact::srv::dds_::AddTwoFloats_Response_> response;
  const char * error_string = requester->take_response(response, taken);
  if (error_string) {
    return error_string;
  }
  if (*taken) {
    request_header->sequence_number = response.sequence_number_;

    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, contact, srv, AddTwoFloats_Response)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(
      static_cast<void *>(&response.data()), untyped_ros_response);
    return nullptr;
  }

  return nullptr;
}

const char *
destroy_requester__srv__AddTwoFloats(void * untyped_requester, void (* deallocator)(void *))
{
  return contact::srv::typesupport_opensplice_cpp::destroy_requester__AddTwoFloats(
    untyped_requester, deallocator);
}

const char *
destroy_responder__srv__AddTwoFloats(void * untyped_responder, void (* deallocator)(void *))
{
  return contact::srv::typesupport_opensplice_cpp::destroy_responder__AddTwoFloats(
    untyped_responder, deallocator);
}

const char *
server_is_available__srv__AddTwoFloats(
  void * requester, const rmw_node_t * node, bool * is_available)
{
  return contact::srv::typesupport_opensplice_cpp::server_is_available__AddTwoFloats(
    requester, node, is_available);
}

static service_type_support_callbacks_t __callbacks = {
  "contact",
  "AddTwoFloats",
  &create_requester__srv__AddTwoFloats,
  &destroy_requester__srv__AddTwoFloats,
  &create_responder__srv__AddTwoFloats,
  &destroy_responder__srv__AddTwoFloats,
  &send_request__srv__AddTwoFloats,
  &take_request__srv__AddTwoFloats,
  &send_response__srv__AddTwoFloats,
  &take_response__srv__AddTwoFloats,
  &server_is_available__srv__AddTwoFloats,
};

static rosidl_service_type_support_t __type_support = {
  rosidl_typesupport_opensplice_c__identifier,
  &__callbacks,  // data
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_opensplice_c, contact, srv, AddTwoFloats)() {
  return &__type_support;
}

#if defined(__cplusplus)
}
#endif
