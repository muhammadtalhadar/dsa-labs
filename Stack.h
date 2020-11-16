#pragma once
#include"singlyLinkedList.h"
#include"singlyLinkedList.cpp"
class Stack :public singlyLinkedList {
public:
	Stack();
	~Stack();

	void push(int);
	int pop();
};
