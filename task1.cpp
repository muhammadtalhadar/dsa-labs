#include<iostream>
#include "singlyLinkedList.h"
#include "singlyLinkedList.cpp"
#include "Node.h"
#include "Node.cpp"
using namespace std;

void llReversePrint(Node* head){
  if(!head){
    return;
  }

  llReversePrint(head->next);

  cout<<head->data<<" ";
}

int main(){
  singlyLinkedList ll;

  // insert 1,2,3,4
  for(int i=0; i<5;i++){
    ll.insertAtTail(i);
  }

  llReversePrint(ll.head);

  cout<<endl;
  return 0;
}
