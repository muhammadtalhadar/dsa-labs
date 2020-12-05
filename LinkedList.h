#pragma once
#include <iostream>
#include"Node.h"
#include"NodeLink.h"

template <class T> class LinkedList {
private:
  Node<T> *head;
public:
  LinkedList();
  LinkedList<T>(const LinkedList<T> &);
  void insertAtEnd(T);
  T deleteFromHead();
  bool isEmpty() const;
  void print() const;
  ~LinkedList();
};
