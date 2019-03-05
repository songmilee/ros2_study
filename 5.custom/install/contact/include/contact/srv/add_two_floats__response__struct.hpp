// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef CONTACT__SRV__ADD_TWO_FLOATS__RESPONSE__STRUCT_HPP_
#define CONTACT__SRV__ADD_TWO_FLOATS__RESPONSE__STRUCT_HPP_

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_contact_srv_AddTwoFloats_Response __attribute__((deprecated))
#else
# define DEPRECATED_contact_srv_AddTwoFloats_Response __declspec(deprecated)
#endif

namespace contact
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddTwoFloats_Response_
{
  using Type = AddTwoFloats_Response_<ContainerAllocator>;

  explicit AddTwoFloats_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0.0;
    }
  }

  explicit AddTwoFloats_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0.0;
    }
  }

  // field types and members
  using _sum_type =
    double;
  _sum_type sum;

  // setters for named parameter idiom
  Type * set__sum(
    const double & _arg)
  {
    this->sum = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    contact::srv::AddTwoFloats_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const contact::srv::AddTwoFloats_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<contact::srv::AddTwoFloats_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<contact::srv::AddTwoFloats_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      contact::srv::AddTwoFloats_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<contact::srv::AddTwoFloats_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      contact::srv::AddTwoFloats_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<contact::srv::AddTwoFloats_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<contact::srv::AddTwoFloats_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<contact::srv::AddTwoFloats_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_contact_srv_AddTwoFloats_Response
    std::shared_ptr<contact::srv::AddTwoFloats_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_contact_srv_AddTwoFloats_Response
    std::shared_ptr<contact::srv::AddTwoFloats_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddTwoFloats_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddTwoFloats_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddTwoFloats_Response_

// alias to use template instance with default allocator
using AddTwoFloats_Response =
  contact::srv::AddTwoFloats_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace contact

#endif  // CONTACT__SRV__ADD_TWO_FLOATS__RESPONSE__STRUCT_HPP_
