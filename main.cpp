#include <iostream>
#include "LinkedList.h"
#include "LinkedList_linker.h"
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;

    int nums[]={1,2,3,4,5};
    LinkedList<int> ll;
    for(int i:nums){
        ll.insertKey(i);
    }

    ll.print();
    cout<<endl;
    ll.reversePrint();
    cout<<endl;
    return 0;
}
