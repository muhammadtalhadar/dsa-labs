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