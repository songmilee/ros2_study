// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef CONTACT__MSG__CONTACT__FUNCTIONS_H_
#define CONTACT__MSG__CONTACT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "contact/msg/rosidl_generator_c__visibility_control.h"

#include "contact/msg/contact__struct.h"

/// Initialize contact/Contact message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(contact__msg__Contact)) before
 * or use contact__msg__Contact__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
bool
contact__msg__Contact__init(contact__msg__Contact * msg);

/// Finalize contact/Contact message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
void
contact__msg__Contact__fini(contact__msg__Contact * msg);

/// Create contact/Contact message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls contact__msg__Contact__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
contact__msg__Contact *
contact__msg__Contact__create();

/// Destroy contact/Contact message.
/**
 * It calls contact__msg__Contact__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
void
contact__msg__Contact__destroy(contact__msg__Contact * msg);


/// Initialize array of contact/Contact messages.
/**
 * It allocates the memory for the number of elements and
 * calls contact__msg__Contact__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
bool
contact__msg__Contact__Sequence__init(contact__msg__Contact__Sequence * array, size_t size);

/// Finalize array of contact/Contact messages.
/**
 * It calls contact__msg__Contact__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
void
contact__msg__Contact__Sequence__fini(contact__msg__Contact__Sequence * array);

/// Create array of contact/Contact messages.
/**
 * It allocates the memory for the array and
 * calls contact__msg__Contact__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
contact__msg__Contact__Sequence *
contact__msg__Contact__Sequence__create(size_t size);

/// Destroy array of contact/Contact messages.
/**
 * It calls contact__msg__Contact__Sequence__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_contact
void
contact__msg__Contact__Sequence__destroy(contact__msg__Contact__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CONTACT__MSG__CONTACT__FUNCTIONS_H_
