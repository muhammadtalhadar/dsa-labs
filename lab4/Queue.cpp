#include "Queue.h"
template<typename T>
Queue<T>::Queue(const int size){
	if (size > 0) {
		stk = new Stack<T>(size);
	}
	else {
		stk = nullptr;
	}
}

template<typename T>
Queue<T>::~Queue() {
	if (stk) {
		delete stk;
		stk = nullptr;
	}
}

template<typename T>
void Queue<T>::enqueue(const T obj)
{
	// append element to queue
	stk->push(obj);
}

template<typename T>
T Queue<T>::dequeue(){

	T temp;
	// create a temp stack that holds one less element than this->stack
	Stack<T>* tempStk = new Stack<T>(stk->getCurrentSize()-1);
	
	// pop from this->stack and push to tempStk
	while (!tempStk->full()) {
		tempStk->push(stk->pop());
	}

	// remove 0th element
	temp=stk->pop();

	// pop from tempstack and push to this->stk to restore this-> stack with one less element
	while (!tempStk->empty()) {
		stk->push(tempStk->pop());
	}

	// mem handle
	delete tempStk;
	tempStk = nullptr;

	return temp;
}

template<typename T>
int Queue<T>::getCurrentSize() const
{
	return stk->getCurrentSize();
}

template<typename T>
int Queue<T>::getMaxSize() const
{
	stk->getMaxSize();
}

template<typename T>
const T& Queue<T>::operator[](const int index)const
{
	return stk->operator[](index);
}

template<typename T>
T& Queue<T>::operator[](const int index)
{
	return stk->operator[](index);
}
