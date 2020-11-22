#include<iostream>
#include"LinkedList.h"
#include"LinkedListLinker.h"
using namespace std;

int main(){
  LinkedList<int> ll;
  int size=6;
  for(int i=size; i>=0;i--){
    ll.sortedInsert(i);
  }

  cout<<endl;
  cout<<"Orignal LL: ";
  ll.print();
  cout<<endl;
  ll.deleteFromPosition(7);
  ll.print();
  return 0;
}
