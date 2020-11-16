#include"Stack.h"
#include"Queue.h"
int main()
{
	Stack* stk = nullptr;
	Queue* myq = nullptr;

	int choice = 0;
	int num = 0;
	int count=0;
	cout << "Make a choice." << endl;
	cout << "1 - Stack." << endl;
	cout << "2 - Queue." << endl;
	cin >> choice;

	if (choice == 1) {
		stk = new Stack;
		cout << "Keep entering numbers into stack, 0 for termination." << endl;
		cin >> num;
		count++;

		while (num) {
			stk->push(num);
			cin >> num;
		}

		cout << "New stack: " << endl;
		stk->print();

		cout << "Enter number of elements to pop: " << endl;
		cin >> choice;

		cout << "Popping..." << endl;
		for (int i = 0; i < choice; i++) {
			cout << stk->pop() << " ";
		}

		cout << "New stack: " << endl;
		stk->print();

		choice = -1;
	}
	else if(choice==2){
		myq=new Queue;
		cout << "Keep queuing numbers into queue, 0 for termination." << endl;
		cin >> num;
		count++;
		while (num) {
			myq->enqueue(num);
			cin >> num;
			count++;
		}

		cout << "New queue: " << endl;
		myq->print();

		cout << "Enter number of elements to dequeue: " << endl;
		cin >> choice;

		for (int i = 0; i < choice; i++) {
			cout << myq->dequeue() << " ";
		}

		cout << "New queue: " << endl;
		myq->print();
		choice = -1;
	}
	return 0;
}