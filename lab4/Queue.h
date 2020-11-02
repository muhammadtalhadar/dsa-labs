#pragma once
#include"Stack.h"

template<typename T>
class Queue
{
	Stack<T>* stk;
public:
	Queue(const int);
	~Queue();

	// queue methods
	void enqueue(const T);
	T dequeue();

	// getters
	int getCurrentSize()const;
	int getMaxSize()const;

	// indexing ops
	const T& operator[](const int index)const;
	T& operator[](const int index);
};