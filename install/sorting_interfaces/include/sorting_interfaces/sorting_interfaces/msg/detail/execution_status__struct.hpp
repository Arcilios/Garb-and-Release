// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sorting_interfaces:msg/ExecutionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sorting_interfaces/msg/execution_status.hpp"


#ifndef SORTING_INTERFACES__MSG__DETAIL__EXECUTION_STATUS__STRUCT_HPP_
#define SORTING_INTERFACES__MSG__DETAIL__EXECUTION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sorting_interfaces__msg__ExecutionStatus __attribute__((deprecated))
#else
# define DEPRECATED__sorting_interfaces__msg__ExecutionStatus __declspec(deprecated)
#endif

namespace sorting_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExecutionStatus_
{
  using Type = ExecutionStatus_<ContainerAllocator>;

  explicit ExecutionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->stage = "";
      this->success = false;
      this->message = "";
    }
  }

  explicit ExecutionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_id(_alloc),
    stage(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_id = "";
      this->stage = "";
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_id_type object_id;
  using _stage_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _stage_type stage;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__object_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__stage(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->stage = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sorting_interfaces::msg::ExecutionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sorting_interfaces::msg::ExecutionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sorting_interfaces::msg::ExecutionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sorting_interfaces::msg::ExecutionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sorting_interfaces::msg::ExecutionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sorting_interfaces::msg::ExecutionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sorting_interfaces::msg::ExecutionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sorting_interfaces::msg::ExecutionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sorting_interfaces::msg::ExecutionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sorting_interfaces::msg::ExecutionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sorting_interfaces__msg__ExecutionStatus
    std::shared_ptr<sorting_interfaces::msg::ExecutionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sorting_interfaces__msg__ExecutionStatus
    std::shared_ptr<sorting_interfaces::msg::ExecutionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecutionStatus_ & other) const
  {
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->stage != other.stage) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecutionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecutionStatus_

// alias to use template instance with default allocator
using ExecutionStatus =
  sorting_interfaces::msg::ExecutionStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sorting_interfaces

#endif  // SORTING_INTERFACES__MSG__DETAIL__EXECUTION_STATUS__STRUCT_HPP_
