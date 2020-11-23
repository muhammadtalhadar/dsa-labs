#pragma once
#include"LinkedList.h"
#include"LinkedListLinker.h"


template<typename T>
LinkedList<T> maxSumLinkList(const LinkedList<T>& lhs, const LinkedList<T>& rhs) {
	LinkedList<T> result;
	Node<T>* lhs_head = lhs.head;
	Node<T>* rhs_head = rhs.head;

	if (lhs_head && !rhs_head) {
		return lhs;
	}
	if (rhs_head && !lhs_head) {
		return lhs;
	}

	Node<T>* toInsert = nullptr;
	Node<T>* toInserAt = nullptr;

	if (lhs_head->data > rhs_head->data) {
		toInsert = lhs_head;
	}
	else {
		toInsert = rhs_head;
	}

	while (lhs_head && rhs_head) {

		result.sortedInsert(toInsert->data);
		
		if ((toInsert == lhs_head) && lhs_head->data == rhs_head->data) {
			toInsert = rhs_head;
		}
		else if ((toInsert == rhs_head) && rhs_head->data == lhs_head->data) {
			toInsert = lhs_head;
		}

		lhs_head = lhs_head->next;
		rhs_head = rhs_head->next;
	}

	if (lhs_head) {
		toInsert = lhs_head;
	}
	else if (rhs_head) {
		toInsert = rhs_head; 
	}

	while (toInsert) {
		result.sortedInsert(toInsert->data);
	}

	return result;
}