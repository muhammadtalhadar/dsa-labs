#pragma once
#include "singlyLinkedListNoTail.h"

singlyLinkedListNoTail::singlyLinkedListNoTail() : LinkedList() { int ssize = 0; }

// deletion codes
bool singlyLinkedListNoTail::removeFromTail() {

  // return nothing if LL is null
  if (head == nullptr)
    return false;

  Node *secondLast = head;
  Node *temphead = head;

  while (temphead->next) {
    secondLast = temphead;
    temphead = temphead->next;
  }

  // break list link
  secondLast->next = nullptr;

  // delete last element
  delete temphead;
  temphead = nullptr;
  secondLast = nullptr;

  //
  ssize--;
  return true;
}

bool singlyLinkedListNoTail::removeFromHead() {
  if (head == nullptr)
    return false;

  // point head ahead
  Node *temp = head;
  head = head->next;

  delete temp;
  ssize--;
  return true;
}

// insertion codes
void singlyLinkedListNoTail::insertAtHead(int value) {
  Node *newNode;
  newNode = new Node;
  newNode->data = value;
  newNode->next = nullptr;

  if (head == nullptr) {
    head = newNode;
  }

  else {
    newNode->next = head;
    head = newNode;
  }
  ssize++;
}

void singlyLinkedListNoTail::insertAtTail(int value) {
  Node *newNode;
  newNode = new Node;
  newNode->data = value;
  newNode->next = nullptr;

  if (head == nullptr) {
    head = newNode;
  }

  else {
    // locate tail of LL
    Node *temphead = head;

    while (temphead->next) {
      temphead = temphead->next;
    }
    temphead->next = newNode;
  }
  ssize++;
}

int singlyLinkedListNoTail::front() {
  if (head) {
    return head->data;
  }
  return -1;
}

int singlyLinkedListNoTail::back() {
  Node *temp;
  if (head) {
    temp = head;
    while (temp->next) {
      temp = temp->next;
    }
    return temp->data;
  }
  return -1;
}

int singlyLinkedListNoTail::size() { return ssize; }

bool singlyLinkedListNoTail::empty() { return head; }

void singlyLinkedListNoTail::print() {
  Node *temp = head;

  while (temp != nullptr) {
    cout << temp->data << endl;
    temp = temp->next;
  }
}
