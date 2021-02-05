#pragma once
#include <iostream>
using namespace std;

template<class T>
struct LLNode;

template<class T>
ostream &operator<< (ostream &os, const LLNode<T> &node);

template<class T> 
struct LLNode{
  T data;
  LLNode* next;


    explicit LLNode(T data=T(), LLNode *next=nullptr);
    friend ostream &operator<< <>(ostream &os, const LLNode &node);
};