#include <iostream>
#include "BinarySearchTree.h"
#include "BinarySearchTreeLinker.h"

using namespace std;

int main(){
  BinarySearchTree<int> bst;

  
  bst.insert(bst.root,60);//da root

  bst.insert(bst.root,70);
  bst.insert(bst.root,80);
  bst.insert(bst.root,75);
  bst.insert(bst.root,77);

  bst.insert(bst.root,50);
  bst.insert(bst.root,30);
  bst.insert(bst.root,53);

  bst.insert(bst.root,57);

  bst.insert(bst.root,35);
  bst.insert(bst.root,32);
  bst.insert(bst.root,40);
  bst.insert(bst.root,48);
  bst.insert(bst.root,45);

  bst.inorder(bst.root);
  
    return 0;
}
