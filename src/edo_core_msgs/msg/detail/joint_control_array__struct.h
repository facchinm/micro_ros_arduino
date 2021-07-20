// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:msg/JointControlArray.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__MSG__DETAIL__JOINT_CONTROL_ARRAY__STRUCT_H_
#define EDO_CORE_MSGS__MSG__DETAIL__JOINT_CONTROL_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joints'
#include "edo_core_msgs/msg/detail/joint_control__struct.h"

// Struct defined in msg/JointControlArray in the package edo_core_msgs.
typedef struct edo_core_msgs__msg__JointControlArray
{
  uint8_t size;
  edo_core_msgs__msg__JointControl__Sequence joints;
} edo_core_msgs__msg__JointControlArray;

// Struct for a sequence of edo_core_msgs__msg__JointControlArray.
typedef struct edo_core_msgs__msg__JointControlArray__Sequence
{
  edo_core_msgs__msg__JointControlArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__msg__JointControlArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__MSG__DETAIL__JOINT_CONTROL_ARRAY__STRUCT_H_
