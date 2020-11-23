#pragma once
#include "LinkedList.h"
#include "Node.h"

// constructor
template <typename T>
LinkedList<T>::LinkedList() { this->head = nullptr; }

// copy constructor
template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T> &obj)
{
  if (!obj.isEmpty())
  {

    // create this->head first
    this->head = new Node<T>;
    this->head->data = obj.head->data;

    Node<T>* toInsertAt = this->head;
    Node<T>* toBeInserted = obj.head->next;

    while (toBeInserted)
    {
      toInsertAt->next = new Node<T>;
      toInsertAt->next->data = toBeInserted->data;

      toInsertAt = toInsertAt->next;
      toBeInserted = toBeInserted->next;
    }
  }
  else
  {
    this->head = nullptr;
  }
}

// sorted insert
template <typename T>
void LinkedList<T>::sortedInsert(T val)
{
  if (!this->isEmpty())
  {
    Node<T> *temp = new Node<T>;
    temp->data = val;
    // if current node was less than head, then head must be updated
    if (val < this->head->data)
    {
      temp->next = head;
      this->head = temp;
    }
    else
    {
      Node<T> *previousNode = this->head;
      Node<T> *currentNode = previousNode->next;

      while (currentNode && val > currentNode->data)
      {
        previousNode = currentNode;
        currentNode = currentNode->next;
      }

      temp->next = currentNode;
      previousNode->next = temp;
    }
  }
  else
  {
    this->head = new Node<T>;
    this->head->data = val;
  }
}

// deletion
template <typename T>
T LinkedList<T>::deleteFromPosition(int position)
{
  T yeet = {};
  if (!this->isEmpty())
  {
    if (position == 0)
    {
      return T();
    }

    Node<T> *temp = this->head->next;

    if (position == 1)
    {
      yeet = this->head->data;
      delete this->head;
      this->head = temp;
      return yeet;
    }

    Node<T> *previous = this->head;
    for (int i = 1; i < position-1; i++)
    {
      previous = temp;
      temp = temp->next;
    }

    if (temp)
    {
      previous->next = temp->next;
      yeet = temp->data;
      delete temp;
    }
  }
  return yeet;
}

template <typename T>
void LinkedList<T>::destroy(int start, int end)
{
    if (!this->isEmpty() && start != end && end>start) {
        
        Node<T>* behindStart = nullptr;
        Node<T>* temp_head = this->head;

        // move to 'start' element first
        for (int i = 0; i < start-1; i++) {
            behindStart = temp_head;
            temp_head = temp_head->next;
        }

        Node<T>* temp_next = nullptr;
        for (int i = 0; i <= end-start && temp_head; i++) {
            temp_next = temp_head->next;
            delete temp_head;
            temp_head = temp_next;
        }
        behindStart->next = temp_next;
    }
}

// misc
template <typename T>
bool LinkedList<T>::isEmpty() const
{
  if (this->head)
  {
    return false;
  }
  return true;
}

template <typename T>
void LinkedList<T>::print() const
{
  Node<T> *currentNode = this->head;
  while (currentNode)
  {

    cout << currentNode->data;
    currentNode = currentNode->next;

    if (currentNode)
    {
      cout << "->";
    }
  }
}

//destructor
template <typename T>
LinkedList<T>::~LinkedList()
{
    Node<T>* temp = this->head;
    while (temp) {
        temp = temp->next;
        delete head;
        this->head = temp;
    }
};

template<typename T>
LinkedList<T> LinkedList<T>::maxSum(const LinkedList<T>& rhs) {
    LinkedList<T> result;
    Node<T>* lhs_head = this->head;
    Node<T>* rhs_head = rhs.head;

    if (lhs_head && !rhs_head) {
        return *this;
    }
    if (rhs_head && !lhs_head) {
        return rhs;
    }

    Node<T>* toInsert = nullptr;

    if (lhs_head->data > rhs_head->data) {
        toInsert = lhs_head;
    }
    else {
        toInsert = rhs_head;
    }

    while (lhs_head && rhs_head) {

        result.sortedInsert(toInsert->data);

        if ((toInsert == lhs_head) && lhs_head->data == rhs_head->data) {
            toInsert = rhs_head;
        }
        else if ((toInsert == rhs_head) && rhs_head->data == lhs_head->data) {
            toInsert = lhs_head;
        }

        lhs_head = lhs_head->next;
        rhs_head = rhs_head->next;
        toInsert=toInsert->next;
    }

    if (lhs_head) {
        toInsert = lhs_head;
    }
    else if (rhs_head) {
        toInsert = rhs_head;
    }

    while (toInsert) {
        result.sortedInsert(toInsert->data);
        toInsert=toInsert->next;
    }

    return result;
}