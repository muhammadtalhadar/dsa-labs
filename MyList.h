#pragma once
#include"List.h"
#include"List.cpp"

template<class T>
class MyList :
    public List<T>
{
public:
    // default parametrized constructor
    MyList(const T* _arr=nullptr, const int _maxSize=0, const int _currentSize=0);
    // copy constructor
    MyList(const MyList&);
    // destructor
    virtual ~MyList();
    // setters
        // inherited from List class
    //getters 
        // inherited from List class

    // class methods
    bool empty()const;
    int size()const;
    bool full()const;
    T last()const;

    // overridden methods
    void addElement(const T&);
    void removeElement();

    // operator
    MyList& operator =(const MyList&);

    // subscript opr
    T& operator[](int);
};