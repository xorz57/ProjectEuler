cmake_minimum_required(VERSION 3.24)
project(ProjectEuler)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest REQUIRED)

add_executable(Problem0001Test tests/Problem0001Test.cpp)
add_executable(Problem0006Test tests/Problem0006Test.cpp)
add_executable(Problem0009Test tests/Problem0009Test.cpp)

target_link_libraries(Problem0001Test PRIVATE GTest::gtest GTest::gtest_main)
target_link_libraries(Problem0006Test PRIVATE GTest::gtest GTest::gtest_main)
target_link_libraries(Problem0009Test PRIVATE GTest::gtest GTest::gtest_main)

enable_testing()

add_test(NAME Problem0001 COMMAND Problem0001Test)
add_test(NAME Problem0006 COMMAND Problem0006Test)
add_test(NAME Problem0009 COMMAND Problem0009Test)