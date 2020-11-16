#include "singlyLinkedList1.h"
#pragma once

singlyLinkedList1::singlyLinkedList1():LinkedList() {
	int ssize = 0;
}

// deletion codes
bool singlyLinkedList1::removeFromTail()
{

	if (head == nullptr && tail == nullptr)
		return false;

	Node* temptail = tail;
	Node* temphead = head;

	// move ptr to previous node of tail
	while (temphead->next != tail) {
		temphead = temphead->next;
	}

	// remove pointer to tail from second last node
	temphead->next = nullptr;
	tail = temphead;

	// delete tail
	delete temptail;
	return true;

}

bool singlyLinkedList1::removeFromHead()
{
	if (head == nullptr && tail == nullptr)
		return false;

	// point head ahead
	Node* temp = head;
	head = head->next;

	if (head == nullptr)
		tail = nullptr;

	delete temp;
	ssize--;
	return true;
}

// insertion codes
void singlyLinkedList1::insertAtHead(int value)
{
	Node* newNode;
	newNode = new Node;
	newNode->data = value;
	newNode->next = nullptr;

	if (head == nullptr && tail == nullptr)
	{
		head = newNode;
		tail = newNode;
	}

	else
	{
		newNode->next = head;
		head = newNode;
	}
	ssize++;
}

void singlyLinkedList1::insertAtTail(int value)
{
	Node* newNode;
	newNode = new Node;
	newNode->data = value;
	newNode->next = nullptr;

	if (head == nullptr && tail == nullptr)
	{
		head = newNode;
		tail = newNode;
	}

	else
	{
		tail->next = newNode;
		tail = newNode;
	}
	ssize++;
}

int singlyLinkedList1::front() {
	return head->data;
}

int singlyLinkedList1::back() {
	return tail->data;
}

int singlyLinkedList1::size() {
	return ssize;
}

bool singlyLinkedList1::empty() {
	return (head && tail);
}

void singlyLinkedList1::print()
{
	Node* temp = head;

	while (temp != nullptr)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
}