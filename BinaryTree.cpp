#include <iostream>
#include "BinaryTree.h"


template<class T>
BinaryTree<T>::BinaryTree(BinaryTreeNode<T> *root):root(root) {}

// insert data
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
void BinaryTree<T>::insert(T data) {
    insertData(this->root, data);
}

// preorder
template<class T>
void BinaryTree<T>::preorder(BinaryTreeNode<T> *ptr) {
    if (ptr) {
        std::cout << ptr->data << " ";
        preorder(ptr->lnode);
        preorder(ptr->rnode);
    }
}

template<class T>
void BinaryTree<T>::print_preorder() {
    preorder(this->root);
}

//inorder
template<class T>
void BinaryTree<T>::inorder(BinaryTreeNode<T> *ptr) {
    if (ptr) {
        inorder(ptr->lnode);
        std::cout << ptr->data << " ";
        inorder(ptr->rnode);
    }
}
template<class T>
void BinaryTree<T>::print_inorder() {
    inorder(this->root);
}

// print postorder
template<class T>
void BinaryTree<T>::postorder(BinaryTreeNode<T> *ptr) {
    if (ptr) {
        postorder(ptr->lnode);
        postorder(ptr->rnode);
        std::cout << ptr->data << " ";
    }
}
template<class T>
void BinaryTree<T>::print_postorder() {
    postorder(this->root);
}

//
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

//wrapper method
template<class T>
bool BinaryTree<T>::search(T data) const {
    return searchData(this->root,data);
}

//
template<class T>
int BinaryTree<T>::binaryTreeHeight(BinaryTreeNode<T> *node) const{
    if (node == nullptr) {
        return 0;
    } else {
        return 1+largest<T>(binaryTreeHeight(node->lnode), binaryTreeHeight(node->rnode));
    }
}

//wrapper method
template<class T>
int BinaryTree<T>::height() const {
    return binaryTreeHeight(this->root)-1;
}


// counts leaf nodes in a BST
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

//wrapper method
template<class T>
int BinaryTree<T>::leafNodeTotalCount() const {
    return leafNodeCount(this->root);
}

template<class T>
void BinaryTree<T>::mirror() {
    makeMirror(this->root);
}

template<class T>
void BinaryTree<T>::makeMirror(BinaryTreeNode<T> *& node) {
    if(node){
        BinaryTreeNode<T>* temp;

        makeMirror(node->lnode);
        makeMirror(node->rnode);

        temp=node->lnode;
        node->lnode=node->rnode;
        node->rnode=temp;
    }
    else{
        return;
    }
}

// returns the larger of two integers

template<class T>
int largest(const int a, const int b) {
    if(a>=b) return a;
    return b;
}
