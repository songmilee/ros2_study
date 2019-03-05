// generated from rosidl_typesupport_opensplice_cpp/resource/msg__type_support.cpp.em
// generated code does not contain a copyright notice

#include "contact/msg/contact__rosidl_typesupport_opensplice_cpp.hpp"

#include <limits>
#include <stdexcept>

#include <u_instanceHandle.h>
#include <CdrTypeSupport.h>

#include "rosidl_typesupport_cpp/message_type_support.hpp"

#include "contact/msg/contact__struct.hpp"
#include "contact/msg/dds_opensplice/ccpp_Contact_.h"
#include "rosidl_typesupport_opensplice_cpp/identifier.hpp"
#include "rosidl_typesupport_opensplice_cpp/message_type_support.h"
#include "rosidl_typesupport_opensplice_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_opensplice_cpp/u__instanceHandle.h"
#include "rmw/rmw.h"


// forward declaration of message dependencies and their conversion functions

namespace contact
{

namespace msg
{

namespace typesupport_opensplice_cpp
{

using __dds_msg_type = contact::msg::dds_::Contact_;
using __ros_msg_type = contact::msg::Contact;

static contact::msg::dds_::Contact_TypeSupport __type_support;

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_contact
const char *
register_type__Contact(
  void * untyped_participant,
  const char * type_name)
{
  if (!untyped_participant) {
    return "untyped participant handle is null";
  }
  if (!type_name) {
    return "type name handle is null";
  }
  DDS::DomainParticipant * participant =
    static_cast<DDS::DomainParticipant *>(untyped_participant);

  DDS::ReturnCode_t status = __type_support.register_type(participant, type_name);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "contact::msg::dds_::Contact_TypeSupport.register_type: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "contact::msg::dds_::Contact_TypeSupport.register_type: "
             "bad domain participant or type name parameter";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "contact::msg::dds_::Contact_TypeSupport.register_type: "
             "out of resources";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "contact::msg::dds_::Contact_TypeSupport.register_type: "
             "already registered with a different TypeSupport class";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "contact::msg::dds_::Contact_TypeSupport.register_type: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_contact
void
convert_ros_message_to_dds(const __ros_msg_type & ros_message, __dds_msg_type & dds_message)
{
  // field.name first_name
  dds_message.first_name_ = ros_message.first_name.c_str();
  // field.name last_name
  dds_message.last_name_ = ros_message.last_name.c_str();
  // field.name gender
  dds_message.gender_ = ros_message.gender;
  // field.name age
  dds_message.age_ = ros_message.age;
  // field.name address
  dds_message.address_ = ros_message.address.c_str();
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_contact
const char *
publish__Contact(
  void * untyped_topic_writer,
  const void * untyped_ros_message)
{
  DDS::DataWriter * topic_writer = static_cast<DDS::DataWriter *>(untyped_topic_writer);

  const __ros_msg_type & ros_message = *static_cast<const __ros_msg_type *>(untyped_ros_message);
  __dds_msg_type dds_message;
  convert_ros_message_to_dds(ros_message, dds_message);

  contact::msg::dds_::Contact_DataWriter * data_writer =
    contact::msg::dds_::Contact_DataWriter::_narrow(topic_writer);
  DDS::ReturnCode_t status = data_writer->write(dds_message, DDS::HANDLE_NIL);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "contact::msg::dds_::Contact_DataWriter.write: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "contact::msg::dds_::Contact_DataWriter.write: "
             "bad handle or instance_data parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "contact::msg::dds_::Contact_DataWriter.write: "
             "this contact::msg::dds_::Contact_DataWriter has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "contact::msg::dds_::Contact_DataWriter.write: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "contact::msg::dds_::Contact_DataWriter.write: "
             "this contact::msg::dds_::Contact_DataWriter is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "contact::msg::dds_::Contact_DataWriter.write: "
             "the handle has not been registered with this contact::msg::dds_::Contact_DataWriter";
    case DDS::RETCODE_TIMEOUT:
      return "contact::msg::dds_::Contact_DataWriter.write: "
             "writing resulted in blocking and then exceeded the timeout set by the "
             "max_blocking_time of the ReliabilityQosPolicy";
    case DDS::RETCODE_OK:
      return nullptr;
    default:
      return "contact::msg::dds_::Contact_DataWriter.write: unknown return code";
  }
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_contact
void
convert_dds_message_to_ros(const __dds_msg_type & dds_message, __ros_msg_type & ros_message)
{
  // field.name first_name
  ros_message.first_name =
    dds_message.first_name_;
  // field.name last_name
  ros_message.last_name =
    dds_message.last_name_;
  // field.name gender
  ros_message.gender =
    (dds_message.gender_ != 0);
  // field.name age
  ros_message.age =
    dds_message.age_;
  // field.name address
  ros_message.address =
    dds_message.address_;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_contact
const char *
take__Contact(
  void * untyped_topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken,
  void * sending_publication_handle)
{
  if (untyped_ros_message == 0) {
    return "invalid ros message pointer";
  }

  DDS::DataReader * topic_reader = static_cast<DDS::DataReader *>(untyped_topic_reader);

  contact::msg::dds_::Contact_DataReader * data_reader =
    contact::msg::dds_::Contact_DataReader::_narrow(topic_reader);

  contact::msg::dds_::Contact_Seq dds_messages;
  DDS::SampleInfoSeq sample_infos;
  DDS::ReturnCode_t status = data_reader->take(
    dds_messages,
    sample_infos,
    1,
    DDS::ANY_SAMPLE_STATE,
    DDS::ANY_VIEW_STATE,
    DDS::ANY_INSTANCE_STATE);

  const char * errs = nullptr;
  bool ignore_sample = false;

  switch (status) {
    case DDS::RETCODE_ERROR:
      errs = "contact::msg::dds_::Contact_DataReader.take: "
        "an internal error has occurred";
      goto finally;
    case DDS::RETCODE_ALREADY_DELETED:
      errs = "contact::msg::dds_::Contact_DataReader.take: "
        "this contact::msg::dds_::Contact_DataReader has already been deleted";
      goto finally;
    case DDS::RETCODE_OUT_OF_RESOURCES:
      errs = "contact::msg::dds_::Contact_DataReader.take: "
        "out of resources";
      goto finally;
    case DDS::RETCODE_NOT_ENABLED:
      errs = "contact::msg::dds_::Contact_DataReader.take: "
        "this contact::msg::dds_::Contact_DataReader is not enabled";
      goto finally;
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      errs = "contact::msg::dds_::Contact_DataReader.take: "
        "a precondition is not met, one of: "
        "max_samples > maximum and max_samples != LENGTH_UNLIMITED, or "
        "the two sequences do not have matching parameters (length, maximum, release), or "
        "maximum > 0 and release is false.";
      goto finally;
    case DDS::RETCODE_NO_DATA:
      *taken = false;
      errs = nullptr;
      goto finally;
    case DDS::RETCODE_OK:
      break;
    default:
      errs = "contact::msg::dds_::Contact_DataReader.take: unknown return code";
      goto finally;
  }

  {
    DDS::SampleInfo & sample_info = sample_infos[0];
    if (!sample_info.valid_data) {
      // skip sample without data
      ignore_sample = true;
    } else {
      DDS::InstanceHandle_t sender_handle = sample_info.publication_handle;
      auto sender_gid = u_instanceHandleToGID(sender_handle);
      if (ignore_local_publications) {
        // compare the system id from the sender and this receiver
        // if they are equal the sample has been sent from this process and should be ignored
        DDS::InstanceHandle_t receiver_handle = topic_reader->get_instance_handle();
        auto receiver_gid = u_instanceHandleToGID(receiver_handle);
        ignore_sample = sender_gid.systemId == receiver_gid.systemId;
      }
      // This is nullptr when being used with plain rmw_take, so check first.
      if (sending_publication_handle) {
        *static_cast<DDS::InstanceHandle_t *>(sending_publication_handle) = sender_handle;
      }
    }
  }

  if (!ignore_sample) {
    __ros_msg_type & ros_message = *static_cast<__ros_msg_type *>(untyped_ros_message);
    convert_dds_message_to_ros(dds_messages[0], ros_message);
    *taken = true;
  } else {
    *taken = false;
  }

finally:
  // Ensure the loan is returned.
  status = data_reader->return_loan(dds_messages, sample_infos);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "contact::msg::dds_::Contact_DataReader.return_loan: "
             "an internal error has occurred";
    case DDS::RETCODE_ALREADY_DELETED:
      return "contact::msg::dds_::Contact_DataReader.return_loan: "
             "this contact::msg::dds_::Contact_DataReader has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "contact::msg::dds_::Contact_DataReader.return_loan: "
             "out of resources";
    case DDS::RETCODE_NOT_ENABLED:
      return "contact::msg::dds_::Contact_DataReader.return_loan: "
             "this contact::msg::dds_::Contact_DataReader is not enabled";
    case DDS::RETCODE_PRECONDITION_NOT_MET:
      return "contact::msg::dds_::Contact_DataReader.return_loan: "
             "a precondition is not met, one of: "
             "the data_values and info_seq do not belong to a single related pair, or "
             "the data_values and info_seq were not obtained from this "
             "contact::msg::dds_::Contact_DataReader";
    case DDS::RETCODE_OK:
      break;
    default:
      return "contact::msg::dds_::Contact_DataReader.return_loan failed with "
             "unknown return code";
  }

  return errs;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_contact
const char *
serialize__Contact(
  const void * untyped_ros_message,
  void * untyped_serialized_data)
{
  const __ros_msg_type & ros_message = *static_cast<const __ros_msg_type *>(untyped_ros_message);
  __dds_msg_type dds_message;

  convert_ros_message_to_dds(ros_message, dds_message);

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support);
  DDS::OpenSplice::CdrSerializedData * serdata = nullptr;

  DDS::ReturnCode_t status = cdr_ts.serialize(&dds_message, &serdata);
  switch (status) {
    case DDS::RETCODE_ERROR:
      return "contact::msg::dds_::Contact_TypeSupport.serialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "contact::msg::dds_::Contact_TypeSupport.serialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "contact::msg::dds_::Contact_TypeSupport.serialize: "
             "this contact::msg::dds_::Contact_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "contact::msg::dds_::Contact_TypeSupport.serialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "contact::msg::dds_::Contact_TypeSupport.serialize failed with "
             "unknown return code";
  }

  rmw_serialized_message_t * serialized_data =
    static_cast<rmw_serialized_message_t *>(untyped_serialized_data);

  auto data_length = serdata->get_size();

  if (serialized_data->buffer_capacity < data_length) {
    if (rmw_serialized_message_resize(serialized_data, data_length) == RMW_RET_OK) {
      serialized_data->buffer_capacity = data_length;
    } else {
      delete serdata;
      return "contact::msg::dds_::Contact_TypeSupport.serialize: "
             "unable to dynamically resize serialized message";
    }
  }

  serialized_data->buffer_length = data_length;
  serdata->get_data(serialized_data->buffer);

  delete serdata;

  return nullptr;
}

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_contact
const char *
deserialize__Contact(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message)
{
  __dds_msg_type dds_message;

  DDS::OpenSplice::CdrTypeSupport cdr_ts(__type_support);

  DDS::ReturnCode_t status = cdr_ts.deserialize(buffer, length, &dds_message);

  switch (status) {
    case DDS::RETCODE_ERROR:
      return "contact::msg::dds_::Contact_TypeSupport.deserialize: "
             "an internal error has occurred";
    case DDS::RETCODE_BAD_PARAMETER:
      return "contact::msg::dds_::Contact_TypeSupport.deserialize: "
             "bad parameter";
    case DDS::RETCODE_ALREADY_DELETED:
      return "contact::msg::dds_::Contact_TypeSupport.deserialize: "
             "this contact::msg::dds_::Contact_TypeSupport has already been deleted";
    case DDS::RETCODE_OUT_OF_RESOURCES:
      return "contact::msg::dds_::Contact_TypeSupport.deserialize: "
             "out of resources";
    case DDS::RETCODE_OK:
      break;
    default:
      return "contact::msg::dds_::Contact_TypeSupport.deserialize failed with "
             "unknown return code";
  }

  __ros_msg_type & ros_message = *static_cast<__ros_msg_type *>(untyped_ros_message);
  convert_dds_message_to_ros(dds_message, ros_message);

  return nullptr;
}

static message_type_support_callbacks_t callbacks = {
  "contact",
  "Contact",
  &register_type__Contact,
  &publish__Contact,
  &take__Contact,
  &serialize__Contact,
  &deserialize__Contact,
  nullptr,  // convert ros to dds (handled differently for C++)
  nullptr,  // convert dds to ros (handled differently for C++)
};

static rosidl_message_type_support_t handle = {
  rosidl_typesupport_opensplice_cpp::typesupport_identifier,
  &callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_opensplice_cpp

}  // namespace msg

}  // namespace contact

namespace rosidl_typesupport_opensplice_cpp
{

template<>
ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_contact
const rosidl_message_type_support_t *
get_message_type_support_handle<
  contact::msg::Contact
>()
{
  return &contact::msg::typesupport_opensplice_cpp::handle;
}

}  // namespace rosidl_typesupport_opensplice_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_opensplice_cpp, contact, msg, Contact)() {
  return &contact::msg::typesupport_opensplice_cpp::handle;
}

#ifdef __cplusplus
}
#endif
