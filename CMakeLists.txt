cmake_minimum_required(VERSION 3.17)
project(dsa_assignments)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(dsa_assignments
        BinaryTree.cpp
        BinaryTree.h
        BinaryTreeLinker.h
        BinaryTreeNode.cpp
        BinaryTreeNode.h
        BinaryTreeNodeLinker.h
        main.cpp)
