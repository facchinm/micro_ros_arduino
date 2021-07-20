// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:msg/MovementFeedback.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__MSG__DETAIL__MOVEMENT_FEEDBACK__STRUCT_H_
#define EDO_CORE_MSGS__MSG__DETAIL__MOVEMENT_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MovementFeedback in the package edo_core_msgs.
typedef struct edo_core_msgs__msg__MovementFeedback
{
  int8_t type;
  int8_t data;
} edo_core_msgs__msg__MovementFeedback;

// Struct for a sequence of edo_core_msgs__msg__MovementFeedback.
typedef struct edo_core_msgs__msg__MovementFeedback__Sequence
{
  edo_core_msgs__msg__MovementFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__msg__MovementFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__MSG__DETAIL__MOVEMENT_FEEDBACK__STRUCT_H_
