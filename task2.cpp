#include <iostream>
#include "Stack.h"
#include "Stack.cpp"
using namespace std;

void printReverseStack(Stack& stk){
  if(stk.empty()) return;

  int top=stk.front();
  stk.pop();

  printReverseStack(stk);

  cout<<top<<" ";

  stk.push(top);
}

int main(){
  Stack stk;

  // stk becomes 1,2,3,4
  for(int i=0; i<5;i++){
    stk.push(i);
  }
 printReverseStack(stk);
  return 0;
}
