#pragma once
#include "singlyLinkedList.h"
class Queue :
    public singlyLinkedList
{
public:
    Queue();
    ~Queue();

    void enqueue(int);
    int dequeue();
};