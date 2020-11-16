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

	// constructor
	LinkedList();
	//destructor
	~LinkedList();

	// pure virtual methods
	virtual void insertAtTail(int) = 0;
	virtual void insertAtHead(int) = 0;
	virtual bool removeFromHead() = 0;
	virtual bool removeFromTail() = 0;
};

