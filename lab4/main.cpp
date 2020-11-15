#include "CircularQueue.h"
#include "CircularQueueLinker.h"
#include <iostream>

using namespace std;

int main() {
  CircularQueue<int> que(2);
  cout<<"is full: "<<que.full()<<endl;
  cout<<"is empty: "<<que.empty()<<endl;
  int num;

  for (int i = 0; i < 2; i++) {
    cout << endl << i + 1 << "- Enter number to queue: ";
    cin >> num;
    que.enqueue(num);
  }
  que.display();

  cout<<"is full: "<<que.full()<<endl;
  cout<<"is empty: "<<que.empty()<<endl;
  
  cout<<"front val: "<<que.front()<<endl;
  cout<<"rear val: "<<que.rear()<<endl;
  
  cout << "\n dequeued: " <<que.dequeue()<<endl;
  
  cout<<"is full: "<<que.full()<<endl;
  cout<<"is empty: "<<que.empty()<<endl;

  cout << "\n dequeued: " <<que.dequeue()<<endl;
  cout<<"is full: "<<que.full()<<endl;
  cout<<"is empty: "<<que.empty()<<endl;

  cout << "\nfinished.";
  return 0;
}
