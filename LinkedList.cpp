#pragma once
#include"LinkedList.h"

// constructor
LinkedList::LinkedList() { head = nullptr, tail = nullptr; }

//destructor
LinkedList::~LinkedList() {
  head=nullptr, tail=nullptr;
  destroyLL();
};

//
void LinkedList::destroyLL(){
  Node* temp=nullptr;
  if(head){
    while(head->next){
      
      temp=head;//get ptr of current node to delete from head
      head=head->next;//move head forward
      delete temp;// delete target ptr
    }
    head=nullptr;
  }
}
