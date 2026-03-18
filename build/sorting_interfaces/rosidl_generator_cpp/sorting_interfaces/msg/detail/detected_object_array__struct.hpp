// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sorting_interfaces:msg/DetectedObjectArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sorting_interfaces/msg/detected_object_array.hpp"


#ifndef SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT_ARRAY__STRUCT_HPP_
#define SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'objects'
#include "sorting_interfaces/msg/detail/detected_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sorting_interfaces__msg__DetectedObjectArray __attribute__((deprecated))
#else
# define DEPRECATED__sorting_interfaces__msg__DetectedObjectArray __declspec(deprecated)
#endif

namespace sorting_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedObjectArray_
{
  using Type = DetectedObjectArray_<ContainerAllocator>;

  explicit DetectedObjectArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit DetectedObjectArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _objects_type =
    std::vector<sorting_interfaces::msg::DetectedObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sorting_interfaces::msg::DetectedObject_<ContainerAllocator>>>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__objects(
    const std::vector<sorting_interfaces::msg::DetectedObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sorting_interfaces::msg::DetectedObject_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sorting_interfaces::msg::DetectedObjectArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const sorting_interfaces::msg::DetectedObjectArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sorting_interfaces::msg::DetectedObjectArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sorting_interfaces::msg::DetectedObjectArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sorting_interfaces::msg::DetectedObjectArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sorting_interfaces::msg::DetectedObjectArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sorting_interfaces::msg::DetectedObjectArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sorting_interfaces::msg::DetectedObjectArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sorting_interfaces::msg::DetectedObjectArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sorting_interfaces::msg::DetectedObjectArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sorting_interfaces__msg__DetectedObjectArray
    std::shared_ptr<sorting_interfaces::msg::DetectedObjectArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sorting_interfaces__msg__DetectedObjectArray
    std::shared_ptr<sorting_interfaces::msg::DetectedObjectArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedObjectArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedObjectArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedObjectArray_

// alias to use template instance with default allocator
using DetectedObjectArray =
  sorting_interfaces::msg::DetectedObjectArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sorting_interfaces

#endif  // SORTING_INTERFACES__MSG__DETAIL__DETECTED_OBJECT_ARRAY__STRUCT_HPP_
