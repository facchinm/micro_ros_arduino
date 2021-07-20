// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__MSG__DETAIL__POINT__STRUCT_H_
#define EDO_CORE_MSGS__MSG__DETAIL__POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cartesian_data'
#include "edo_core_msgs/msg/detail/cartesian_pose__struct.h"
// Member 'joints_data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Point in the package edo_core_msgs.
typedef struct edo_core_msgs__msg__Point
{
  uint8_t data_type;
  edo_core_msgs__msg__CartesianPose cartesian_data;
  uint64_t joints_mask;
  rosidl_runtime_c__float__Sequence joints_data;
} edo_core_msgs__msg__Point;

// Struct for a sequence of edo_core_msgs__msg__Point.
typedef struct edo_core_msgs__msg__Point__Sequence
{
  edo_core_msgs__msg__Point * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__msg__Point__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__MSG__DETAIL__POINT__STRUCT_H_
