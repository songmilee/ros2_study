// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef CONTACT__MSG__CONTACT__STRUCT_HPP_
#define CONTACT__MSG__CONTACT__STRUCT_HPP_

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
# define DEPRECATED_contact_msg_Contact __attribute__((deprecated))
#else
# define DEPRECATED_contact_msg_Contact __declspec(deprecated)
#endif

namespace contact
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Contact_
{
  using Type = Contact_<ContainerAllocator>;

  explicit Contact_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->first_name = "";
      this->last_name = "";
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->gender = false;
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->age = 0;
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = "";
    }
  }

  explicit Contact_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : first_name(_alloc),
    last_name(_alloc),
    address(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->first_name = "";
      this->last_name = "";
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->gender = false;
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->age = 0;
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->address = "";
    }
  }

  // field types and members
  using _first_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _first_name_type first_name;
  using _last_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _last_name_type last_name;
  using _gender_type =
    bool;
  _gender_type gender;
  using _age_type =
    uint8_t;
  _age_type age;
  using _address_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _address_type address;

  // setters for named parameter idiom
  Type * set__first_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->first_name = _arg;
    return this;
  }
  Type * set__last_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->last_name = _arg;
    return this;
  }
  Type * set__gender(
    const bool & _arg)
  {
    this->gender = _arg;
    return this;
  }
  Type * set__age(
    const uint8_t & _arg)
  {
    this->age = _arg;
    return this;
  }
  Type * set__address(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->address = _arg;
    return this;
  }

  // constant declarations
  static constexpr bool FEMALE =
    1;
  static constexpr bool MALE =
    0;

  // pointer types
  using RawPtr =
    contact::msg::Contact_<ContainerAllocator> *;
  using ConstRawPtr =
    const contact::msg::Contact_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<contact::msg::Contact_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<contact::msg::Contact_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      contact::msg::Contact_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<contact::msg::Contact_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      contact::msg::Contact_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<contact::msg::Contact_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<contact::msg::Contact_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<contact::msg::Contact_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_contact_msg_Contact
    std::shared_ptr<contact::msg::Contact_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_contact_msg_Contact
    std::shared_ptr<contact::msg::Contact_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Contact_ & other) const
  {
    if (this->first_name != other.first_name) {
      return false;
    }
    if (this->last_name != other.last_name) {
      return false;
    }
    if (this->gender != other.gender) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->address != other.address) {
      return false;
    }
    return true;
  }
  bool operator!=(const Contact_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Contact_

// alias to use template instance with default allocator
using Contact =
  contact::msg::Contact_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr bool Contact_<ContainerAllocator>::FEMALE;
template<typename ContainerAllocator>
constexpr bool Contact_<ContainerAllocator>::MALE;

}  // namespace msg

}  // namespace contact

#endif  // CONTACT__MSG__CONTACT__STRUCT_HPP_
