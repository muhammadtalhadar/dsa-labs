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

  CircularQueue<int> temp(reverse<int>(que));
  temp.display();

  que.display();
  cout << "\nfinished.";
  return 0;
}
