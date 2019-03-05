// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef CONTACT__MSG__CONTACT__STRUCT_H_
#define CONTACT__MSG__CONTACT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// first_name
// last_name
// address
#include "rosidl_generator_c/string.h"

// constants defined in the message
// FEMALE
static const bool contact__msg__Contact__FEMALE = true;
// MALE
static const bool contact__msg__Contact__MALE = false;

/// Struct of message contact/Contact
typedef struct contact__msg__Contact
{
  rosidl_generator_c__String first_name;
  rosidl_generator_c__String last_name;
  bool gender;
  uint8_t age;
  rosidl_generator_c__String address;
} contact__msg__Contact;

/// Struct for an array of messages
typedef struct contact__msg__Contact__Sequence
{
  contact__msg__Contact * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} contact__msg__Contact__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTACT__MSG__CONTACT__STRUCT_H_
