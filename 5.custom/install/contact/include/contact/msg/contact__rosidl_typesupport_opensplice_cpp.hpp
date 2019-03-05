// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#ifndef CONTACT__MSG__CONTACT__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define CONTACT__MSG__CONTACT__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_

#include "contact/msg/contact__struct.hpp"
#include "contact/msg/dds_opensplice/ccpp_Contact_.h"

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"

#include "contact/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace contact
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_contact
extern void register_type__Contact(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_contact
extern void convert_ros_message_to_dds(
  const contact::msg::Contact & ros_message,
  contact::msg::dds_::Contact_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_contact
extern void publish__Contact(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_contact
extern void convert_dds_message_to_ros(
  const contact::msg::dds_::Contact_ & dds_message,
  contact::msg::Contact & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_contact
extern bool take__Contact(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_contact
const char *
serialize__Contact(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_contact
const char *
deserialize__Contact(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);


}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace contact

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_contact
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, contact, msg, Contact)();

#ifdef __cplusplus
}
#endif

#endif  // CONTACT__MSG__CONTACT__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
