#include"List.h"

// defalt parametrized constructor
template<class T>
List<T>::List(const T * _arr, const int _maxSize, const int _currentSize)
{
	if (_arr && _currentSize < _maxSize) {
		deepCopy(arr, _arr, _currentSize);
		maxSize = _maxSize;
		currentSize = _currentSize;
	}
	else {
		arr = nullptr;
		currentSize = 0;
		maxSize = 0;
	}
}

// copy constructor
template<class T>
List<T>::List(const List& rhs)
{
	if (rhs.arr) {
		deepCopy(arr, rhs.arr);
		maxSize = rhs.maxSize;
		currentSize = rhs.currentSize;
	}
	else {
		arr = nullptr;
		currentSize = 0, maxSize = 0;
	}
}


// destructor
template<class T>
List<T>::~List()
{
	if (arr) {
		delete[] arr;
		arr = nullptr;
	}
}


// getters 

template<class T>
T* List<T>::getArr() const
{
	T* temp = nullptr;
	if (arr) {
		deepCopy(temp, arr, currentSize);
	}
	return temp;
}

template<class T>
int List<T>::getMaxSize() const
{
	return maxSize;
}

template<class T>
int List<T>::getCurrentSize() const
{
	return currentSize;
}

// setters

template<class T>
void List<T>::setArr(const T* _arr)
{
	if (_arr) {
		if (arr) {
			delete[] arr;
			arr = nullptr;
		}
		deepCopy(arr, _arr, currentSize);
	}
}

template<class T>
void List<T>::setCurrentSize(const int _currentSize)
{
	if (_currentSize < maxSize) {
		currentSize = _currentSize;
	}
}

template<class T>
void List<T>::setMaxSize(const int _maxSize)
{
	if (_maxSize > currentSize) {
		maxSize = _maxSize;
	}
}
