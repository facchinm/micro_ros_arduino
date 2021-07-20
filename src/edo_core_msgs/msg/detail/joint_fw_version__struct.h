// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:msg/JointFwVersion.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__MSG__DETAIL__JOINT_FW_VERSION__STRUCT_H_
#define EDO_CORE_MSGS__MSG__DETAIL__JOINT_FW_VERSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/JointFwVersion in the package edo_core_msgs.
typedef struct edo_core_msgs__msg__JointFwVersion
{
  uint8_t id;
  uint8_t major_rev;
  uint16_t minor_rev;
  uint16_t revision;
  uint16_t svn;
} edo_core_msgs__msg__JointFwVersion;

// Struct for a sequence of edo_core_msgs__msg__JointFwVersion.
typedef struct edo_core_msgs__msg__JointFwVersion__Sequence
{
  edo_core_msgs__msg__JointFwVersion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__msg__JointFwVersion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__MSG__DETAIL__JOINT_FW_VERSION__STRUCT_H_
