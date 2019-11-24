cmake_minimum_required(VERSION 3.10)

project(Example)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

add_subdirectory(googletest)

add_library(Example STATIC Example.hpp Example.cpp)

add_subdirectory(test)