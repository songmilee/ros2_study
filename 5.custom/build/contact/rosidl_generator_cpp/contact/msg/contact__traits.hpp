// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef CONTACT__MSG__CONTACT__TRAITS_HPP_
#define CONTACT__MSG__CONTACT__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
inline const char * data_type();

template<typename T>
struct has_fixed_size : std::false_type {};

template<typename T>
struct has_bounded_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "contact/msg/contact__struct.hpp"


template<>
struct has_fixed_size<contact::msg::Contact>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<contact::msg::Contact>
  : std::integral_constant<bool, false> {};

template<>
inline const char * data_type<contact::msg::Contact>()
{
  return "contact::msg::Contact";
}

}  // namespace rosidl_generator_traits

#endif  // CONTACT__MSG__CONTACT__TRAITS_HPP_
