//
// Created by talha on 5/2/21.
//

#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList(){
    this->head=nullptr;
    this->tail= nullptr;
}

template<class T>
LinkedList<T>::~LinkedList() {
    // do stuff
}

template<class T>
void LinkedList<T>::_insert(LLNode<T> *&node, T key) {
    // base case
    if(node==nullptr){
        node=new LLNode<T>(key);
    }
    //general case
    else{
        _insert(node->next, key);
    }
}

template<class T>
void LinkedList<T>::_delete(LLNode<T> *&node, T key) {
    if(node->data==key){
        LLNode<T>* temp=node->next;
        delete[] node;
        node=temp;
    }
    else{
        _delete(node->next, key);
    }
}

template<class T>
void LinkedList<T>::_print(LLNode<T> *node) const {
    if(node!=nullptr){
        cout<<*node<<" ";
        _print(node->next);
    }
    else{
        cout<<"NULL ";
    }
}

template<class T>
void LinkedList<T>::_reversePrint(LLNode<T> *node) const {
    if(node!=nullptr){
        _reversePrint(node->next);
        cout<<*node<<" ";
    }
    else{
        cout<<"NULL ";
    }
}

template<class T>
void LinkedList<T>::insertKey(T key) {
    _insert(this->head, key);
}

template<class T>
void LinkedList<T>::deleteKey(T key) {
    _delete(this->head, key);
}

template<class T>
void LinkedList<T>::print() const {
    _print(this->head);
}

template<class T>
void LinkedList<T>::reversePrint() const {
    _reversePrint(this->head);
}
