// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/GetModelState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__GET_MODEL_STATE__STRUCT_H_
#define GAZEBO_MSGS__SRV__GET_MODEL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'model_name'
// Member 'relative_entity_name'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/GetModelState in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetModelState_Request
{
  rosidl_generator_c__String model_name;
  rosidl_generator_c__String relative_entity_name;
} gazebo_msgs__srv__GetModelState_Request;

// Struct for a sequence of gazebo_msgs__srv__GetModelState_Request.
typedef struct gazebo_msgs__srv__GetModelState_Request__Sequence
{
  gazebo_msgs__srv__GetModelState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetModelState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/twist__struct.h"
// Member 'status_message'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/GetModelState in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetModelState_Response
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist twist;
  bool success;
  rosidl_generator_c__String status_message;
} gazebo_msgs__srv__GetModelState_Response;

// Struct for a sequence of gazebo_msgs__srv__GetModelState_Response.
typedef struct gazebo_msgs__srv__GetModelState_Response__Sequence
{
  gazebo_msgs__srv__GetModelState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetModelState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__GET_MODEL_STATE__STRUCT_H_
