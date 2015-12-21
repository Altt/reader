cmake_minimum_required(VERSION 3.3)
project(reader)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/Model.cpp src/Model.h)
add_executable(reader ${SOURCE_FILES})