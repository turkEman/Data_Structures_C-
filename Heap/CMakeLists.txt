cmake_minimum_required(VERSION 3.10)

# Project name
project(HeapProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable
add_executable(heap_test main.cpp)
