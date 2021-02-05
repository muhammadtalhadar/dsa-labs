#pragma once

template<typename T>
struct BinaryNode{
  T data;
  BinaryNode* rnode;
  BinaryNode* lnode;

  BinaryNode(T data=T(), BinaryNode* lnode=nullptr, BinaryNode* rnode=nullptr);
};
