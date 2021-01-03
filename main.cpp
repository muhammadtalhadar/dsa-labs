//
// Created by talha on 3/1/21.
//

#include <iostream>
#include "BinaryTree.h"
using namespace  std;

int main(){

  cout<<"\nTest file run."<<endl;
  BinaryTree<int> bt;
  int nums[]={60,70,80,75,77,50,53,57,30,35,40,48,45,32,-1};
  int i=0;

  while(nums[i]!=-1){
      bt.insert(nums[i]);
      i++;
  }

  cout<<"Printing inorder: ";
  bt.print_inorder();
  cout<<endl;

  cout<<"Searching... 1 is true, 0 is false."<<endl;
  cout<<"search(75): "<<bt.search(75)<<endl;
  cout<<"search(40): "<<bt.search(40)<<endl;
  cout<<"search(1001): "<<bt.search(1001)<<endl;

  cout<<"Height: "<<bt.height()<<endl;

  cout<<"Leaf Nodes: "<<bt.leafNodeTotalCount()<<endl;
  return 0;
}
