#pragma once
#include"singlyLinkedList.h"
#include "Node.h"
#include <locale>

singlyLinkedList::singlyLinkedList():LinkedList() {
	ssize = 0;
}

// will call parent class destructor
singlyLinkedList::~singlyLinkedList(){}

// deletion codes
bool singlyLinkedList::removeFromTail()
{

	if (head == nullptr && tail == nullptr)
		return false;

	Node* temptail= tail;
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
  if(!head){
    return true;
  }
  return false;
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
