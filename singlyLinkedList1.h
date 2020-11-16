#pragma once
#include "LinkedList.h"
class singlyLinkedList1 :
    public LinkedList
{
	singlyLinkedList1();

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

