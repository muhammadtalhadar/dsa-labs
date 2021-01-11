#pragma once
#include "Node.h"
#include "NodeLinker.h"

template<class T>
class Stack{
     Node<T>* head;
public:
    Stack();
    ~Stack();
    void push(T data);
    T pop();
    T top()const;
    bool empty()const;
    void print()const;
};