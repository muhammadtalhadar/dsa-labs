#include<iostream>
using namespace std;

int sumOfDigits(const int N){
    if(N==0){
        return 0;
    }
    else{
        return N%10 + sumOfDigits(N/10);
    }
}

int main()
{
    cout<<"\nResult: "<<sumOfDigits(12345);
    return 0;
}