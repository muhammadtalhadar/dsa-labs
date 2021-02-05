#include"LLNode.h"

template<class T>
LLNode<T>::LLNode(T data, LLNode *next):data(data), next(next) {}

template<class T>
ostream &operator<<(ostream &os, const LLNode<T> &node) {
    os << "("<<node.data<<")";
    return os;
}

//
//template<class T>
//ostream &operator<<(ostream &os, const LLNode<T> &node) {
//
//    return os;
//}
//
