// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/SetModelConfiguration.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__SET_MODEL_CONFIGURATION__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__SET_MODEL_CONFIGURATION__TRAITS_HPP_

#include "gazebo_msgs/srv/set_model_configuration__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetModelConfiguration_Request>()
{
  return "gazebo_msgs::srv::SetModelConfiguration_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetModelConfiguration_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetModelConfiguration_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetModelConfiguration_Response>()
{
  return "gazebo_msgs::srv::SetModelConfiguration_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetModelConfiguration_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetModelConfiguration_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetModelConfiguration>()
{
  return "gazebo_msgs::srv::SetModelConfiguration";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetModelConfiguration>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::SetModelConfiguration_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::SetModelConfiguration_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetModelConfiguration>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::SetModelConfiguration_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::SetModelConfiguration_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__SET_MODEL_CONFIGURATION__TRAITS_HPP_
