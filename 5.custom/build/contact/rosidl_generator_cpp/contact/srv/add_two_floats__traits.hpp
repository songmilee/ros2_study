// generated from rosidl_generator_cpp/resource/srv__traits.hpp.em
// generated code does not contain a copyright notice


#include "contact/srv/add_two_floats__struct.hpp"

#ifndef CONTACT__SRV__ADD_TWO_FLOATS__TRAITS_HPP_
#define CONTACT__SRV__ADD_TWO_FLOATS__TRAITS_HPP_

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

template<typename T>
struct has_bounded_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

template<>
struct has_fixed_size<contact::srv::AddTwoFloats>
  : std::integral_constant<
    bool,
    has_fixed_size<contact::srv::AddTwoFloats_Request>::value &&
    has_fixed_size<contact::srv::AddTwoFloats_Response>::value
  >
{
};

template<>
struct has_bounded_size<contact::srv::AddTwoFloats>
  : std::integral_constant<
    bool,
    has_bounded_size<contact::srv::AddTwoFloats_Request>::value &&
    has_bounded_size<contact::srv::AddTwoFloats_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTACT__SRV__ADD_TWO_FLOATS__TRAITS_HPP_
