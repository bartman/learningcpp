cmake_minimum_required(VERSION 3.13)
project(learningcpp)

set(CMAKE_CXX_STANDARD 20 REQUIRED)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_VERBOSE_MAKEFILE OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS YES)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
