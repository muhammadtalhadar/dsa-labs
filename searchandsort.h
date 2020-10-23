#pragma once
#include "Student.h"
#include "otherfunc.cpp"
#include<iostream>
using namespace std;


template<typename T>
void swap(T& rhs, T& lhs){
  T temp=rhs;
  rhs=lhs;
  lhs=temp;
}

// Linear Search
template<typename T>
int linearSearch(T key, T* values, int length){
  for(int i=0; i<length;i++){
    if(values[i]==key){
      return i;
    }
  }
  return -1;
}


// Binary Search
template<typename T>
int binarySearch(T value,T* arr, int length){
  int low=0, high=length-1, mid=0;
  while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==value){
      return mid;
    }
    else if(arr[mid]<value){
      low=mid+1;
    }
    else{
      high=mid-1;
    }
  }
  return -1;
}


// Selection Sort - Ascending Order
template<typename T>
void selectionSortAscending(T* values, int length){
  T temp;
  int smallSub=0;
  for(int i=0; i<length;i++){
    smallSub=i;
    for(int j=i+1; j<length;j++){
      if(values[j]<values[smallSub]){
	smallSub=j;
      }
    }
    temp = values[i];
    values[i]=values[smallSub];
    values[smallSub]=temp;
  }
}
