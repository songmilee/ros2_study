// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef CONTACT__SRV__ADD_TWO_FLOATS__REQUEST__STRUCT_HPP_
#define CONTACT__SRV__ADD_TWO_FLOATS__REQUEST__STRUCT_HPP_

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
# define DEPRECATED_contact_srv_AddTwoFloats_Request __attribute__((deprecated))
#else
# define DEPRECATED_contact_srv_AddTwoFloats_Request __declspec(deprecated)
#endif

namespace contact
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddTwoFloats_Request_
{
  using Type = AddTwoFloats_Request_<ContainerAllocator>;

  explicit AddTwoFloats_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
    }
  }

  explicit AddTwoFloats_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
    }
  }

  // field types and members
  using _a_type =
    double;
  _a_type a;
  using _b_type =
    double;
  _b_type b;

  // setters for named parameter idiom
  Type * set__a(
    const double & _arg)
  {
    this->a = _arg;
    return this;
  }
  Type * set__b(
    const double & _arg)
  {
    this->b = _arg;
    return this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    contact::srv::AddTwoFloats_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const contact::srv::AddTwoFloats_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<contact::srv::AddTwoFloats_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<contact::srv::AddTwoFloats_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      contact::srv::AddTwoFloats_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<contact::srv::AddTwoFloats_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      contact::srv::AddTwoFloats_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<contact::srv::AddTwoFloats_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<contact::srv::AddTwoFloats_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<contact::srv::AddTwoFloats_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_contact_srv_AddTwoFloats_Request
    std::shared_ptr<contact::srv::AddTwoFloats_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_contact_srv_AddTwoFloats_Request
    std::shared_ptr<contact::srv::AddTwoFloats_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddTwoFloats_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddTwoFloats_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddTwoFloats_Request_

// alias to use template instance with default allocator
using AddTwoFloats_Request =
  contact::srv::AddTwoFloats_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace contact

#endif  // CONTACT__SRV__ADD_TWO_FLOATS__REQUEST__STRUCT_HPP_
