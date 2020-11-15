#include "singlyLinkedList.h"

int main()
{
	singlyLinkedList sLL;

	sLL.insertAtTail(-5);
	sLL.insertAtTail(16);
	sLL.insertAtTail(50);
	sLL.insertAtTail(100);


	sLL.deleteFromTail();

	cout << "Print starts from here: " << endl;
	sLL.print();
	return 0;
}