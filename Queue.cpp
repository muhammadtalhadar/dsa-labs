#include "Queue.h"

Queue::Queue():singlyLinkedList(){}
Queue::~Queue(){destroyLL();}

void Queue::enqueue(int val)
{
	insertAtTail(val);
}

int Queue::dequeue()
{
	int temp = front();
	removeFromHead();
	return temp;
}
