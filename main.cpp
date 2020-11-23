#include<iostream>
#include"LinkedList.h"
#include"LinkedListLinker.h"

using namespace std;

int main(){
  LinkedList<int> ll1;

  ll1.sortedInsert(1);
  ll1.sortedInsert(3);
  ll1.sortedInsert(30);
  ll1.sortedInsert(90);
  ll1.sortedInsert(120);
  ll1.sortedInsert(240);
  ll1.sortedInsert(511);

  LinkedList<int> ll2;
  ll2.sortedInsert(0);
  ll2.sortedInsert(3);
  ll2.sortedInsert(12);
  ll2.sortedInsert(32);
  ll2.sortedInsert(90);
  ll2.sortedInsert(125);
  ll2.sortedInsert(240);
  ll2.sortedInsert(249);

  LinkedList<int> result = ll1.maxSum(ll2);
  result.print();

  return 0;
}
