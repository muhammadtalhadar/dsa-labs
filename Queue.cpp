#include"Queue.h"

template<typename T>
Queue<T>::Queue(){
  this->currentSize=0;
  this->list={};
}

template<typename T>
Queue<T>::Queue(const Queue<T>& rhs){
  this->list(rhs.list);
  this->currentSize=rhs.currentSize;
}


template<typename T>
void Queue<T>::enqueue(T _data){
  this->list.insertAtEnd(_data);
  this->currentSize++;
}

template<typename T>
T Queue<T>::dequeue(){
  if(this->list.deleteAtHead()){
    this->currentSize--;
  }
}

template<typename T>
void Queue<T>::display()const{
  this->list.print();
}

template<typename T>
int Queue<T>::size()const{
  return this->currentSize;
}

template<typename T>
Queue<T>::~Queue(){//will call link list's destructor implicitly
  this->currentSize=0;
}
