cmake_minimum_required(VERSION 3.3)
project(reader)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

set(SOURCE_FILES main.cpp src/Model.cpp src/Model.h)
add_executable(reader ${SOURCE_FILES})

target_link_libraries(reader gtest gtest_main)
