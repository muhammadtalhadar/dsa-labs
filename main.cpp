// CODE IS WRITTEN WITHOUT COMPILING, because of system issues

#include <iostream>
#include"MyList.h"
#include"MyList.cpp"
using namespace std;

template<typename T>
void showList(MyList<T> lst) {
    int j = lst.getCurrentSize();
    for (int i; i < j; i++) {
        cout << lst[i] << endl;
    }
}

int main()
{
    cout << "Hello World!\n";
}
