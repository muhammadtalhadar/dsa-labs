#include "MyList.h"

template<class T>
MyList<T>::MyList(const T* _arr, const int _maxSize, const int _currentSize) :List<T>(_arr, _maxSize, _currentSize) {}

template<class T>
MyList<T>::MyList(const MyList& rhs) : List<T>(rhs) {}

template<class T>
inline MyList<T>::~MyList(){}

template<class T>
bool MyList<T>::empty() const
{
    if (this->currentSize) {
        return false;
    }
    return true;
}

template<class T>
int MyList<T>::size() const
{
    return this->currentSize;
}

template<class T>
bool MyList<T>::full() const
{
    if (this->currentSize == this->maxSize) {
        return true;
    }
    return false;
}

template<class T>
T MyList<T>::last() const
{
    int temp = this->currentSize;
    if (temp) {
        this->arr[temp - 1];

    }
}

template<class T>
void MyList<T>::addElement(const T& obj)
{
    if (this->currentSize < this->maxSize) {
        this->arr[this->currentSize++] = obj;
    }
}

template<class T>
void MyList<T>::removeElement()
{
    int i = this->currentSize--;
    if (i >= 0) {
        this->arr[i] = NULL;
    }
}

template<class T>
MyList<T>& MyList<T>::operator=(const MyList& rhs)
{
    if (this != &rhs) {
        if (this->arr) {
            delete[] this->arr;
            this->arr = nullptr;
        }
        deepCopy<T>(this->arr, rhs.arr);
        this->maxSize = rhs.maxSize;
        this->currentSize = rhs.currentSize;
    }
    return *this;
}

template<class T>
T& MyList<T>::operator[](int i)
{
    if (i >= 0 && i <= this->currentSize) {
        return this->arr[i];
    }
    return this->arr[0];
}
