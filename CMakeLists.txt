cmake_minimum_required(VERSION 2.8)
project(EULER)

option(EULER_BUILD_TESTS "Build the unit tests." OFF)

if (${CMAKE_CXX_COMPILER_ID} MATCHES GNU)
  include(CheckCXXCompilerFlag)
  CHECK_CXX_COMPILER_FLAG(-std=c++11 HAVE_STD11)
  if (HAVE_STD11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
  else ()
    message(FATAL_ERROR "No advanced standard C++ support (-std=c++11 not defined).")
  endif ()
elseif (${CMAKE_CXX_COMPILER_ID} MATCHES Clang)
  include(CheckCXXCompilerFlag)
  CHECK_CXX_COMPILER_FLAG(-std=c++11 HAVE_STD11)
  if (HAVE_STD11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -stdlib=libc++")
    set(CMAKE_CXX_LINK_FLAGS "${CMAKE_CXX_LINK_FLAGS} -stdlib=libc++")
  else ()
    message(FATAL_ERROR "No C++11 support for Clang version. Please upgrade Clang to a version supporting C++11.")
  endif ()
endif ()

message(STATUS "C++ Compiler ID: ${CMAKE_CXX_COMPILER_ID}")
message(STATUS "C++ Flags: ${CMAKE_CXX_FLAGS} linker flags: ${CMAKE_CXX_LINK_FLAGS}")

set(PROBLEMS problem1 problem2 problem3 problem4 problem5)

add_subdirectory(deps/athene)

foreach (problem ${PROBLEMS})
  add_subdirectory(${problem})
endforeach (problem)


