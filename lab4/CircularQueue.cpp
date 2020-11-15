#include "CircularQueue.h"
#include <exception>

// parametrized constructor
// calls the parent constructor
template <typename T>
CircularQueue<T>::CircularQueue(const int size) : List<T>(size) {
  this->qRear = size - 1;
  this->qFront = 0;
}

// destructor
template <typename T> CircularQueue<T>::~CircularQueue() {}

// overridden methods

template <typename T> void CircularQueue<T>::addElement(T value) {
  if (this->arr) {
    this->arr[this->currentSize++] = value;
  }
}

template <typename T> T CircularQueue<T>::removeElement() {
  // confirm this expression
  return this->arr[this->currentSize--];
}

// queue methods

template <typename T> bool CircularQueue<T>::empty() const {
  return (this->currentSize == 0);
}

template <typename T> bool CircularQueue<T>::full() const {
  // if((this->rear == this->maxSize-1 && this-> front == 0) ||
  // (this->rear-1==this->front)){
  //   return true;
  // }
  return (this->currentSize == this->maxSize);
}

template <typename T> int CircularQueue<T>::size() const {
  return this->maxSize;
}

template <typename T> T CircularQueue<T>::front() const {
  if (!this->empty()) {
    return this->arr[this->qFront];
  }
}

template <typename T> T CircularQueue<T>::rear() const {
  if (!this->empty()) {
    return this->arr[this->qRear];
  }
}

template <typename T> void CircularQueue<T>::enqueue(T value) {
  if (!this->full()) {
    this->qRear = (this->qRear + 1) % this->maxSize;
    this->currentSize++;

    this->arr[this->qRear] = value;
  }
}

template <typename T> T CircularQueue<T>::dequeue() {
  if (!this->empty()) {
    this->currentSize--;
    int temp=this->qFront;
    this->qFront = (this->qFront + 1) % this->maxSize;
    return this->arr[temp];
  }
}

template <typename T> void CircularQueue<T>::display() const {
  cout << endl;
  for (int i = 0; i < this->maxSize; i++) {
    cout << this->arr[i] << ' ';
  }
  cout << endl;
}
