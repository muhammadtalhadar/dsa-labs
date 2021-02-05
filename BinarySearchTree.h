#pragma once
#include <ctime>
#include <iostream>
#include "BinaryNode.h"
#include "BinaryNodeLinker.h"
#include "Node.h"

template<typename T>
struct BinarySearchTree{
  BinaryNode<T>* root;

  BinarySearchTree();
  void insert(BinaryNode<T>*&,T);
  void inorder(BinaryNode<T>*)const;
};
