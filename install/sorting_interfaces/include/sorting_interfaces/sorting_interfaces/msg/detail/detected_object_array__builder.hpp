// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sorting_interfaces:msg/DetectedObjectArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sorting_interfaces/msg/detected_object_array.hpp"


#ifndef SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT_ARRAY__BUILDER_HPP_
#define SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sorting_interfaces/msg/detail/detected_object_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sorting_interfaces
{

namespace msg
{

namespace builder
{

class Init_DetectedObjectArray_objects
{
public:
  explicit Init_DetectedObjectArray_objects(::sorting_interfaces::msg::DetectedObjectArray & msg)
  : msg_(msg)
  {}
  ::sorting_interfaces::msg::DetectedObjectArray objects(::sorting_interfaces::msg::DetectedObjectArray::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sorting_interfaces::msg::DetectedObjectArray msg_;
};

class Init_DetectedObjectArray_header
{
public:
  Init_DetectedObjectArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObjectArray_objects header(::sorting_interfaces::msg::DetectedObjectArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectedObjectArray_objects(msg_);
  }

private:
  ::sorting_interfaces::msg::DetectedObjectArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sorting_interfaces::msg::DetectedObjectArray>()
{
  return sorting_interfaces::msg::builder::Init_DetectedObjectArray_header();
}

}  // namespace sorting_interfaces

#endif  // SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT_ARRAY__BUILDER_HPP_
