#pragma once
#include "List.h"
template<typename T>
class Stack :
    public List<T>
{
private:
    void addElement(const T)override;
    T removeElement()override;
public:
    Stack(const int size=0);
    Stack(const Stack<T>&);
    ~Stack();

    // class methods
    bool full()const;
    bool empty()const;
    void push(const T);
    T pop();

    int getCurrentSize()const;
    int getMaxSize()const;

    // operator
    const T& operator[](const int index)const;
    T& operator[](const int index);
};
