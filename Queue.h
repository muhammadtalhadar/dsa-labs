#pragma once
#include<iostream>
#include"LinkedList.h"
#include"LinkedListLink.h"

template<typename T>
class Queue{
 private:
  LinkedList<T> list;
  int currentSize;
 public:
  Queue<T>();
  Queue<T>(const Queue<T>&);
  void enqueue(T);
  T dequeue();
  void display()const;
  int size()const;
  ~Queue();
};
