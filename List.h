#pragma once
#include<iostream>
#include"miscFunctions.h"
using namespace std;

template<class T>
class List {
protected:
	T* arr;
	int maxSize;
	int currentSize;
public:
	List(const T* _arr=nullptr, const int _maxSize=0, const int _currentSize=0);
	List(const List&);
	virtual ~List();

	// getters
	T* getArr()const;
	int getMaxSize()const;
	int getCurrentSize()const;

	// setters
	void setArr(const T*);
	void setCurrentSize(const int);
	void setMaxSize(const int);

	//// pure virtual funcs
	virtual void addElement(const T&)=0;
	virtual void removeElement()=0;
};
