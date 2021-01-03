//
// Created by talha on 3/1/21.
//
#pragma once
template<class T>
struct BinaryTreeNode{
    T data;
    BinaryTreeNode<T>* lnode;
    BinaryTreeNode<T>* rnode;

public:
    explicit BinaryTreeNode(T data=T(), BinaryTreeNode<T> *lnode= nullptr, BinaryTreeNode<T> *rnode= nullptr);
};

template<class T>
BinaryTreeNode<T>::BinaryTreeNode(T data, BinaryTreeNode<T> *lnode, BinaryTreeNode<T> *rnode):data(data), lnode(lnode),
                                                                                              rnode(rnode) {}
