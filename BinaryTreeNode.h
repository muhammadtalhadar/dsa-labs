// TODO: separate BinaryTreeNode declaration and implementation into .cpp and .h files

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
