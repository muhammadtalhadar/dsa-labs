// TODO: separate BinaryTree declaration and implementation into .cpp and .h files
#pragma once

#include "BinaryTreeNode.h"

template<class T>
int largest(const int a, const int b);


template<class T>
class BinaryTree {
protected:
    BinaryTreeNode<T> *root;
private:

    int binaryTreeHeight(BinaryTreeNode<T> *node)const;

    void inorder(BinaryTreeNode<T> *ptr);

    void preorder(BinaryTreeNode<T> *ptr);

    void postorder(BinaryTreeNode<T> *ptr);

    void insertData(BinaryTreeNode<T> *&node, T data);

    bool searchData(BinaryTreeNode<T>* node,T data)const;

    int leafNodeCount(BinaryTreeNode<T>* node)const;
public:

    explicit BinaryTree(BinaryTreeNode<T> *root = nullptr);

    void insert(T data);

    void print_inorder();

    void print_preorder();

    void print_postorder();

    bool search(T data)const;

    int height()const;

      int leafNodeTotalCount()const;
};