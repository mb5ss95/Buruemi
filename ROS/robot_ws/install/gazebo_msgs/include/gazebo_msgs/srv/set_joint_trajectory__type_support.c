// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:srv/SetJointTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/srv/set_joint_trajectory__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/srv/set_joint_trajectory__struct.h"


// Include directives for member types
// Member `model_name`
#include "rosidl_generator_c/string_functions.h"
// Member `joint_trajectory`
#include "trajectory_msgs/msg/joint_trajectory.h"
// Member `joint_trajectory`
#include "trajectory_msgs/msg/joint_trajectory__rosidl_typesupport_introspection_c.h"
// Member `model_pose`
#include "geometry_msgs/msg/pose.h"
// Member `model_pose`
#include "geometry_msgs/msg/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SetJointTrajectory_Request__rosidl_typesupport_introspection_c__SetJointTrajectory_Request_message_member_array[5] = {
  {
    "model_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SetJointTrajectory_Request, model_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SetJointTrajectory_Request, joint_trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SetJointTrajectory_Request, model_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "set_model_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SetJointTrajectory_Request, set_model_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disable_physics_updates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SetJointTrajectory_Request, disable_physics_updates),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetJointTrajectory_Request__rosidl_typesupport_introspection_c__SetJointTrajectory_Request_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "SetJointTrajectory_Request",  // message name
  5,  // number of fields
  sizeof(gazebo_msgs__srv__SetJointTrajectory_Request),
  SetJointTrajectory_Request__rosidl_typesupport_introspection_c__SetJointTrajectory_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetJointTrajectory_Request__rosidl_typesupport_introspection_c__SetJointTrajectory_Request_message_type_support_handle = {
  0,
  &SetJointTrajectory_Request__rosidl_typesupport_introspection_c__SetJointTrajectory_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetJointTrajectory_Request)() {
  SetJointTrajectory_Request__rosidl_typesupport_introspection_c__SetJointTrajectory_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trajectory_msgs, msg, JointTrajectory)();
  SetJointTrajectory_Request__rosidl_typesupport_introspection_c__SetJointTrajectory_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!SetJointTrajectory_Request__rosidl_typesupport_introspection_c__SetJointTrajectory_Request_message_type_support_handle.typesupport_identifier) {
    SetJointTrajectory_Request__rosidl_typesupport_introspection_c__SetJointTrajectory_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetJointTrajectory_Request__rosidl_typesupport_introspection_c__SetJointTrajectory_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gazebo_msgs/srv/set_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gazebo_msgs/srv/set_joint_trajectory__struct.h"


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SetJointTrajectory_Response__rosidl_typesupport_introspection_c__SetJointTrajectory_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SetJointTrajectory_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SetJointTrajectory_Response, status_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetJointTrajectory_Response__rosidl_typesupport_introspection_c__SetJointTrajectory_Response_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "SetJointTrajectory_Response",  // message name
  2,  // number of fields
  sizeof(gazebo_msgs__srv__SetJointTrajectory_Response),
  SetJointTrajectory_Response__rosidl_typesupport_introspection_c__SetJointTrajectory_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetJointTrajectory_Response__rosidl_typesupport_introspection_c__SetJointTrajectory_Response_message_type_support_handle = {
  0,
  &SetJointTrajectory_Response__rosidl_typesupport_introspection_c__SetJointTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetJointTrajectory_Response)() {
  if (!SetJointTrajectory_Response__rosidl_typesupport_introspection_c__SetJointTrajectory_Response_message_type_support_handle.typesupport_identifier) {
    SetJointTrajectory_Response__rosidl_typesupport_introspection_c__SetJointTrajectory_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetJointTrajectory_Response__rosidl_typesupport_introspection_c__SetJointTrajectory_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gazebo_msgs/srv/set_joint_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gazebo_msgs__srv__set_joint_trajectory__rosidl_typesupport_introspection_c__SetJointTrajectory_service_members = {
  "gazebo_msgs__srv",  // service namespace
  "SetJointTrajectory",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gazebo_msgs__srv__set_joint_trajectory__rosidl_typesupport_introspection_c__SetJointTrajectory_Request_message_type_support_handle,
  NULL  // response message
  // gazebo_msgs__srv__set_joint_trajectory__rosidl_typesupport_introspection_c__SetJointTrajectory_Response_message_type_support_handle
};

static rosidl_service_type_support_t gazebo_msgs__srv__set_joint_trajectory__rosidl_typesupport_introspection_c__SetJointTrajectory_service_type_support_handle = {
  0,
  &gazebo_msgs__srv__set_joint_trajectory__rosidl_typesupport_introspection_c__SetJointTrajectory_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetJointTrajectory_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetJointTrajectory_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetJointTrajectory)() {
  if (!gazebo_msgs__srv__set_joint_trajectory__rosidl_typesupport_introspection_c__SetJointTrajectory_service_type_support_handle.typesupport_identifier) {
    gazebo_msgs__srv__set_joint_trajectory__rosidl_typesupport_introspection_c__SetJointTrajectory_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gazebo_msgs__srv__set_joint_trajectory__rosidl_typesupport_introspection_c__SetJointTrajectory_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetJointTrajectory_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetJointTrajectory_Response)()->data;
  }

  return &gazebo_msgs__srv__set_joint_trajectory__rosidl_typesupport_introspection_c__SetJointTrajectory_service_type_support_handle;
}
