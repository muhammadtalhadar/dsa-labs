//
#include <iostream>
#include "BinaryTree.h"
#include "BinaryTreeLinker.h"

using namespace std;

int main() {

    cout << "\nTest file run." << endl;
    BinaryTree<int> bt;
    int nums[] = {60, 70, 80, 75, 77, 50, 53, 57, 30, 35, 40, 48, 45, 32, -1};
    int i = 0;

    while (nums[i] != -1) {
        bt.insert(nums[i]);
        i++;
    }

    cout << "Printing preorder: ";
    bt.preorder();
    cout << endl;

    cout << "Printing inorder: ";
    bt.inorder();
    cout << endl;

    cout << "Printing postorder: ";
    bt.postorder();
    cout << endl;

    cout << "\nSearching... 1 is true, 0 is false." << endl;
    cout << "search(75): " << bt.search(75) << endl;
    cout << "search(40): " << bt.search(40) << endl;
    cout << "search(1001): " << bt.search(1001) << endl;

    cout<<endl;

    cout << "Height: " << bt.height() << endl;

    cout << "Leaf Nodes: " << bt.leaves() << endl;


    cout<<"Min node: "<<bt.min()->data<<endl;

//    bt.mirror();
//    cout<<"Print mirror inorder: ";
//    bt.inorder();

    bt.deletenode(57);
    cout<<"delete 57: "<<endl;
    bt.inorder();

    bt.deletenode(75);
    cout<<"delete 75: "<<endl;
    bt.inorder();

    return 0;
}
