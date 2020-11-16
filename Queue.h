#pragma once
#include "singlyLinkedList.h"
class Queue :
    public singlyLinkedList
{
    Queue();
    ~Queue();

    void enqueue(int);
    int dequeue();
};