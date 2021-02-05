#include "BinaryNode.h"

template<typename T>
BinaryNode< T>::BinaryNode(T data, BinaryNode* lnode, BinaryNode* rnode){
  this->data=data;
  this->lnode=lnode;
  this->rnode=rnode;
}
