#pragma once
#include<iostream>
#include"List.h"
#include"ListLinker.h"
using namespace std;

template<typename T>
class CircularQueue:public List<T>{
private:
  int qFront;
  int qRear;

public:
  CircularQueue(const int);
  ~CircularQueue();

  void enqueue(T);
  T dequeue();
  bool empty()const;
  bool full()const;
  int size()const;
  T front()const;
  T rear()const;
  
  // overrideen methods
  void addElement(const T)override;
  T removeElement()override;

  //
  void display()const;
};
