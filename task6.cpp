#include<iostream>
using namespace std;

int sumElements (int *arr, int N){
    if(N>0){
        return arr[N-1] + sumElements(arr,N-1);
    }
    else{
        return 0;
    }
}

int main(){
    int nums[]={3,2,3,4,5};
    int size=5;
    cout<<"\nResult: "<<sumElements(nums, size);
}