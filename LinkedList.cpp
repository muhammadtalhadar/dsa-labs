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

    Node<T> toInsertAt = this->head;
    Node<T> toBeInserted = obj.head->next;
    ;

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
    Node<T>* temp=new Node<T>;
    temp->data=val;
    // if current node was less than head, then head must be updated
    if(val < this->head->data){
      temp->next=head;
      this->head=temp;
    }
    else{
      Node<T>* previousNode=this->head;
      Node<T>* currentNode=previousNode->next;

      while(currentNode && val < currentNode->data){
	previousNode=currentNode;
	currentNode=currentNode->next;
      }

      temp->next=currentNode;
      previousNode->next=temp;
    }
  }
  else{
    this->head=new Node<T>;
    this->head->data=val;
  }
}

// deletion
template <typename T>
T LinkedList<T>::deleteFromPosition(int position)
{
  if (!this->isEmpty())
  {
    T yeet = {};
    Node<T> *previousNode = nullptr;
    Node<T> *currentNode = this->head;

    for (int i = 0; i < position && currentNode->head; i++)
    {
      previousNode = currentNode;
      currentNode = currentNode->next;
    }

    yeet = currentNode->data;
    previousNode->next = currentNode->next;
    delete[] currentNode;

    return yeet;
  }
  return T();
}

template <typename T>
void LinkedList<T>::destroy(int start, int end)
{
  if (!this->isEmpty())
  {
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
  this->destroy(0, 0);
  this->head = nullptr;
};
