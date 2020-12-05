#include"Node.h"

template<typename T>
Node<T>::Node(){
  this->data={};
  this->next=nullptr;
}

template<typename T>
Node<T>::~Node(){
  this->next=nullptr;
}
