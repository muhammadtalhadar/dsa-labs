#include "Queue.cpp"
#include "Queue.h"
#include "Stack.cpp"
#include "Stack.h"

/*
##  LIFO Stack Using SLL. ##

-- Using Tail pointer;
push() :: O(1) since node is directly placed at tail->next
pop() :: O(n) since we have to first traverse our SLL to find the seconds last
node.

-- Without Tail pointer;
push() :: O(n) since we must traverse our SLL to find tail, then insert new node
pop() :: O(n) as we have to traverse our SLL to find the tail then remove it.


## FIFO Queue using SLL. ##

-- Using Tail pointer;
enqueue() :: O(1) since node is directly placed at tail->next
dequeue() :: O(1) node is directly  remove from head.

-- Without Tail pointer;
enqueue() :: O(N)
dequeue() :: O(1)
*/

int main() {
  Stack *stk = nullptr;
  Queue *myq = nullptr;

  int choice = 0;
  int num = 0;
  int count = 0;
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

    cout << endl;
    cout << "New stack: " << endl;
    stk->print();

    choice = -1;
    delete[] stk;
    stk = nullptr;
  } else if (choice == 2) {
    myq = new Queue;
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
    cout << endl;

    cout << "New queue: " << endl;
    myq->print();
    choice = -1;
    delete[] myq;
    myq = nullptr;
  }
  return 0;
}
