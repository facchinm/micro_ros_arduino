// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:msg/JointConfigurationArray.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__MSG__DETAIL__JOINT_CONFIGURATION_ARRAY__STRUCT_H_
#define EDO_CORE_MSGS__MSG__DETAIL__JOINT_CONFIGURATION_ARRAY__STRUCT_H_

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
#include "edo_core_msgs/msg/detail/joint_configuration__struct.h"

// Struct defined in msg/JointConfigurationArray in the package edo_core_msgs.
typedef struct edo_core_msgs__msg__JointConfigurationArray
{
  uint64_t joints_mask;
  edo_core_msgs__msg__JointConfiguration__Sequence joints;
} edo_core_msgs__msg__JointConfigurationArray;

// Struct for a sequence of edo_core_msgs__msg__JointConfigurationArray.
typedef struct edo_core_msgs__msg__JointConfigurationArray__Sequence
{
  edo_core_msgs__msg__JointConfigurationArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__msg__JointConfigurationArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__MSG__DETAIL__JOINT_CONFIGURATION_ARRAY__STRUCT_H_
