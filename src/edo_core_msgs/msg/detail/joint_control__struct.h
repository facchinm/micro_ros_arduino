// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:msg/JointControl.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__MSG__DETAIL__JOINT_CONTROL__STRUCT_H_
#define EDO_CORE_MSGS__MSG__DETAIL__JOINT_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/JointControl in the package edo_core_msgs.
typedef struct edo_core_msgs__msg__JointControl
{
  float position;
  float velocity;
  float current;
  float ff_velocity;
  float ff_current;
  float r_rasp;
} edo_core_msgs__msg__JointControl;

// Struct for a sequence of edo_core_msgs__msg__JointControl.
typedef struct edo_core_msgs__msg__JointControl__Sequence
{
  edo_core_msgs__msg__JointControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__msg__JointControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__MSG__DETAIL__JOINT_CONTROL__STRUCT_H_
