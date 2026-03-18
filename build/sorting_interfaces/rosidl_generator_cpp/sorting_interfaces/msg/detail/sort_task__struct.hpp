// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sorting_interfaces:msg/SortTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sorting_interfaces/msg/sort_task.hpp"


#ifndef SORTING_INTERFACES__MSG__DETAIL__SORT_TASK__STRUCT_HPP_
#define SORTING_INTERFACES__MSG__DETAIL__SORT_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pick_pose'
// Member 'pregrasp_pose'
// Member 'lift_pose'
// Member 'place_pose'
// Member 'retreat_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sorting_interfaces__msg__SortTask __attribute__((deprecated))
#else
# define DEPRECATED__sorting_interfaces__msg__SortTask __declspec(deprecated)
#endif

namespace sorting_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SortTask_
{
  using Type = SortTask_<ContainerAllocator>;

  explicit SortTask_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pick_pose(_init),
    pregrasp_pose(_init),
    lift_pose(_init),
    place_pose(_init),
    retreat_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->class_name = "";
      this->target_bin = "";
    }
  }

  explicit SortTask_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_id(_alloc),
    class_name(_alloc),
    target_bin(_alloc),
    pick_pose(_alloc, _init),
    pregrasp_pose(_alloc, _init),
    lift_pose(_alloc, _init),
    place_pose(_alloc, _init),
    retreat_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->class_name = "";
      this->target_bin = "";
    }
  }

  // field types and members
  using _object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_id_type object_id;
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;
  using _target_bin_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_bin_type target_bin;
  using _pick_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pick_pose_type pick_pose;
  using _pregrasp_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pregrasp_pose_type pregrasp_pose;
  using _lift_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _lift_pose_type lift_pose;
  using _place_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _place_pose_type place_pose;
  using _retreat_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _retreat_pose_type retreat_pose;

  // setters for named parameter idiom
  Type & set__object_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }
  Type & set__target_bin(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_bin = _arg;
    return *this;
  }
  Type & set__pick_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pick_pose = _arg;
    return *this;
  }
  Type & set__pregrasp_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pregrasp_pose = _arg;
    return *this;
  }
  Type & set__lift_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->lift_pose = _arg;
    return *this;
  }
  Type & set__place_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->place_pose = _arg;
    return *this;
  }
  Type & set__retreat_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->retreat_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sorting_interfaces::msg::SortTask_<ContainerAllocator> *;
  using ConstRawPtr =
    const sorting_interfaces::msg::SortTask_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sorting_interfaces::msg::SortTask_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sorting_interfaces::msg::SortTask_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sorting_interfaces::msg::SortTask_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sorting_interfaces::msg::SortTask_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sorting_interfaces::msg::SortTask_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sorting_interfaces::msg::SortTask_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sorting_interfaces::msg::SortTask_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sorting_interfaces::msg::SortTask_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sorting_interfaces__msg__SortTask
    std::shared_ptr<sorting_interfaces::msg::SortTask_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sorting_interfaces__msg__SortTask
    std::shared_ptr<sorting_interfaces::msg::SortTask_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SortTask_ & other) const
  {
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->class_name != other.class_name) {
      return false;
    }
    if (this->target_bin != other.target_bin) {
      return false;
    }
    if (this->pick_pose != other.pick_pose) {
      return false;
    }
    if (this->pregrasp_pose != other.pregrasp_pose) {
      return false;
    }
    if (this->lift_pose != other.lift_pose) {
      return false;
    }
    if (this->place_pose != other.place_pose) {
      return false;
    }
    if (this->retreat_pose != other.retreat_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const SortTask_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SortTask_

// alias to use template instance with default allocator
using SortTask =
  sorting_interfaces::msg::SortTask_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sorting_interfaces

#endif  // SORTING_INTERFACES__MSG__DETAIL__SORT_TASK__STRUCT_HPP_
