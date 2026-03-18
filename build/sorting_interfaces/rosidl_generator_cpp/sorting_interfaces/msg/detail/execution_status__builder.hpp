// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sorting_interfaces:msg/ExecutionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sorting_interfaces/msg/execution_status.hpp"


#ifndef SORTING_INTERFACES__MSG__DETAIL__EXECUTION_STATUS__BUILDER_HPP_
#define SORTING_INTERFACES__MSG__DETAIL__EXECUTION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sorting_interfaces/msg/detail/execution_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sorting_interfaces
{

namespace msg
{

namespace builder
{

class Init_ExecutionStatus_message
{
public:
  explicit Init_ExecutionStatus_message(::sorting_interfaces::msg::ExecutionStatus & msg)
  : msg_(msg)
  {}
  ::sorting_interfaces::msg::ExecutionStatus message(::sorting_interfaces::msg::ExecutionStatus::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sorting_interfaces::msg::ExecutionStatus msg_;
};

class Init_ExecutionStatus_success
{
public:
  explicit Init_ExecutionStatus_success(::sorting_interfaces::msg::ExecutionStatus & msg)
  : msg_(msg)
  {}
  Init_ExecutionStatus_message success(::sorting_interfaces::msg::ExecutionStatus::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecutionStatus_message(msg_);
  }

private:
  ::sorting_interfaces::msg::ExecutionStatus msg_;
};

class Init_ExecutionStatus_stage
{
public:
  explicit Init_ExecutionStatus_stage(::sorting_interfaces::msg::ExecutionStatus & msg)
  : msg_(msg)
  {}
  Init_ExecutionStatus_success stage(::sorting_interfaces::msg::ExecutionStatus::_stage_type arg)
  {
    msg_.stage = std::move(arg);
    return Init_ExecutionStatus_success(msg_);
  }

private:
  ::sorting_interfaces::msg::ExecutionStatus msg_;
};

class Init_ExecutionStatus_object_id
{
public:
  Init_ExecutionStatus_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecutionStatus_stage object_id(::sorting_interfaces::msg::ExecutionStatus::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_ExecutionStatus_stage(msg_);
  }

private:
  ::sorting_interfaces::msg::ExecutionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sorting_interfaces::msg::ExecutionStatus>()
{
  return sorting_interfaces::msg::builder::Init_ExecutionStatus_object_id();
}

}  // namespace sorting_interfaces

#endif  // SORTING_INTERFACES__MSG__DETAIL__EXECUTION_STATUS__BUILDER_HPP_
