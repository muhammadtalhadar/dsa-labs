#pragma once
#include<iostream>
using namespace std;

int len(const char* str){
    int i=0;

    while(str[i]!='\0'){
        i++;
    }
    
    return i;
}