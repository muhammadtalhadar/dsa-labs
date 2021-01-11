#include <iostream>
#include "BinaryTree.h"
#include "BinaryTreeLinker.h"

int main() {
    BinaryTree<int> bst;

    int nums[]={15,10,8,12,20,16,25,-1};
int a;
    for(int i=0; nums[i]!=-1;i++){
        bst.insert(nums[i]);
    }

    cout<<"K Largest: "<<bst.klargest(2)<<endl;
    cout<<"K Smallest: "<<bst.ksmallest(2)<<endl;

    bst.validateBSTRange(9,12);
    cout<<"BST after validating with range [9,12]: ";
    bst.inorder();
    return 0;
}
