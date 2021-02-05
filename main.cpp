#include <iostream>
//#include "LinkedList.h"
//#include "LinkedList_linker.h"
using namespace std;

void reverseString(char * ptr){
    if(*ptr!='\0'){
        reverseString(ptr+1);
        cout<<*ptr;
    }
}

int sumOfDigits(int N){
    if(N!=0){
        return N%10+sumOfDigits(N/10);
    }
    return 0;
}

int sumOfElements(const int arr[], const int N){
    if(N>0){
        return arr[N-1] + sumOfElements(arr, N-1);
    }
    return 0;
}

using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
//
    int nums[]={1,2,3,4,5};
//    LinkedList<int> ll;
//    for(int i:nums){
//        ll.insertKey(i);
//    }
//
//    ll.print();
//    cout<<endl;
//    ll.reversePrint();
//    cout<<endl;

    cout<<"sum: "<<sumOfElements(nums, 5);
    return 0;
}
