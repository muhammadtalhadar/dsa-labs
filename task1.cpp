#include<iostream>
using namespace std;

//  factorial by recursion
int factorial(const int N){
    if(N>0){
        return N*factorial(N-1);
    }
    else{
        return 1;
    }
}

int main(){
    cout<<"Factorial: "<<factorial(5);
    return 0;
}