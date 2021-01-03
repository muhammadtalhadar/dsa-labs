//
// Created by talha on 3/1/21.
//

#pragma once

#include "BinaryTreeNode.h"

template<class T>
class BinaryTree {
protected:
    BinaryTreeNode<T> *root;
private:
    int max(int a, int b)const;

    int binaryTreeHeight(BinaryTreeNode<T> *node)const;

    void copyBinaryTree(BinaryTreeNode<T> *&copiedTree, BinaryTreeNode<T> *treeToCopy);

    void inorder(BinaryTreeNode<T> *ptr);

    void preorder(BinaryTreeNode<T> *ptr);

    void postorder(BinaryTreeNode<T> *ptr);

    void insertData(BinaryTreeNode<T> *&node, T data);

    bool searchData(BinaryTreeNode<T>* node,T data)const;

    int leafNodeCount(BinaryTreeNode<T>* node)const;
public:

    int leafNodeTotalCount()const;

    explicit BinaryTree(BinaryTreeNode<T> *root = nullptr);

    void insert(T data);

    void print_inorder();

    void print_preorder();

    void print_postorder();

    bool search(T data)const;

    int height()const;
};

template<class T>
BinaryTree<T>::BinaryTree(BinaryTreeNode<T> *root):root(root) {}

template<class T>
void BinaryTree<T>::insert(T data) {
    insertData(this->root, data);
}

template<class T>
void BinaryTree<T>::print_inorder() {
    inorder(this->root);
}

template<class T>
void BinaryTree<T>::print_preorder() {
    preorder(this->root);
}

template<class T>
void BinaryTree<T>::print_postorder() {
    postorder(this->root);
}

template<class T>
void BinaryTree<T>::insertData(BinaryTreeNode<T> *&node, T data) {

    //base case
    if (node == nullptr) {
        node = new BinaryTreeNode<T>(data);
    }

    //data duplication case
    if (node->data == data) {
        return;
    }

    //general cases
    if (data < node->data) {
        insertData(node->lnode, data);
    } else {
        insertData(node->rnode, data);
    }
}

template<class T>
void BinaryTree<T>::postorder(BinaryTreeNode<T> *ptr) {
    if (ptr) {
        postorder(ptr->lnode);
        postorder(ptr->rnode);
        std::cout << ptr->data << " ";
    }
}

template<class T>
void BinaryTree<T>::preorder(BinaryTreeNode<T> *ptr) {
    if (ptr) {
        std::cout << ptr->data << " ";
        preorder(ptr->lnode);
        preorder(ptr->rnode);
    }
}

template<class T>
void BinaryTree<T>::inorder(BinaryTreeNode<T> *ptr) {
    if (ptr) {
        inorder(ptr->lnode);
        std::cout << ptr->data << " ";
        inorder(ptr->rnode);
    }
}

template<class T>
void BinaryTree<T>::copyBinaryTree(BinaryTreeNode<T> *&copiedTree, BinaryTreeNode<T> *treeToCopy) {
    if (copiedTree == nullptr) {
        treeToCopy = nullptr;
    } else {
        copiedTree = new BinaryTreeNode<T>;
        copiedTree->data = treeToCopy->data;
        copyBinaryTree(copiedTree->lnode, treeToCopy->lnode);
        copyBinaryTree(copiedTree->rnode, treeToCopy->rnode);
    }
}

template<class T>
int BinaryTree<T>::binaryTreeHeight(BinaryTreeNode<T> *node) const{
    if (node == nullptr) {
        return 0;
    } else {
        return 1 + max(binaryTreeHeight(node->lnode), binaryTreeHeight(node->rnode));
    }
}

template<class T>
int BinaryTree<T>::max(const int a, const int b) const{
    if (a >= b) return a;
    return b;
}

template<class T>
bool BinaryTree<T>::search(T data) const {
    return searchData(this->root,data);
}

template<class T>
bool BinaryTree<T>::searchData(BinaryTreeNode<T> *node, T data)const {

    // base case
    if(node == nullptr) return false;

    // positive result case
    if(node->data==data) return true;

    // general case
    if(data<node->data){
        return searchData(node->lnode, data);
    }
    else{
        return searchData(node->rnode, data);
    }
}

template<class T>
int BinaryTree<T>::height() const {
    return binaryTreeHeight(this->root);
}

template<class T>
int BinaryTree<T>::leafNodeTotalCount() const {
    return leafNodeCount(this->root);
}

template<class T>
int BinaryTree<T>::leafNodeCount(BinaryTreeNode<T> *node) const {
    // base case
    if(node==nullptr) return 0;

    // positive result case
    if(node->rnode== nullptr && node->lnode==nullptr){
        return 1;
    }
    //general case
    else{
        return leafNodeCount(node->lnode)+leafNodeCount(node->rnode);
    }
}
