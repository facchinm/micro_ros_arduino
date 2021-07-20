// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:srv/ControlSwitch.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__SRV__DETAIL__CONTROL_SWITCH__STRUCT_H_
#define EDO_CORE_MSGS__SRV__DETAIL__CONTROL_SWITCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ControlSwitch in the package edo_core_msgs.
typedef struct edo_core_msgs__srv__ControlSwitch_Request
{
  uint8_t mode;
} edo_core_msgs__srv__ControlSwitch_Request;

// Struct for a sequence of edo_core_msgs__srv__ControlSwitch_Request.
typedef struct edo_core_msgs__srv__ControlSwitch_Request__Sequence
{
  edo_core_msgs__srv__ControlSwitch_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__srv__ControlSwitch_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ControlSwitch in the package edo_core_msgs.
typedef struct edo_core_msgs__srv__ControlSwitch_Response
{
  uint8_t result;
} edo_core_msgs__srv__ControlSwitch_Response;

// Struct for a sequence of edo_core_msgs__srv__ControlSwitch_Response.
typedef struct edo_core_msgs__srv__ControlSwitch_Response__Sequence
{
  edo_core_msgs__srv__ControlSwitch_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__srv__ControlSwitch_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__SRV__DETAIL__CONTROL_SWITCH__STRUCT_H_
