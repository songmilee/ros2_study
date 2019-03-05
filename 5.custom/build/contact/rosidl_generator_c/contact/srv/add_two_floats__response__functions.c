// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "contact/srv/add_two_floats__response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
contact__srv__AddTwoFloats_Response__init(contact__srv__AddTwoFloats_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
contact__srv__AddTwoFloats_Response__fini(contact__srv__AddTwoFloats_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

contact__srv__AddTwoFloats_Response *
contact__srv__AddTwoFloats_Response__create()
{
  contact__srv__AddTwoFloats_Response * msg = (contact__srv__AddTwoFloats_Response *)malloc(sizeof(contact__srv__AddTwoFloats_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(contact__srv__AddTwoFloats_Response));
  bool success = contact__srv__AddTwoFloats_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
contact__srv__AddTwoFloats_Response__destroy(contact__srv__AddTwoFloats_Response * msg)
{
  if (msg) {
    contact__srv__AddTwoFloats_Response__fini(msg);
  }
  free(msg);
}


bool
contact__srv__AddTwoFloats_Response__Sequence__init(contact__srv__AddTwoFloats_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  contact__srv__AddTwoFloats_Response * data = NULL;
  if (size) {
    data = (contact__srv__AddTwoFloats_Response *)calloc(size, sizeof(contact__srv__AddTwoFloats_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = contact__srv__AddTwoFloats_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        contact__srv__AddTwoFloats_Response__fini(&data[i - 1]);
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
contact__srv__AddTwoFloats_Response__Sequence__fini(contact__srv__AddTwoFloats_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      contact__srv__AddTwoFloats_Response__fini(&array->data[i]);
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

contact__srv__AddTwoFloats_Response__Sequence *
contact__srv__AddTwoFloats_Response__Sequence__create(size_t size)
{
  contact__srv__AddTwoFloats_Response__Sequence * array = (contact__srv__AddTwoFloats_Response__Sequence *)malloc(sizeof(contact__srv__AddTwoFloats_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = contact__srv__AddTwoFloats_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
contact__srv__AddTwoFloats_Response__Sequence__destroy(contact__srv__AddTwoFloats_Response__Sequence * array)
{
  if (array) {
    contact__srv__AddTwoFloats_Response__Sequence__fini(array);
  }
  free(array);
}
