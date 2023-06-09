// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:srv/SetModelState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/srv/set_model_state__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/srv/set_model_state__struct.h"


// Include directives for member types
// Member `model_state`
#include "gazebo_msgs/msg/model_state.h"
// Member `model_state`
#include "gazebo_msgs/msg/model_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SetModelState_Request__rosidl_typesupport_introspection_c__SetModelState_Request_message_member_array[1] = {
  {
    "model_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SetModelState_Request, model_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetModelState_Request__rosidl_typesupport_introspection_c__SetModelState_Request_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "SetModelState_Request",  // message name
  1,  // number of fields
  sizeof(gazebo_msgs__srv__SetModelState_Request),
  SetModelState_Request__rosidl_typesupport_introspection_c__SetModelState_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetModelState_Request__rosidl_typesupport_introspection_c__SetModelState_Request_message_type_support_handle = {
  0,
  &SetModelState_Request__rosidl_typesupport_introspection_c__SetModelState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetModelState_Request)() {
  SetModelState_Request__rosidl_typesupport_introspection_c__SetModelState_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, msg, ModelState)();
  if (!SetModelState_Request__rosidl_typesupport_introspection_c__SetModelState_Request_message_type_support_handle.typesupport_identifier) {
    SetModelState_Request__rosidl_typesupport_introspection_c__SetModelState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetModelState_Request__rosidl_typesupport_introspection_c__SetModelState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gazebo_msgs/srv/set_model_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gazebo_msgs/srv/set_model_state__struct.h"


// Include directives for member types
// Member `status_message`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SetModelState_Response__rosidl_typesupport_introspection_c__SetModelState_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__srv__SetModelState_Response, success),  // bytes offset in struct
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
    offsetof(gazebo_msgs__srv__SetModelState_Response, status_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetModelState_Response__rosidl_typesupport_introspection_c__SetModelState_Response_message_members = {
  "gazebo_msgs__srv",  // message namespace
  "SetModelState_Response",  // message name
  2,  // number of fields
  sizeof(gazebo_msgs__srv__SetModelState_Response),
  SetModelState_Response__rosidl_typesupport_introspection_c__SetModelState_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetModelState_Response__rosidl_typesupport_introspection_c__SetModelState_Response_message_type_support_handle = {
  0,
  &SetModelState_Response__rosidl_typesupport_introspection_c__SetModelState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetModelState_Response)() {
  if (!SetModelState_Response__rosidl_typesupport_introspection_c__SetModelState_Response_message_type_support_handle.typesupport_identifier) {
    SetModelState_Response__rosidl_typesupport_introspection_c__SetModelState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetModelState_Response__rosidl_typesupport_introspection_c__SetModelState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gazebo_msgs/srv/set_model_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gazebo_msgs__srv__set_model_state__rosidl_typesupport_introspection_c__SetModelState_service_members = {
  "gazebo_msgs__srv",  // service namespace
  "SetModelState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gazebo_msgs__srv__set_model_state__rosidl_typesupport_introspection_c__SetModelState_Request_message_type_support_handle,
  NULL  // response message
  // gazebo_msgs__srv__set_model_state__rosidl_typesupport_introspection_c__SetModelState_Response_message_type_support_handle
};

static rosidl_service_type_support_t gazebo_msgs__srv__set_model_state__rosidl_typesupport_introspection_c__SetModelState_service_type_support_handle = {
  0,
  &gazebo_msgs__srv__set_model_state__rosidl_typesupport_introspection_c__SetModelState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetModelState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetModelState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetModelState)() {
  if (!gazebo_msgs__srv__set_model_state__rosidl_typesupport_introspection_c__SetModelState_service_type_support_handle.typesupport_identifier) {
    gazebo_msgs__srv__set_model_state__rosidl_typesupport_introspection_c__SetModelState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gazebo_msgs__srv__set_model_state__rosidl_typesupport_introspection_c__SetModelState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetModelState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, srv, SetModelState_Response)()->data;
  }

  return &gazebo_msgs__srv__set_model_state__rosidl_typesupport_introspection_c__SetModelState_service_type_support_handle;
}
