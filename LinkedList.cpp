#include "LinkedList.h"
#include <iostream>

// default constructor
template <typename T>
LinkedList<T>::LinkedList()
{
  this->head = nullptr;
}

// copy constructor
template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T> &rhs)
{
  if (!rhs.isEmpty())
  {
    // create head of our LL first
    this->head = new Node<T>;
    this->head->data = rhs.head->data;

    // now create the rest of LL
    Node<T> *toInsert = rhs->head->next;
    Node<T> *temp = this->head;

    while (toInsert->next)
    {
      temp->next = new Node<T>;
      temp->data = toInsert->data;

      temp = temp->next;
      toInsert = toInsert->next;
    }
  }
}

template <typename T>
bool LinkedList<T>::isEmpty() const
{
  if (!this->head)
  {
    return true;
  }
  return false;
}

template <typename T>
void LinkedList<T>::insertAtEnd(T _data)
{

  // inser at head if head was empty
  if (this->isEmpty())
  {
    this->head = new Node<T>;
    this->head->data = _data;
  }
  else
  {
    // locate last Node of LL
    Node<T> *temp = this->head;
    while (temp->next)
    {
      temp = temp->next;
    }
    // create new node at end, and insert insert its data
    temp->next = new Node<T>;
    temp->next->data = _data;
  }
}

template <typename T>
T LinkedList<T>::deleteFromHead()
{
  //if head was empty
  if (this->isEmpty())
  {
    return T();
  }

  // if head was not empty, backup head's next and data
  Node<T> *temp = this->head->next;
  T tempData = this->head->data;

  // delete head, and update it
  delete this->head;
  this->head = temp;

  // return deleted data
  return tempData;
}

template <typename T>
void LinkedList<T>::print() const
{
  if (!this->isEmpty())
  {

    Node<T> *temp = this->head;

    while (temp)
    {
      std::cout << temp->data;

      if (temp->next)
      {
        std::cout << " -> ";
      }
      temp = temp->next;
    }
  }
}

template <typename T>
LinkedList<T>::~LinkedList()
{

  // keep deleting from head until LL is null
  while (!this->isEmpty())
  {
    this->deleteFromHead();
  }
}
