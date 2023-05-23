cmake_minimum_required(VERSION 3.24)
project(ProjectEuler)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest REQUIRED)

add_executable(ProjectEulerTest tests/Problem0001Test.cpp
                                tests/Problem0006Test.cpp
                                tests/Problem0009Test.cpp)

target_link_libraries(ProjectEulerTest PRIVATE GTest::gtest GTest::gtest_main)

enable_testing()

add_test(NAME ProjectEuler COMMAND ProjectEulerTest)
