#pragma once
#include "LinkedList.h"
#include"LinkedList.cpp"
// SLL implementation without using LinkedList::tail
struct singlyLinkedList : public LinkedList {
  int ssize;

public:
  singlyLinkedList();
  ~singlyLinkedList();
  // deletion codes
  bool removeFromTail();
  bool removeFromHead();

  // insertion codes
  void insertAtHead(int);
  void insertAtTail(int);

  // other methods
  int front();
  int back();
  int size();
  bool empty();
  void print();
};
