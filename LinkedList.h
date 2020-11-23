#pragma once
#include "Node.h"
#include "NodeLinker.h"
#include <iostream>
using namespace std;

template <class T>
class LinkedList {
private:
  Node<T> *head;

public:

  // constructor
  LinkedList<T>();
  // copy constructor
  LinkedList<T>(const LinkedList<T> &);

  // insertion
  void sortedInsert(T);

  // deletion
  T deleteFromPosition(int); // deletes the node at the particular position
  void destroy(int,int); // deletes the nodes from starting to ending position
  // misc
  bool isEmpty() const;
  void print() const;

  // max sum
  LinkedList<T> maxSum(const LinkedList<T>&);

  // destructor
  ~LinkedList();
};
