//
// Created by talha on 11/1/21.
//

#include "Stack.h"

template<class T>
void Stack<T>::push(T data) {
    Node<T>* temp=this->head;

    if(temp==nullptr){
        this->head=new Node<T>;
        this->head->data=data;
    }
    else{
        while(temp->next!=nullptr){
            temp=temp->next;
        }

        temp->next=new Node<T>;
        temp->next->data=data;
    }
}

template<class T>
T Stack<T>::pop() {
    Node<T>* temp=this->head;
    Node<T>* prev=temp;
    T tempData;

    if(this->head->next==nullptr){
        tempData=this->head->data;
        delete this->head;
        this->head=nullptr;
    }
    else{
        while(temp->next){
            prev=temp;
            temp=temp->next;
        }

        tempData=temp->data;
        delete temp;
        prev->next=nullptr;
    }
    return tempData;
}

template<class T>
bool Stack<T>::empty() const {
    if(this->head==nullptr){
        return true;
    }
    return false;
}

template<class T>
Stack<T>::Stack() {
    this->head=nullptr;
}

template<class T>
T Stack<T>::top() const {
    Node<T>* temp=this->head;
    T tempData=T();

    if(temp==nullptr){
        return tempData;
    }
    else{
        while(temp->next){
            temp=temp->next;
        }
        tempData=temp->data;
        return tempData;
    }
}

template<class T>
void Stack<T>::print() const{
    Node<T>* temp=this->head;

    if(temp!=nullptr){
        while(temp->next!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    else{
        cout<<"EMPTY!";
    }
}

template<class T>
Stack<T>::~Stack() {
    if(!this->empty()){
        Node<T>* toDelete=this->head;
        Node<T>* temp=toDelete;

        if(toDelete->next== nullptr){
            delete this->head;
            this->head=nullptr;
        }
        else{
            while(toDelete->next){
                temp=toDelete->next;

                delete toDelete;

                toDelete=temp;
            }
        }

    }
}
