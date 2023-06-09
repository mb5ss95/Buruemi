// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/DeleteEntity.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DELETE_ENTITY__STRUCT_H_
#define GAZEBO_MSGS__SRV__DELETE_ENTITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/DeleteEntity in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__DeleteEntity_Request
{
  rosidl_generator_c__String name;
} gazebo_msgs__srv__DeleteEntity_Request;

// Struct for a sequence of gazebo_msgs__srv__DeleteEntity_Request.
typedef struct gazebo_msgs__srv__DeleteEntity_Request__Sequence
{
  gazebo_msgs__srv__DeleteEntity_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__DeleteEntity_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/DeleteEntity in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__DeleteEntity_Response
{
  bool success;
  rosidl_generator_c__String status_message;
} gazebo_msgs__srv__DeleteEntity_Response;

// Struct for a sequence of gazebo_msgs__srv__DeleteEntity_Response.
typedef struct gazebo_msgs__srv__DeleteEntity_Response__Sequence
{
  gazebo_msgs__srv__DeleteEntity_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__DeleteEntity_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DELETE_ENTITY__STRUCT_H_
