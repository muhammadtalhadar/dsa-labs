#include <iostream>
#include "BinaryTree.h"


template<class T>
BinaryTree<T>::BinaryTree(BinaryTreeNode<T> *root):root(root) {}

// insert data
template<class T>
void BinaryTree<T>::insert_inner(BinaryTreeNode<T> *&node, T data) {

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
        insert_inner(node->lnode, data);
    } else {
        insert_inner(node->rnode, data);
    }
}
template<class T>
void BinaryTree<T>::insert(T data) {
    insert_inner(this->root, data);
}

// preorder_inner
template<class T>
void BinaryTree<T>::preorder_inner(BinaryTreeNode<T> *ptr) {
    if (ptr) {
        std::cout << ptr->data << " ";
        preorder_inner(ptr->lnode);
        preorder_inner(ptr->rnode);
    }
}

template<class T>
void BinaryTree<T>::preorder() {
    preorder_inner(this->root);
}

//inorder_inner
template<class T>
void BinaryTree<T>::inorder_inner(BinaryTreeNode<T> *ptr) {
    if (ptr) {
        inorder_inner(ptr->lnode);
        std::cout << ptr->data << " ";
        inorder_inner(ptr->rnode);
    }
}
template<class T>
void BinaryTree<T>::inorder() {
    inorder_inner(this->root);
}

// print postorder_inner
template<class T>
void BinaryTree<T>::postorder_inner(BinaryTreeNode<T> *ptr) {
    if (ptr) {
        postorder_inner(ptr->lnode);
        postorder_inner(ptr->rnode);
        std::cout << ptr->data << " ";
    }
}
template<class T>
void BinaryTree<T>::postorder() {
    postorder_inner(this->root);
}

//
template<class T>
bool BinaryTree<T>::search_inner(BinaryTreeNode<T> *node, T data)const {

    // base case
    if(node == nullptr) return false;

    // positive result case
    if(node->data==data) return true;

    // general case
    if(data<node->data){
        return search_inner(node->lnode, data);
    }
    else{
        return search_inner(node->rnode, data);
    }
}

//wrapper method
template<class T>
bool BinaryTree<T>::search(T data) const {
    return search_inner(this->root, data);
}

//
template<class T>
int BinaryTree<T>::height_inner(BinaryTreeNode<T> *node) const{
    if (node == nullptr) {
        return 0;
    } else {
        return 1+largest<T>(height_inner(node->lnode), height_inner(node->rnode));
    }
}

//wrapper method
template<class T>
int BinaryTree<T>::height() const {
    return height_inner(this->root) - 1;
}


// counts leaf nodes in a BST
template<class T>
int BinaryTree<T>::leaves_inner(BinaryTreeNode<T> *node) const {
    // base case
    if(node==nullptr) return 0;

    // positive result case
    if(node->rnode== nullptr && node->lnode==nullptr){
        return 1;
    }
        //general case
    else{
        return leaves_inner(node->lnode) + leaves_inner(node->rnode);
    }
}

//wrapper method
template<class T>
int BinaryTree<T>::leaves() const {
    return leaves_inner(this->root);
}

template<class T>
void BinaryTree<T>::mirror() {
    mirror_inner(this->root);
}

template<class T>
void BinaryTree<T>::mirror_inner(BinaryTreeNode<T> *& node) {
    if(node){
        BinaryTreeNode<T>* temp;

        mirror_inner(node->lnode);
        mirror_inner(node->rnode);

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
