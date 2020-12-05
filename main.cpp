#include "LinkedList.h"
#include "LinkedListLink.h"
#include "Queue.h"
#include "QueueLink.h"
#include <iostream>
#include <iterator>

using namespace std;

template <typename T>
Queue<T> reverseQueue(Queue<T> obj)
{
  int size = obj.size();
  Queue<T> reverse;
  
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      obj.enqueue(obj.dequeue());
    }
    reverse.enqueue(obj.dequeue());
  }
  return reverse;
}

int main()
{
  cout << "\n\n----------Best of Luck for the Exam ---------\n\n";
  Queue<char> q1;
  q1.enqueue('D');
  q1.enqueue('S');
  q1.enqueue('A');
  q1.enqueue(' ');
  q1.enqueue('L');
  q1.enqueue('A');
  q1.enqueue('B');
  q1.display();
  cout << endl;
  Queue<char> reverseQ1 = reverseQueue(q1);
  reverseQ1.display();
  return 0;
}
