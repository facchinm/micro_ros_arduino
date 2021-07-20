// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:msg/NodeSwVersionArray.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__MSG__DETAIL__NODE_SW_VERSION_ARRAY__STRUCT_H_
#define EDO_CORE_MSGS__MSG__DETAIL__NODE_SW_VERSION_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'nodes'
#include "edo_core_msgs/msg/detail/node_sw_version__struct.h"

// Struct defined in msg/NodeSwVersionArray in the package edo_core_msgs.
typedef struct edo_core_msgs__msg__NodeSwVersionArray
{
  edo_core_msgs__msg__NodeSwVersion__Sequence nodes;
} edo_core_msgs__msg__NodeSwVersionArray;

// Struct for a sequence of edo_core_msgs__msg__NodeSwVersionArray.
typedef struct edo_core_msgs__msg__NodeSwVersionArray__Sequence
{
  edo_core_msgs__msg__NodeSwVersionArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__msg__NodeSwVersionArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__MSG__DETAIL__NODE_SW_VERSION_ARRAY__STRUCT_H_
