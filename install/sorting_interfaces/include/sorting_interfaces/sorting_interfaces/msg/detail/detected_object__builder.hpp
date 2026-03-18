// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sorting_interfaces:msg/DetectedObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sorting_interfaces/msg/detected_object.hpp"


#ifndef SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_
#define SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sorting_interfaces/msg/detail/detected_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sorting_interfaces
{

namespace msg
{

namespace builder
{

class Init_DetectedObject_size
{
public:
  explicit Init_DetectedObject_size(::sorting_interfaces::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  ::sorting_interfaces::msg::DetectedObject size(::sorting_interfaces::msg::DetectedObject::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sorting_interfaces::msg::DetectedObject msg_;
};

class Init_DetectedObject_pose
{
public:
  explicit Init_DetectedObject_pose(::sorting_interfaces::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_size pose(::sorting_interfaces::msg::DetectedObject::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_DetectedObject_size(msg_);
  }

private:
  ::sorting_interfaces::msg::DetectedObject msg_;
};

class Init_DetectedObject_confidence
{
public:
  explicit Init_DetectedObject_confidence(::sorting_interfaces::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_pose confidence(::sorting_interfaces::msg::DetectedObject::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_DetectedObject_pose(msg_);
  }

private:
  ::sorting_interfaces::msg::DetectedObject msg_;
};

class Init_DetectedObject_class_name
{
public:
  explicit Init_DetectedObject_class_name(::sorting_interfaces::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_confidence class_name(::sorting_interfaces::msg::DetectedObject::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_DetectedObject_confidence(msg_);
  }

private:
  ::sorting_interfaces::msg::DetectedObject msg_;
};

class Init_DetectedObject_object_id
{
public:
  Init_DetectedObject_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObject_class_name object_id(::sorting_interfaces::msg::DetectedObject::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_DetectedObject_class_name(msg_);
  }

private:
  ::sorting_interfaces::msg::DetectedObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sorting_interfaces::msg::DetectedObject>()
{
  return sorting_interfaces::msg::builder::Init_DetectedObject_object_id();
}

}  // namespace sorting_interfaces

#endif  // SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_
