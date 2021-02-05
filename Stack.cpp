#pragma once
#include"Stack.h"

Stack::Stack():singlyLinkedList(){}

Stack::~Stack() {destroyLL();}

void Stack::push(int val) {
	insertAtTail(val);
}

int Stack::pop() {
	int srear = back();
	removeFromTail();
	return srear;
}
