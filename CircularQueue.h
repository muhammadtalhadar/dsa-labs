//
// Created by talha on 5/2/21.
//

#pragma once

template<class T>
class CircularQueue {
    T list;
    int front;
    int rear;
    int size;
public:
    explicit CircularQueue(int size);
    ~CircularQueue();

    void enqueue(T key);
    void dequeue(T key);
};
