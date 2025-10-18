cmake_minimum_required(VERSION 3.10)
project(Lab2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)

add_executable(arrays_strings_test google_test/arrays_strings_test.cpp)
target_link_libraries(arrays_strings_test GTest::gtest GTest::gtest_main)

# For the main program
add_executable(arrays_strings arrays_strings.cpp)
