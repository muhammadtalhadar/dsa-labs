cmake_minimum_required(VERSION 3.17)
project(dsa_labs)

set(CMAKE_CXX_STANDARD 14)

add_executable(dsa_labs main.cpp LLNode.h LLNode.cpp LLNode_linker.h LinkedList.cpp LinkedList.h LinkedList_linker.h CircularQueue.cpp CircularQueue.h)