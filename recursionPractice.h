//
// Created by talha on 3/1/21.
//
#pragma once

template<class T>
T largest(const T *list, int lowerIndex, int upperIndex) {
    T max=T();

    if (lowerIndex == upperIndex) {
        return list[lowerIndex];
    } else {
        max = largest(list, lowerIndex + 1, upperIndex);

        if(list[lowerIndex]>max){
            return list[lowerIndex];
        }
        else{
            return max;
        }
    }
}

int factorial(int N) {
    if(N==0){
        return 1;
    }else{
        return N*factorial(N-1);
    }
}