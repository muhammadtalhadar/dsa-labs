#include<iostream>
#include"misc.h"
#include<string.h>
using namespace std;

// FIXME implement this with a generic return value(i.e, characters in reverse)
char reverseStringPrint(const char* str,const int len){
    
    if(len>0){
        cout<<str[len-1];
        return reverseStringPrint(str, len-1);
    }
    else{
        return char();
    }
}

int main(){
    char str[]="Pakistan";
    cout<<"\nResult: "<<reverseStringPrint(str,strlen(str));
    return 0;
}