// generated from rosidl_generator_c/resource/msg__functions.c.em
// generated code does not contain a copyright notice

#include "contact/srv/add_two_floats__request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
contact__srv__AddTwoFloats_Request__init(contact__srv__AddTwoFloats_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
contact__srv__AddTwoFloats_Request__fini(contact__srv__AddTwoFloats_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

contact__srv__AddTwoFloats_Request *
contact__srv__AddTwoFloats_Request__create()
{
  contact__srv__AddTwoFloats_Request * msg = (contact__srv__AddTwoFloats_Request *)malloc(sizeof(contact__srv__AddTwoFloats_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(contact__srv__AddTwoFloats_Request));
  bool success = contact__srv__AddTwoFloats_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
contact__srv__AddTwoFloats_Request__destroy(contact__srv__AddTwoFloats_Request * msg)
{
  if (msg) {
    contact__srv__AddTwoFloats_Request__fini(msg);
  }
  free(msg);
}


bool
contact__srv__AddTwoFloats_Request__Sequence__init(contact__srv__AddTwoFloats_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  contact__srv__AddTwoFloats_Request * data = NULL;
  if (size) {
    data = (contact__srv__AddTwoFloats_Request *)calloc(size, sizeof(contact__srv__AddTwoFloats_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = contact__srv__AddTwoFloats_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        contact__srv__AddTwoFloats_Request__fini(&data[i - 1]);
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
contact__srv__AddTwoFloats_Request__Sequence__fini(contact__srv__AddTwoFloats_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      contact__srv__AddTwoFloats_Request__fini(&array->data[i]);
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

contact__srv__AddTwoFloats_Request__Sequence *
contact__srv__AddTwoFloats_Request__Sequence__create(size_t size)
{
  contact__srv__AddTwoFloats_Request__Sequence * array = (contact__srv__AddTwoFloats_Request__Sequence *)malloc(sizeof(contact__srv__AddTwoFloats_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = contact__srv__AddTwoFloats_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
contact__srv__AddTwoFloats_Request__Sequence__destroy(contact__srv__AddTwoFloats_Request__Sequence * array)
{
  if (array) {
    contact__srv__AddTwoFloats_Request__Sequence__fini(array);
  }
  free(array);
}
