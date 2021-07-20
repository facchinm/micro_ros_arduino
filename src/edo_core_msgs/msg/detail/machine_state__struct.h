// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:msg/MachineState.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__MSG__DETAIL__MACHINE_STATE__STRUCT_H_
#define EDO_CORE_MSGS__MSG__DETAIL__MACHINE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MachineState in the package edo_core_msgs.
typedef struct edo_core_msgs__msg__MachineState
{
  uint8_t current_state;
  uint32_t opcode;
} edo_core_msgs__msg__MachineState;

// Struct for a sequence of edo_core_msgs__msg__MachineState.
typedef struct edo_core_msgs__msg__MachineState__Sequence
{
  edo_core_msgs__msg__MachineState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__msg__MachineState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__MSG__DETAIL__MACHINE_STATE__STRUCT_H_
