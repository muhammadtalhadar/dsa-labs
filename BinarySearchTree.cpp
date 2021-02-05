#include "BinarySearchTree.h"
#include "BinaryNode.h"

template<typename T>
BinarySearchTree<T>::BinarySearchTree(){
  this->root=nullptr;
}

// template<typename T>
// void BinarySearchTree<T>::insert(T data){
//   if(!root){
//     this->root=new BinaryNode<T>(data);
//   }
//   else{
//     BinaryNode<T>* leaf=this->root;
//     BinaryNode<T>* prevleaf=nullptr;

//     while(leaf){

//       //duplication case
//       if(leaf->data==data) return;
      
//       prevleaf=leaf;
//       if(data<leaf->data){
// 	leaf=leaf->lnode;
//       }
//       else{
// 	leaf=leaf->rnode;
//       }
//     }

//     if(data<prevleaf->data){
//       prevleaf->lnode=leaf=new BinaryNode<T>(data);
//     }
//     else{
//       prevleaf->rnode=leaf=new BinaryNode<T>(data);
//     }
//   }
// }


template<class T>
void BinarySearchTree<T>::insert(BinaryNode<T> *& root, T data){
  // case if tree is empty
  if(root==nullptr){
    root=new BinaryNode<T>(data);
  }
  else{
    if(data<root->data){
      insert(root->lnode,data);
    }
    else {
      insert(root->rnode,data);
    }
  }
  
  return;
}

template <typename T>
void BinarySearchTree<T>::inorder(BinaryNode<T> *root)const{
  if (root==nullptr) return;
  
  inorder(root->lnode);
  std::cout << root->data << " ";
  inorder(root->rnode);
}
