// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:msg/CartesianPose.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__MSG__DETAIL__CARTESIAN_POSE__STRUCT_H_
#define EDO_CORE_MSGS__MSG__DETAIL__CARTESIAN_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'config_flags'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/CartesianPose in the package edo_core_msgs.
typedef struct edo_core_msgs__msg__CartesianPose
{
  float x;
  float y;
  float z;
  float a;
  float e;
  float r;
  rosidl_runtime_c__String config_flags;
} edo_core_msgs__msg__CartesianPose;

// Struct for a sequence of edo_core_msgs__msg__CartesianPose.
typedef struct edo_core_msgs__msg__CartesianPose__Sequence
{
  edo_core_msgs__msg__CartesianPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__msg__CartesianPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__MSG__DETAIL__CARTESIAN_POSE__STRUCT_H_
