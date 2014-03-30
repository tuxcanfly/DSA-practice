#ifndef btree_
#define btree_

#include <iostream>
#include "node.h"

template <class T>
class BTree
{
    public:
        BTree();
        BTree(const T& theElement);
        BTree(BTreeNode<T>& root);
        BTree(const BTree<T>&);
        ~BTree();

        void visit(const BTreeNode<T> *node) const;
        void preOrder() const;
        void preOrder(const BTreeNode<T> *node) const;
        void inOrder() const;
        void inOrder(const BTreeNode<T> *node) const;
        void postOrder() const;
        void postOrder(const BTreeNode<T> *node) const;

    private:
        BTreeNode<T>* root;
};

template <class T>
BTree<T>::BTree(const T& theElement)
{
    this->root = new BTreeNode<T>(theElement);
}

template <class T>
BTree<T>::BTree(BTreeNode<T>& root)
{
    this->root = &root;
}

template <class T>
BTree<T>::~BTree() {}

template <class T>
void BTree<T>::visit(const BTreeNode<T> *node) const
{
    std::cout << node->element << ", ";
}

template <class T>
void BTree<T>::preOrder() const
{
    preOrder(this->root);
}

template <class T>
void BTree<T>::preOrder(const BTreeNode<T> *node) const
{
    if (node != NULL)
    {
        visit(node);
        preOrder(node->leftChild);
        preOrder(node->rightChild);
    }
}
template <class T>
void BTree<T>::inOrder() const
{
    inOrder(this->root);
}

template <class T>
void BTree<T>::inOrder(const BTreeNode<T> *node) const
{
    if (node != NULL)
    {
        inOrder(node->leftChild);
        visit(node);
        inOrder(node->rightChild);
    }
}

template <class T>
void BTree<T>::postOrder() const
{
    postOrder(this->root);
}

template <class T>
void BTree<T>::postOrder(const BTreeNode<T> *node) const
{
    if (node != NULL)
    {
        postOrder(node->leftChild);
        postOrder(node->rightChild);
        visit(node);
    }
}
#endif
