// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dwb_msgs:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__TRAJECTORY_SCORE__STRUCT_HPP_
#define DWB_MSGS__MSG__TRAJECTORY_SCORE__STRUCT_HPP_

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
// Member 'traj'
#include "dwb_msgs/msg/trajectory2_d__struct.hpp"
// Member 'scores'
#include "dwb_msgs/msg/critic_score__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dwb_msgs__msg__TrajectoryScore __attribute__((deprecated))
#else
# define DEPRECATED__dwb_msgs__msg__TrajectoryScore __declspec(deprecated)
#endif

namespace dwb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryScore_
{
  using Type = TrajectoryScore_<ContainerAllocator>;

  explicit TrajectoryScore_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : traj(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->total = 0.0f;
    }
  }

  explicit TrajectoryScore_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : traj(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->total = 0.0f;
    }
  }

  // field types and members
  using _traj_type =
    dwb_msgs::msg::Trajectory2D_<ContainerAllocator>;
  _traj_type traj;
  using _scores_type =
    std::vector<dwb_msgs::msg::CriticScore_<ContainerAllocator>, typename ContainerAllocator::template rebind<dwb_msgs::msg::CriticScore_<ContainerAllocator>>::other>;
  _scores_type scores;
  using _total_type =
    float;
  _total_type total;

  // setters for named parameter idiom
  Type & set__traj(
    const dwb_msgs::msg::Trajectory2D_<ContainerAllocator> & _arg)
  {
    this->traj = _arg;
    return *this;
  }
  Type & set__scores(
    const std::vector<dwb_msgs::msg::CriticScore_<ContainerAllocator>, typename ContainerAllocator::template rebind<dwb_msgs::msg::CriticScore_<ContainerAllocator>>::other> & _arg)
  {
    this->scores = _arg;
    return *this;
  }
  Type & set__total(
    const float & _arg)
  {
    this->total = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dwb_msgs::msg::TrajectoryScore_<ContainerAllocator> *;
  using ConstRawPtr =
    const dwb_msgs::msg::TrajectoryScore_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dwb_msgs::msg::TrajectoryScore_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dwb_msgs::msg::TrajectoryScore_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::msg::TrajectoryScore_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::msg::TrajectoryScore_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dwb_msgs::msg::TrajectoryScore_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dwb_msgs::msg::TrajectoryScore_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dwb_msgs::msg::TrajectoryScore_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dwb_msgs::msg::TrajectoryScore_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dwb_msgs__msg__TrajectoryScore
    std::shared_ptr<dwb_msgs::msg::TrajectoryScore_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dwb_msgs__msg__TrajectoryScore
    std::shared_ptr<dwb_msgs::msg::TrajectoryScore_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryScore_ & other) const
  {
    if (this->traj != other.traj) {
      return false;
    }
    if (this->scores != other.scores) {
      return false;
    }
    if (this->total != other.total) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryScore_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryScore_

// alias to use template instance with default allocator
using TrajectoryScore =
  dwb_msgs::msg::TrajectoryScore_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dwb_msgs

#endif  // DWB_MSGS__MSG__TRAJECTORY_SCORE__STRUCT_HPP_
