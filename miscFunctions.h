#pragma once
using namespace std;

template<typename T>
void deepCopy(T*& dest, const T* src, const int size=0) {
	if (src && size) {

		// create mem
		dest = new T[size];

		// copy contents
		for (int i = 0; i < size; i++) {
			dest[i] = src[i];
		}

	}
}