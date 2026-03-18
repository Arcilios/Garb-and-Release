// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sorting_interfaces:msg/SortTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sorting_interfaces/msg/sort_task.hpp"


#ifndef SORTING_INTERFACES__MSG__DETAIL__SORT_TASK__TRAITS_HPP_
#define SORTING_INTERFACES__MSG__DETAIL__SORT_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sorting_interfaces/msg/detail/sort_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pick_pose'
// Member 'pregrasp_pose'
// Member 'lift_pose'
// Member 'place_pose'
// Member 'retreat_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace sorting_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SortTask & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: class_name
  {
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << ", ";
  }

  // member: target_bin
  {
    out << "target_bin: ";
    rosidl_generator_traits::value_to_yaml(msg.target_bin, out);
    out << ", ";
  }

  // member: pick_pose
  {
    out << "pick_pose: ";
    to_flow_style_yaml(msg.pick_pose, out);
    out << ", ";
  }

  // member: pregrasp_pose
  {
    out << "pregrasp_pose: ";
    to_flow_style_yaml(msg.pregrasp_pose, out);
    out << ", ";
  }

  // member: lift_pose
  {
    out << "lift_pose: ";
    to_flow_style_yaml(msg.lift_pose, out);
    out << ", ";
  }

  // member: place_pose
  {
    out << "place_pose: ";
    to_flow_style_yaml(msg.place_pose, out);
    out << ", ";
  }

  // member: retreat_pose
  {
    out << "retreat_pose: ";
    to_flow_style_yaml(msg.retreat_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SortTask & msg,
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

  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << "\n";
  }

  // member: target_bin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_bin: ";
    rosidl_generator_traits::value_to_yaml(msg.target_bin, out);
    out << "\n";
  }

  // member: pick_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pick_pose:\n";
    to_block_style_yaml(msg.pick_pose, out, indentation + 2);
  }

  // member: pregrasp_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pregrasp_pose:\n";
    to_block_style_yaml(msg.pregrasp_pose, out, indentation + 2);
  }

  // member: lift_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lift_pose:\n";
    to_block_style_yaml(msg.lift_pose, out, indentation + 2);
  }

  // member: place_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "place_pose:\n";
    to_block_style_yaml(msg.place_pose, out, indentation + 2);
  }

  // member: retreat_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "retreat_pose:\n";
    to_block_style_yaml(msg.retreat_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SortTask & msg, bool use_flow_style = false)
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
  const sorting_interfaces::msg::SortTask & msg,
  std::ostream & out, size_t indentation = 0)
{
  sorting_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sorting_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sorting_interfaces::msg::SortTask & msg)
{
  return sorting_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sorting_interfaces::msg::SortTask>()
{
  return "sorting_interfaces::msg::SortTask";
}

template<>
inline const char * name<sorting_interfaces::msg::SortTask>()
{
  return "sorting_interfaces/msg/SortTask";
}

template<>
struct has_fixed_size<sorting_interfaces::msg::SortTask>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sorting_interfaces::msg::SortTask>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sorting_interfaces::msg::SortTask>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SORTING_INTERFACES__MSG__DETAIL__SORT_TASK__TRAITS_HPP_
