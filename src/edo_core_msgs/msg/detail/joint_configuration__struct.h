// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:msg/JointConfiguration.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__MSG__DETAIL__JOINT_CONFIGURATION__STRUCT_H_
#define EDO_CORE_MSGS__MSG__DETAIL__JOINT_CONFIGURATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/JointConfiguration in the package edo_core_msgs.
typedef struct edo_core_msgs__msg__JointConfiguration
{
  float kp;
  float ti;
  float td;
  float sat;
  float kff;
  float max;
  float kpv;
  float tiv;
  float tdv;
  float satv;
  float kffv;
  float maxv;
  float kpt;
  float tit;
  float tdt;
  float satt;
  float kfft;
  float maxt;
  float kt;
} edo_core_msgs__msg__JointConfiguration;

// Struct for a sequence of edo_core_msgs__msg__JointConfiguration.
typedef struct edo_core_msgs__msg__JointConfiguration__Sequence
{
  edo_core_msgs__msg__JointConfiguration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__msg__JointConfiguration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__MSG__DETAIL__JOINT_CONFIGURATION__STRUCT_H_
