// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:msg/ModelStates.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__MODEL_STATES__TRAITS_HPP_
#define GAZEBO_MSGS__MSG__MODEL_STATES__TRAITS_HPP_

#include "gazebo_msgs/msg/model_states__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::msg::ModelStates>()
{
  return "gazebo_msgs::msg::ModelStates";
}

template<>
struct has_fixed_size<gazebo_msgs::msg::ModelStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::msg::ModelStates>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__MSG__MODEL_STATES__TRAITS_HPP_
