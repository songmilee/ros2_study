# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_cpublisher_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED cpublisher_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(cpublisher_FOUND FALSE)
  elseif(NOT cpublisher_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(cpublisher_FOUND FALSE)
  endif()
  return()
endif()
set(_cpublisher_CONFIG_INCLUDED TRUE)

# output package information
if(NOT cpublisher_FIND_QUIETLY)
  message(STATUS "Found cpublisher: 0.0.0 (${cpublisher_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'cpublisher' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(cpublisher_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${cpublisher_DIR}/${_extra}")
endforeach()
