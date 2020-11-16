#pragma once
#include "LinkedList.h"

class singlyLinkedList:public LinkedList
{
private:
	int ssize;
public:
	singlyLinkedList();

	// deletion codes
	bool removeFromTail();
	bool removeFromHead();

	// insertion codes
	void insertAtHead(int);
	void insertAtTail(int);

	// other methods
	int front();
	int back();
	int size();
	bool empty();
	void print();
};

