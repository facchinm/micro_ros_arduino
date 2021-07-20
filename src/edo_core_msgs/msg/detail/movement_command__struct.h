// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:msg/MovementCommand.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__MSG__DETAIL__MOVEMENT_COMMAND__STRUCT_H_
#define EDO_CORE_MSGS__MSG__DETAIL__MOVEMENT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
// Member 'via'
#include "edo_core_msgs/msg/detail/point__struct.h"
// Member 'tool'
// Member 'frame'
#include "edo_core_msgs/msg/detail/frame__struct.h"

// Struct defined in msg/MovementCommand in the package edo_core_msgs.
typedef struct edo_core_msgs__msg__MovementCommand
{
  uint8_t move_command;
  uint8_t move_type;
  uint8_t ovr;
  uint8_t delay;
  uint8_t remote_tool;
  float cartesian_linear_speed;
  edo_core_msgs__msg__Point target;
  edo_core_msgs__msg__Point via;
  edo_core_msgs__msg__Frame tool;
  edo_core_msgs__msg__Frame frame;
} edo_core_msgs__msg__MovementCommand;

// Struct for a sequence of edo_core_msgs__msg__MovementCommand.
typedef struct edo_core_msgs__msg__MovementCommand__Sequence
{
  edo_core_msgs__msg__MovementCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__msg__MovementCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__MSG__DETAIL__MOVEMENT_COMMAND__STRUCT_H_
