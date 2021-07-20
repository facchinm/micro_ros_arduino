// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:msg/EdoError.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__MSG__DETAIL__EDO_ERROR__STRUCT_H_
#define EDO_CORE_MSGS__MSG__DETAIL__EDO_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/EdoError in the package edo_core_msgs.
typedef struct edo_core_msgs__msg__EdoError
{
  uint8_t type;
  rosidl_runtime_c__String data;
} edo_core_msgs__msg__EdoError;

// Struct for a sequence of edo_core_msgs__msg__EdoError.
typedef struct edo_core_msgs__msg__EdoError__Sequence
{
  edo_core_msgs__msg__EdoError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__msg__EdoError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__MSG__DETAIL__EDO_ERROR__STRUCT_H_
