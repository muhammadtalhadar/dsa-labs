#pragma once
#include "singlyLinkedList.h"
#include"singlyLinkedList.cpp"

class Queue :
    public singlyLinkedList
{
public:
    Queue();
    ~Queue();

    void enqueue(int);
    int dequeue();
};
