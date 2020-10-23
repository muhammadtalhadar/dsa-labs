#pragma once
#include<iostream>
#include"otherfunc.cpp"
using namespace std;

class Student{
 private:
  char* regNo;
  double CGPA;
 public:
  //default parametrized constructor
  Student(const char* regNo=nullptr,const double CGPA=0);
  //destructor
  ~Student();
  //setters
  void setRegNo(const char*);
  void setCGPA(const double);
  //getters
  char* getRegNo()const;
  double getCGPA()const;
  // operators(for purposes of templatizing algorithms for future use.)
  bool operator<(const Student&)const;
  bool operator>(const Student&)const;
  bool operator==(const Student&)const;
  Student& operator = (const Student&);
  //
  void display()const;
};
