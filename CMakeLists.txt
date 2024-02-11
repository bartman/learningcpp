cmake_minimum_required(VERSION 3.5.1)
project(cppmain)

set(CMAKE_CXX_STANDARD 20 REQUIRED)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_VERBOSE_MAKEFILE OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS YES)

add_subdirectory(src)
add_subdirectory(test)
