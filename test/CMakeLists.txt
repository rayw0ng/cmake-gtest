cmake_minimum_required(VERSION 3.10)

add_executable(ExampleTests ExampleTests.cpp ExampleTests2.cpp)
target_link_libraries(ExampleTests PUBLIC 
    gtest_main
    Example
)
#add_test(ExampleTests ExampleTests)
include(GoogleTest)
gtest_discover_tests(ExampleTests)