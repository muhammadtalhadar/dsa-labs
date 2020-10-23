#include "Student.h"
#include "otherfunc.cpp"

Student::Student(const char *regNo, const double CGPA) {
  if (regNo && CGPA >= 0) {
    deepCopy(this->regNo, regNo);
    this->CGPA = CGPA;
  } else {
    this->regNo = nullptr;
    this->CGPA = 0;
  }
}

Student::~Student() {
  if (this->regNo) {
    delete[] this->regNo;
    this->regNo=nullptr;
  }
}

// setters
void Student::setRegNo(const char *regNo) {
  if (regNo) {
    if (this->regNo) {
      delete[] this->regNo;
      this->regNo = nullptr;
    }
    deepCopy(this->regNo, regNo);
  }
}

void Student::setCGPA(const double CGPA) {
  if (CGPA >= 0) {
    this->CGPA = CGPA;
  }
}

// getters
char *Student::getRegNo() const {
  char *temp = nullptr;
  if (this->regNo) {
    deepCopy(temp, this->regNo);
  }
  return temp;
}

double Student::getCGPA() const { return this->CGPA; }

// operators
bool Student::operator<(const Student& rhs)const{
  return this->CGPA < rhs.CGPA;
}

bool Student::operator>(const Student& rhs)const{
  return this->CGPA>rhs.CGPA;
}

bool Student::operator==(const Student& rhs)const{
  return (isStrEqual(this->regNo, rhs.regNo) && this->CGPA==rhs.CGPA);
}

Student& Student::operator=(const Student& rhs){
  if(rhs.regNo){
    if(this->regNo){
      delete[] this->regNo;
      this->regNo=nullptr;
    }
    deepCopy(this->regNo, rhs.regNo);
    this->CGPA=rhs.CGPA;
  }
  return *this;
}
//
void Student::display()const{
  cout<<"\nRegNo: "<<this->regNo;
  cout<<"\nCGPA: "<<this->CGPA;
}
