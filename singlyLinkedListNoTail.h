#pragma once
#include "LinkedList.h"
class singlyLinkedListNoTail : public LinkedList {
public:
  int ssize;
  singlyLinkedListNoTail();

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
