// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef CONTACT__SRV__ADD_TWO_FLOATS__RESPONSE__TRAITS_HPP_
#define CONTACT__SRV__ADD_TWO_FLOATS__RESPONSE__TRAITS_HPP_

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

#include "contact/srv/add_two_floats__response__struct.hpp"


template<>
struct has_fixed_size<contact::srv::AddTwoFloats_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<contact::srv::AddTwoFloats_Response>
  : std::integral_constant<bool, true> {};

template<>
inline const char * data_type<contact::srv::AddTwoFloats_Response>()
{
  return "contact::srv::AddTwoFloats_Response";
}

}  // namespace rosidl_generator_traits

#endif  // CONTACT__SRV__ADD_TWO_FLOATS__RESPONSE__TRAITS_HPP_
