//
// Created by talha on 5/2/21.
//

#include "CircularQueue.h"

template<class T>
CircularQueue<T>::CircularQueue(const int _size) {
    if(_size>0){
        this->list=new T[size]();
        this->size=_size;
    }
    else{
        this->size=0;
        this->list=nullptr;
    }
    this->front=0;
    this->rear=0;
}

template<class T>
CircularQueue<T>::~CircularQueue() {
    this->size=0;
}

template<class T>
void CircularQueue<T>::enqueue(T key) {
}

template<class T>
void CircularQueue<T>::dequeue(T key) {

}
