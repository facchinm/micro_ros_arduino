// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:msg/NodeSwVersion.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__MSG__DETAIL__NODE_SW_VERSION__STRUCT_H_
#define EDO_CORE_MSGS__MSG__DETAIL__NODE_SW_VERSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'version'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/NodeSwVersion in the package edo_core_msgs.
typedef struct edo_core_msgs__msg__NodeSwVersion
{
  uint16_t id;
  rosidl_runtime_c__String version;
} edo_core_msgs__msg__NodeSwVersion;

// Struct for a sequence of edo_core_msgs__msg__NodeSwVersion.
typedef struct edo_core_msgs__msg__NodeSwVersion__Sequence
{
  edo_core_msgs__msg__NodeSwVersion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__msg__NodeSwVersion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__MSG__DETAIL__NODE_SW_VERSION__STRUCT_H_
