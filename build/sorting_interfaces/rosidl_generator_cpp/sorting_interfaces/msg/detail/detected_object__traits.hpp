// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sorting_interfaces:msg/DetectedObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sorting_interfaces/msg/detected_object.hpp"


#ifndef SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_
#define SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sorting_interfaces/msg/detail/detected_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace sorting_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectedObject & msg,
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

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    to_flow_style_yaml(msg.size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectedObject & msg,
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

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_block_style_yaml(msg.size, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectedObject & msg, bool use_flow_style = false)
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
  const sorting_interfaces::msg::DetectedObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  sorting_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sorting_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sorting_interfaces::msg::DetectedObject & msg)
{
  return sorting_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sorting_interfaces::msg::DetectedObject>()
{
  return "sorting_interfaces::msg::DetectedObject";
}

template<>
inline const char * name<sorting_interfaces::msg::DetectedObject>()
{
  return "sorting_interfaces/msg/DetectedObject";
}

template<>
struct has_fixed_size<sorting_interfaces::msg::DetectedObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sorting_interfaces::msg::DetectedObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sorting_interfaces::msg::DetectedObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_
