// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from edo_core_msgs:srv/InverseKinematics.idl
// generated code does not contain a copyright notice

#ifndef EDO_CORE_MSGS__SRV__DETAIL__INVERSE_KINEMATICS__STRUCT_H_
#define EDO_CORE_MSGS__SRV__DETAIL__INVERSE_KINEMATICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cartesian_pose'
#include "edo_core_msgs/msg/detail/cartesian_pose__struct.h"

// Struct defined in srv/InverseKinematics in the package edo_core_msgs.
typedef struct edo_core_msgs__srv__InverseKinematics_Request
{
  edo_core_msgs__msg__CartesianPose cartesian_pose;
} edo_core_msgs__srv__InverseKinematics_Request;

// Struct for a sequence of edo_core_msgs__srv__InverseKinematics_Request.
typedef struct edo_core_msgs__srv__InverseKinematics_Request__Sequence
{
  edo_core_msgs__srv__InverseKinematics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__srv__InverseKinematics_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'positions'
#include "edo_core_msgs/msg/detail/joints_positions__struct.h"

// Struct defined in srv/InverseKinematics in the package edo_core_msgs.
typedef struct edo_core_msgs__srv__InverseKinematics_Response
{
  edo_core_msgs__msg__JointsPositions positions;
} edo_core_msgs__srv__InverseKinematics_Response;

// Struct for a sequence of edo_core_msgs__srv__InverseKinematics_Response.
typedef struct edo_core_msgs__srv__InverseKinematics_Response__Sequence
{
  edo_core_msgs__srv__InverseKinematics_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} edo_core_msgs__srv__InverseKinematics_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EDO_CORE_MSGS__SRV__DETAIL__INVERSE_KINEMATICS__STRUCT_H_
