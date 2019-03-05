// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "contact/msg/contact__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// include message dependencies
// first_name
// last_name
// address
#include "rosidl_generator_c/string_functions.h"

bool
contact__msg__Contact__init(contact__msg__Contact * msg)
{
  if (!msg) {
    return false;
  }
  // first_name
  if (!rosidl_generator_c__String__init(&msg->first_name)) {
    contact__msg__Contact__fini(msg);
    return false;
  }
  // last_name
  if (!rosidl_generator_c__String__init(&msg->last_name)) {
    contact__msg__Contact__fini(msg);
    return false;
  }
  // gender
  // age
  // address
  if (!rosidl_generator_c__String__init(&msg->address)) {
    contact__msg__Contact__fini(msg);
    return false;
  }
  return true;
}

void
contact__msg__Contact__fini(contact__msg__Contact * msg)
{
  if (!msg) {
    return;
  }
  // first_name
  rosidl_generator_c__String__fini(&msg->first_name);
  // last_name
  rosidl_generator_c__String__fini(&msg->last_name);
  // gender
  // age
  // address
  rosidl_generator_c__String__fini(&msg->address);
}

contact__msg__Contact *
contact__msg__Contact__create()
{
  contact__msg__Contact * msg = (contact__msg__Contact *)malloc(sizeof(contact__msg__Contact));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(contact__msg__Contact));
  bool success = contact__msg__Contact__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
contact__msg__Contact__destroy(contact__msg__Contact * msg)
{
  if (msg) {
    contact__msg__Contact__fini(msg);
  }
  free(msg);
}


bool
contact__msg__Contact__Sequence__init(contact__msg__Contact__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  contact__msg__Contact * data = NULL;
  if (size) {
    data = (contact__msg__Contact *)calloc(size, sizeof(contact__msg__Contact));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = contact__msg__Contact__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        contact__msg__Contact__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
contact__msg__Contact__Sequence__fini(contact__msg__Contact__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      contact__msg__Contact__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

contact__msg__Contact__Sequence *
contact__msg__Contact__Sequence__create(size_t size)
{
  contact__msg__Contact__Sequence * array = (contact__msg__Contact__Sequence *)malloc(sizeof(contact__msg__Contact__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = contact__msg__Contact__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
contact__msg__Contact__Sequence__destroy(contact__msg__Contact__Sequence * array)
{
  if (array) {
    contact__msg__Contact__Sequence__fini(array);
  }
  free(array);
}
