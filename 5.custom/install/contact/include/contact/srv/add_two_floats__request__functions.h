// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef CONTACT__SRV__ADD_TWO_FLOATS__REQUEST__FUNCTIONS_H_
#define CONTACT__SRV__ADD_TWO_FLOATS__REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "contact/msg/rosidl_generator_c__visibility_control.h"

#include "contact/srv/add_two_floats__request__struct.h"

/// Initialize contact/AddTwoFloats_Request message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(contact__srv__AddTwoFloats_Request)) before
 * or use contact__srv__AddTwoFloats_Request__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
bool
contact__srv__AddTwoFloats_Request__init(contact__srv__AddTwoFloats_Request * msg);

/// Finalize contact/AddTwoFloats_Request message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
void
contact__srv__AddTwoFloats_Request__fini(contact__srv__AddTwoFloats_Request * msg);

/// Create contact/AddTwoFloats_Request message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls contact__srv__AddTwoFloats_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
contact__srv__AddTwoFloats_Request *
contact__srv__AddTwoFloats_Request__create();

/// Destroy contact/AddTwoFloats_Request message.
/**
 * It calls contact__srv__AddTwoFloats_Request__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
void
contact__srv__AddTwoFloats_Request__destroy(contact__srv__AddTwoFloats_Request * msg);


/// Initialize array of contact/AddTwoFloats_Request messages.
/**
 * It allocates the memory for the number of elements and
 * calls contact__srv__AddTwoFloats_Request__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
bool
contact__srv__AddTwoFloats_Request__Sequence__init(contact__srv__AddTwoFloats_Request__Sequence * array, size_t size);

/// Finalize array of contact/AddTwoFloats_Request messages.
/**
 * It calls contact__srv__AddTwoFloats_Request__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
void
contact__srv__AddTwoFloats_Request__Sequence__fini(contact__srv__AddTwoFloats_Request__Sequence * array);

/// Create array of contact/AddTwoFloats_Request messages.
/**
 * It allocates the memory for the array and
 * calls contact__srv__AddTwoFloats_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
contact__srv__AddTwoFloats_Request__Sequence *
contact__srv__AddTwoFloats_Request__Sequence__create(size_t size);

/// Destroy array of contact/AddTwoFloats_Request messages.
/**
 * It calls contact__srv__AddTwoFloats_Request__Sequence__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
void
contact__srv__AddTwoFloats_Request__Sequence__destroy(contact__srv__AddTwoFloats_Request__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CONTACT__SRV__ADD_TWO_FLOATS__REQUEST__FUNCTIONS_H_
