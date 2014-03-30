#include <iostream>
#include "btree.h"

using namespace std;

int main()
{
    BTreeNode<const char*> *root = new BTreeNode<const char*>("root");
    root->leftChild = new BTreeNode<const char*>("left");
    root->rightChild = new BTreeNode<const char*>("right");
    BTree<const char*> *btree = new BTree<const char*>(*root);

    cout << "InOrder: "; btree->inOrder(); cout << endl;
    cout << "PreOrder: "; btree->preOrder(); cout << endl;
    cout << "PostOrder: "; btree->postOrder(); cout << endl;
}
