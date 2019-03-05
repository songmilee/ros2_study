// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef CONTACT__SRV__ADD_TWO_FLOATS__REQUEST__STRUCT_H_
#define CONTACT__SRV__ADD_TWO_FLOATS__REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// Struct of message contact/AddTwoFloats_Request
typedef struct contact__srv__AddTwoFloats_Request
{
  double a;
  double b;
} contact__srv__AddTwoFloats_Request;

/// Struct for an array of messages
typedef struct contact__srv__AddTwoFloats_Request__Sequence
{
  contact__srv__AddTwoFloats_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} contact__srv__AddTwoFloats_Request__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTACT__SRV__ADD_TWO_FLOATS__REQUEST__STRUCT_H_
