#include<iostream>
#include"Student.h"
#include"Student.cpp"
#include"otherfunc.cpp"
#include"searchandsort.h"
using namespace std;

int main(){
  // create array of students and initiate it
  int listLen=3;
  Student* list= new Student[listLen];

  char* regNo=new char[50]{'\0'};
  double CGPA=0;
  
  for(int i=0; i<listLen;i++){
    cout<<"\nEnter regNo: ";
    cin>>regNo;
    cout<<"\nEnter CGPA: ";
    cin>>CGPA;
    list[i].setRegNo(regNo);
    list[i].setCGPA(CGPA);
  }

  for(int i=0; i<listLen;i++){
    list[i].display();
  }
  
  // sort array
  cout<<"\nSelection sorting...";
  selectionSortAscending<Student>(list, listLen);

  // searching tests
  Student talha("l1s19bscs0060",3.79);

  cout<<"Linear Search result: "<<linearSearch<Student>(talha, list, listLen);
  cout<<"Binary Search result: "<<binarySearch<Student>(talha, list, listLen);

  delete[] regNo;
  regNo=nullptr;

  delete[] list;
  list=nullptr;
  
  return 0;
}
