// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:srv/JointsNumber.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__SRV__DETAIL__JOINTS_NUMBER__STRUCT_H_
#define EDO_CORE_MSGS__SRV__DETAIL__JOINTS_NUMBER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/JointsNumber in the package edo_core_msgs.
typedef struct edo_core_msgs__srv__JointsNumber_Request
{
  uint8_t structure_needs_at_least_one_member;
} edo_core_msgs__srv__JointsNumber_Request;

// Struct for a sequence of edo_core_msgs__srv__JointsNumber_Request.
typedef struct edo_core_msgs__srv__JointsNumber_Request__Sequence
{
  edo_core_msgs__srv__JointsNumber_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__srv__JointsNumber_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/JointsNumber in the package edo_core_msgs.
typedef struct edo_core_msgs__srv__JointsNumber_Response
{
  int8_t counter;
  uint32_t joints_mask;
  uint32_t joints_aux_mask;
} edo_core_msgs__srv__JointsNumber_Response;

// Struct for a sequence of edo_core_msgs__srv__JointsNumber_Response.
typedef struct edo_core_msgs__srv__JointsNumber_Response__Sequence
{
  edo_core_msgs__srv__JointsNumber_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__srv__JointsNumber_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__SRV__DETAIL__JOINTS_NUMBER__STRUCT_H_
