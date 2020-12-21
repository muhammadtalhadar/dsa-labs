#include<iostream>
using namespace std;

int lowestCommonMultiple(int j,int k){

    static int commonMultiple;

    if(k>j){
        swap(j,k);
    }

    commonMultiple+=k;

    if(commonMultiple%j == 0 and commonMultiple%k==0){
        return commonMultiple;
    }
    else{
        return lowestCommonMultiple(j,k);
    }
}

int main(){
    cout<<"\nresult: "<<lowestCommonMultiple(10,2);
    return 0;
}