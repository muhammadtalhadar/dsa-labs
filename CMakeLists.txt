cmake_minimum_required(VERSION 3.17)
project(dsa_labs)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(dsa_labs main.cpp BinaryTreeNode.h BinaryTree.h)
