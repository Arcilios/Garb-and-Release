// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sorting_interfaces:msg/ExecutionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sorting_interfaces/msg/execution_status.hpp"


#ifndef SORTING_INTERFACES__MSG__DETAIL__EXECUTION_STATUS__TRAITS_HPP_
#define SORTING_INTERFACES__MSG__DETAIL__EXECUTION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sorting_interfaces/msg/detail/execution_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sorting_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ExecutionStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: stage
  {
    out << "stage: ";
    rosidl_generator_traits::value_to_yaml(msg.stage, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecutionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: stage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stage: ";
    rosidl_generator_traits::value_to_yaml(msg.stage, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecutionStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sorting_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sorting_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sorting_interfaces::msg::ExecutionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sorting_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sorting_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sorting_interfaces::msg::ExecutionStatus & msg)
{
  return sorting_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sorting_interfaces::msg::ExecutionStatus>()
{
  return "sorting_interfaces::msg::ExecutionStatus";
}

template<>
inline const char * name<sorting_interfaces::msg::ExecutionStatus>()
{
  return "sorting_interfaces/msg/ExecutionStatus";
}

template<>
struct has_fixed_size<sorting_interfaces::msg::ExecutionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sorting_interfaces::msg::ExecutionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sorting_interfaces::msg::ExecutionStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SORTING_INTERFACES__MSG__DETAIL__EXECUTION_STATUS__TRAITS_HPP_
