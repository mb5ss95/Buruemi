// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:srv/GetWorldProperties.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/srv/get_world_properties__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/srv/get_world_properties__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetWorldProperties_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "GetWorldProperties_Request",  // message name
  1,  // number of fields
  sizeof(gazebo_msgs__srv__GetWorldProperties_Request),
  GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_type_support_handle = {
  0,
  &GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetWorldProperties_Request)() {
  if (!GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_type_support_handle.typesupport_identifier) {
    GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetWorldProperties_Request__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gazebo_msgs/srv/get_world_properties__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gazebo_msgs/srv/get_world_properties__struct.h"


// Include directives for member types
// Member `model_names`
// Member `status_message`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_member_array[5] = {
  {
    "sim_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetWorldProperties_Response, sim_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetWorldProperties_Response, model_names),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rendering_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetWorldProperties_Response, rendering_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__GetWorldProperties_Response, success),  // bytes offset in struct
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
    offsetof(gazebo_msgs__srv__GetWorldProperties_Response, status_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "GetWorldProperties_Response",  // message name
  5,  // number of fields
  sizeof(gazebo_msgs__srv__GetWorldProperties_Response),
  GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_type_support_handle = {
  0,
  &GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetWorldProperties_Response)() {
  if (!GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_type_support_handle.typesupport_identifier) {
    GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetWorldProperties_Response__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gazebo_msgs/srv/get_world_properties__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gazebo_msgs__srv__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_service_members = {
  "gazebo_msgs__srv",  // service namespace
  "GetWorldProperties",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gazebo_msgs__srv__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_Request_message_type_support_handle,
  NULL  // response message
  // gazebo_msgs__srv__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_Response_message_type_support_handle
};

static rosidl_service_type_support_t gazebo_msgs__srv__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_service_type_support_handle = {
  0,
  &gazebo_msgs__srv__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetWorldProperties_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetWorldProperties_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetWorldProperties)() {
  if (!gazebo_msgs__srv__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_service_type_support_handle.typesupport_identifier) {
    gazebo_msgs__srv__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gazebo_msgs__srv__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetWorldProperties_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, GetWorldProperties_Response)()->data;
  }

  return &gazebo_msgs__srv__get_world_properties__rosidl_typesupport_introspection_c__GetWorldProperties_service_type_support_handle;
}
