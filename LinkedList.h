//
// Created by talha on 5/2/21.
//

#pragma once
#include <iostream>
#include "LLNode.h"
#include "LLNode_linker.h"
using namespace std;
template<class T>
class LinkedList {
private:
    LLNode<T>* head;
    LLNode<T>* tail;

    // recursive implementations

    void _insert(LLNode<T>*& node, T key);
    void _delete(LLNode<T>*& node, T key);
    void _print(LLNode<T>* node)const;
    void _reversePrint(LLNode<T>* node)const;
public:
    LinkedList();
    ~LinkedList();

    void insertKey(T key);
    void deleteKey(T key);
    void print()const;
    void reversePrint()const;
};
