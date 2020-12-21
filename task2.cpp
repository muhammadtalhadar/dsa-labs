#include<iostream>
using namespace std;

int naturalSummation(int N){
    if(N>0){
        return N+naturalSummation(N-1);
    }
    else{
        return N;
    }
}

int main(){
    cout<<"\nResult: "<<naturalSummation(5);
    return 0;
}