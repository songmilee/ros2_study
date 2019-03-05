// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef CONTACT__SRV__ADD_TWO_FLOATS__RESPONSE__FUNCTIONS_H_
#define CONTACT__SRV__ADD_TWO_FLOATS__RESPONSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "contact/msg/rosidl_generator_c__visibility_control.h"

#include "contact/srv/add_two_floats__response__struct.h"

/// Initialize contact/AddTwoFloats_Response message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(contact__srv__AddTwoFloats_Response)) before
 * or use contact__srv__AddTwoFloats_Response__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
bool
contact__srv__AddTwoFloats_Response__init(contact__srv__AddTwoFloats_Response * msg);

/// Finalize contact/AddTwoFloats_Response message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
void
contact__srv__AddTwoFloats_Response__fini(contact__srv__AddTwoFloats_Response * msg);

/// Create contact/AddTwoFloats_Response message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls contact__srv__AddTwoFloats_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
contact__srv__AddTwoFloats_Response *
contact__srv__AddTwoFloats_Response__create();

/// Destroy contact/AddTwoFloats_Response message.
/**
 * It calls contact__srv__AddTwoFloats_Response__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
void
contact__srv__AddTwoFloats_Response__destroy(contact__srv__AddTwoFloats_Response * msg);


/// Initialize array of contact/AddTwoFloats_Response messages.
/**
 * It allocates the memory for the number of elements and
 * calls contact__srv__AddTwoFloats_Response__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
bool
contact__srv__AddTwoFloats_Response__Sequence__init(contact__srv__AddTwoFloats_Response__Sequence * array, size_t size);

/// Finalize array of contact/AddTwoFloats_Response messages.
/**
 * It calls contact__srv__AddTwoFloats_Response__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
void
contact__srv__AddTwoFloats_Response__Sequence__fini(contact__srv__AddTwoFloats_Response__Sequence * array);

/// Create array of contact/AddTwoFloats_Response messages.
/**
 * It allocates the memory for the array and
 * calls contact__srv__AddTwoFloats_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
contact__srv__AddTwoFloats_Response__Sequence *
contact__srv__AddTwoFloats_Response__Sequence__create(size_t size);

/// Destroy array of contact/AddTwoFloats_Response messages.
/**
 * It calls contact__srv__AddTwoFloats_Response__Sequence__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
void
contact__srv__AddTwoFloats_Response__Sequence__destroy(contact__srv__AddTwoFloats_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CONTACT__SRV__ADD_TWO_FLOATS__RESPONSE__FUNCTIONS_H_
