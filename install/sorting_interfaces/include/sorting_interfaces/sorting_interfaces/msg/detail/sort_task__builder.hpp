// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sorting_interfaces:msg/SortTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sorting_interfaces/msg/sort_task.hpp"


#ifndef SORTING_INTERFACES__MSG__DETAIL__SORT_TASK__BUILDER_HPP_
#define SORTING_INTERFACES__MSG__DETAIL__SORT_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sorting_interfaces/msg/detail/sort_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sorting_interfaces
{

namespace msg
{

namespace builder
{

class Init_SortTask_retreat_pose
{
public:
  explicit Init_SortTask_retreat_pose(::sorting_interfaces::msg::SortTask & msg)
  : msg_(msg)
  {}
  ::sorting_interfaces::msg::SortTask retreat_pose(::sorting_interfaces::msg::SortTask::_retreat_pose_type arg)
  {
    msg_.retreat_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sorting_interfaces::msg::SortTask msg_;
};

class Init_SortTask_place_pose
{
public:
  explicit Init_SortTask_place_pose(::sorting_interfaces::msg::SortTask & msg)
  : msg_(msg)
  {}
  Init_SortTask_retreat_pose place_pose(::sorting_interfaces::msg::SortTask::_place_pose_type arg)
  {
    msg_.place_pose = std::move(arg);
    return Init_SortTask_retreat_pose(msg_);
  }

private:
  ::sorting_interfaces::msg::SortTask msg_;
};

class Init_SortTask_lift_pose
{
public:
  explicit Init_SortTask_lift_pose(::sorting_interfaces::msg::SortTask & msg)
  : msg_(msg)
  {}
  Init_SortTask_place_pose lift_pose(::sorting_interfaces::msg::SortTask::_lift_pose_type arg)
  {
    msg_.lift_pose = std::move(arg);
    return Init_SortTask_place_pose(msg_);
  }

private:
  ::sorting_interfaces::msg::SortTask msg_;
};

class Init_SortTask_pregrasp_pose
{
public:
  explicit Init_SortTask_pregrasp_pose(::sorting_interfaces::msg::SortTask & msg)
  : msg_(msg)
  {}
  Init_SortTask_lift_pose pregrasp_pose(::sorting_interfaces::msg::SortTask::_pregrasp_pose_type arg)
  {
    msg_.pregrasp_pose = std::move(arg);
    return Init_SortTask_lift_pose(msg_);
  }

private:
  ::sorting_interfaces::msg::SortTask msg_;
};

class Init_SortTask_pick_pose
{
public:
  explicit Init_SortTask_pick_pose(::sorting_interfaces::msg::SortTask & msg)
  : msg_(msg)
  {}
  Init_SortTask_pregrasp_pose pick_pose(::sorting_interfaces::msg::SortTask::_pick_pose_type arg)
  {
    msg_.pick_pose = std::move(arg);
    return Init_SortTask_pregrasp_pose(msg_);
  }

private:
  ::sorting_interfaces::msg::SortTask msg_;
};

class Init_SortTask_target_bin
{
public:
  explicit Init_SortTask_target_bin(::sorting_interfaces::msg::SortTask & msg)
  : msg_(msg)
  {}
  Init_SortTask_pick_pose target_bin(::sorting_interfaces::msg::SortTask::_target_bin_type arg)
  {
    msg_.target_bin = std::move(arg);
    return Init_SortTask_pick_pose(msg_);
  }

private:
  ::sorting_interfaces::msg::SortTask msg_;
};

class Init_SortTask_class_name
{
public:
  explicit Init_SortTask_class_name(::sorting_interfaces::msg::SortTask & msg)
  : msg_(msg)
  {}
  Init_SortTask_target_bin class_name(::sorting_interfaces::msg::SortTask::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_SortTask_target_bin(msg_);
  }

private:
  ::sorting_interfaces::msg::SortTask msg_;
};

class Init_SortTask_object_id
{
public:
  Init_SortTask_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SortTask_class_name object_id(::sorting_interfaces::msg::SortTask::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_SortTask_class_name(msg_);
  }

private:
  ::sorting_interfaces::msg::SortTask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sorting_interfaces::msg::SortTask>()
{
  return sorting_interfaces::msg::builder::Init_SortTask_object_id();
}

}  // namespace sorting_interfaces

#endif  // SORTING_INTERFACES__MSG__DETAIL__SORT_TASK__BUILDER_HPP_
