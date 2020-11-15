#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList
{
protected:
	Node *head;
	Node *tail;
public:
	virtual void insertAtTail(int) = 0;
	virtual void insertAtHead(int) = 0;
	virtual bool deleteFromHead() = 0;
	virtual bool deleteFromTail() = 0;
	LinkedList()
	{
		head = nullptr;
		tail = nullptr;
	}
};

