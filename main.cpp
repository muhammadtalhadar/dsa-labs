#include <iostream>
#include"List.h"
#include"ListLinker.h"
#include"Stack.h"
#include"StackLinker.h"
using namespace std;

// display stack
template<typename T>
void showStack(const Stack<T>& stk) {
	int size = stk.getCurrentSize();

	for (int i = 0; i < size; i++) {
		cout << endl;
		cout << i << " - " << stk[i];
	}
	cout <<" <- HEAD "<< endl;
}

template<typename T>
void reverseStack(Stack<T>& stk) {
	T temp;
	int last = stk.getCurrentSize();
	int mid = last / 2;

	for (int i = 0; i < mid; i++) {
		temp = stk[i];
		stk[i] = stk[last - 1 - i];
		stk[last - 1 - i] = temp;
	}
}

int main()
{
	Stack<int> stk(3);
	cout << "\nempty(): " << stk.empty(); // should answer YES

	// this will test stack::push(), stack::addElement() and list::arrayGrow
	int a = 0;
	for (int i = 0; i < 7; i++) {
		cout << "Enter element to insert into stack: ";
		cin >> a;
		stk.push(a);
	}

	// print
	showStack(stk);

	// remove pop element then print
	cout << "\nElement popped: " << stk.pop();
	showStack(stk);

	// reversal the print
	reverseStack(stk);
	cout << "\nStack Reversed...";
	showStack(stk);

	return 0;
}