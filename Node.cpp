#pragma once
#include"Node.h"

Node::Node() {
	data = 0;
	next = nullptr;
}

Node::~Node() {
	if (next) {
		delete[] next;
		next = nullptr;
	}
}