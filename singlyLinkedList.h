#pragma once
#include "LinkedList.h"
class singlyLinkedList:public LinkedList
{
public:
	bool deleteFromTail()
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
		}
	}

	bool deleteFromHead()
	{
		if (head == nullptr && tail == nullptr)
			return false;

		else
		{
			Node* temp = head;
			head = head->next;
			if (head == nullptr)
				tail = nullptr;
			delete temp;
			return true;
			
		}
	}

	void insertAtHead(int value)
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
	}

	void insertAtTail(int value)
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

	}

	singlyLinkedList()
	{

	}

	void print()
	{
		Node* temp = head;

		while (temp != nullptr)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}
	}
};

