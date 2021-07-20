// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:msg/JointsPositions.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__MSG__DETAIL__JOINTS_POSITIONS__STRUCT_H_
#define EDO_CORE_MSGS__MSG__DETAIL__JOINTS_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joints_type'
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/JointsPositions in the package edo_core_msgs.
typedef struct edo_core_msgs__msg__JointsPositions
{
  uint64_t joints_mask;
  rosidl_runtime_c__uint8__Sequence joints_type;
  rosidl_runtime_c__float__Sequence positions;
} edo_core_msgs__msg__JointsPositions;

// Struct for a sequence of edo_core_msgs__msg__JointsPositions.
typedef struct edo_core_msgs__msg__JointsPositions__Sequence
{
  edo_core_msgs__msg__JointsPositions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__msg__JointsPositions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__MSG__DETAIL__JOINTS_POSITIONS__STRUCT_H_
