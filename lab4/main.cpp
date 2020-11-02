#include <iostream>
#include"List.h"
#include"ListLinker.h"
#include"Stack.h"
#include"StackLinker.h"
#include"Queue.h"
#include"QueueLinker.h"

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

// reverse stack
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


// display queue
template<typename T>
void showQueue(const Queue<T>& que){

	int size = que.getCurrentSize();
	cout << "\nCurrent size: " << size;

	cout << endl << "HEAD -> ";
	for (int i = 0; i < size; i++) {
		cout << que[i]<<endl;
	}
}

int main()
{
	Queue<int> que(3);
	int num;

	for (int i = 0; i < 5; i++) {
		cout << endl<<i+1<<"- Enter number to queue: ";
		cin >> num;
		que.enqueue(num);
	}

	showQueue(que);

	cout<<"\n dequeued: "<<que.dequeue();
	cout << "\n dequeued: " << que.dequeue();

	showQueue(que);

	cout << "\nfinished.";
	return 0;
}