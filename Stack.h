#pragma once
#include"singlyLinkedList.h"

class Stack :public singlyLinkedList {
public:
	Stack();
	~Stack();

	void push(int);
	int pop();
};