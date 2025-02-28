cmake_minimum_required(VERSION 3.10)

# Project name
project(AVL_Tree_Project)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(avl_tree
    src/main.cpp
    src/AVL_Node.hpp
    src/AVL_Tree.hpp
    src/AVL_Tree.tpp
)

# Include directories
include_directories(src)
