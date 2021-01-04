#include "BinaryTreeNode.h"

template<class T>
BinaryTreeNode<T>::BinaryTreeNode(T data, BinaryTreeNode<T> *lnode, BinaryTreeNode<T> *rnode):data(data), lnode(lnode),
                                                                                              rnode(rnode) {}
