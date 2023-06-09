// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:msg/LinkStates.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__LINK_STATES__STRUCT_HPP_
#define GAZEBO_MSGS__MSG__LINK_STATES__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/pose__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__msg__LinkStates __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__msg__LinkStates __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LinkStates_
{
  using Type = LinkStates_<ContainerAllocator>;

  explicit LinkStates_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LinkStates_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _name_type name;
  using _pose_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other>;
  _pose_type pose;
  using _twist_type =
    std::vector<geometry_msgs::msg::Twist_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Twist_<ContainerAllocator>>::other>;
  _twist_type twist;

  // setters for named parameter idiom
  Type & set__name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__pose(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const std::vector<geometry_msgs::msg::Twist_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Twist_<ContainerAllocator>>::other> & _arg)
  {
    this->twist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::msg::LinkStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::msg::LinkStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::msg::LinkStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::msg::LinkStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::LinkStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::LinkStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::LinkStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::LinkStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::msg::LinkStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::msg::LinkStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__msg__LinkStates
    std::shared_ptr<gazebo_msgs::msg::LinkStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__msg__LinkStates
    std::shared_ptr<gazebo_msgs::msg::LinkStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinkStates_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinkStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinkStates_

// alias to use template instance with default allocator
using LinkStates =
  gazebo_msgs::msg::LinkStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__LINK_STATES__STRUCT_HPP_
