#pragma once
#include"singlyLinkedList.h"

singlyLinkedList::singlyLinkedList():LinkedList() {
	ssize = 0;
}

// deletion codes
bool singlyLinkedList::removeFromTail()
{

	if (head == nullptr && tail == nullptr)
		return false;

	else
	{
		Node* temp = head;
		while (1)
		{
			if (temp->next == tail)
				break;
			else
				temp = temp->next;
		}

		cout << temp->data << endl;


		return true;
		ssize--;
	}
}

bool singlyLinkedList::removeFromHead()
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
void singlyLinkedList::insertAtHead(int value)
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

void singlyLinkedList::insertAtTail(int value)
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

int singlyLinkedList::front() {
	return head->data;
}

int singlyLinkedList::back() {
	return tail->data;
}

int singlyLinkedList::size() {
	return ssize;
}

bool singlyLinkedList::empty() {
	return (head && tail);
}

void singlyLinkedList::print()
{
	Node* temp = head;

	while (temp != nullptr)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
}