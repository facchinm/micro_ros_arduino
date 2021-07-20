// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from edo_core_msgs:msg/MovementFeedback.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__MSG__DETAIL__MOVEMENT_FEEDBACK__FUNCTIONS_H_
#define EDO_CORE_MSGS__MSG__DETAIL__MOVEMENT_FEEDBACK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "edo_core_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "edo_core_msgs/msg/detail/movement_feedback__struct.h"

/// Initialize msg/MovementFeedback message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * edo_core_msgs__msg__MovementFeedback
 * )) before or use
 * edo_core_msgs__msg__MovementFeedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_edo_core_msgs
bool
edo_core_msgs__msg__MovementFeedback__init(edo_core_msgs__msg__MovementFeedback * msg);

/// Finalize msg/MovementFeedback message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_edo_core_msgs
void
edo_core_msgs__msg__MovementFeedback__fini(edo_core_msgs__msg__MovementFeedback * msg);

/// Create msg/MovementFeedback message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * edo_core_msgs__msg__MovementFeedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_edo_core_msgs
edo_core_msgs__msg__MovementFeedback *
edo_core_msgs__msg__MovementFeedback__create();

/// Destroy msg/MovementFeedback message.
/**
 * It calls
 * edo_core_msgs__msg__MovementFeedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_edo_core_msgs
void
edo_core_msgs__msg__MovementFeedback__destroy(edo_core_msgs__msg__MovementFeedback * msg);


/// Initialize array of msg/MovementFeedback messages.
/**
 * It allocates the memory for the number of elements and calls
 * edo_core_msgs__msg__MovementFeedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_edo_core_msgs
bool
edo_core_msgs__msg__MovementFeedback__Sequence__init(edo_core_msgs__msg__MovementFeedback__Sequence * array, size_t size);

/// Finalize array of msg/MovementFeedback messages.
/**
 * It calls
 * edo_core_msgs__msg__MovementFeedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_edo_core_msgs
void
edo_core_msgs__msg__MovementFeedback__Sequence__fini(edo_core_msgs__msg__MovementFeedback__Sequence * array);

/// Create array of msg/MovementFeedback messages.
/**
 * It allocates the memory for the array and calls
 * edo_core_msgs__msg__MovementFeedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_edo_core_msgs
edo_core_msgs__msg__MovementFeedback__Sequence *
edo_core_msgs__msg__MovementFeedback__Sequence__create(size_t size);

/// Destroy array of msg/MovementFeedback messages.
/**
 * It calls
 * edo_core_msgs__msg__MovementFeedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_edo_core_msgs
void
edo_core_msgs__msg__MovementFeedback__Sequence__destroy(edo_core_msgs__msg__MovementFeedback__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__MSG__DETAIL__MOVEMENT_FEEDBACK__FUNCTIONS_H_
