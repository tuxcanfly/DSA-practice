#ifndef chain_
#define chain_

#include <iostream>
#include "exceptions.h"

template <class T>
struct chainNode
{
    T element;
    chainNode<T> *next;

    chainNode() {}
    chainNode(const T& element)
    {
        this->element = element;
    }
    chainNode(const T& element, chainNode<T>* next)
    {
        this->element = element;
        this->next = next;
    }
};

template <class T>
class chain
{
    public:
        chain(int initialCapacity = 10);
        chain(const chain<T>&);
        ~chain();

        bool empty() const { return listSize == 0; }
        int size() const { return listSize; }
        T& get(int theIndex) const;
        int indexOf(const T& theElement) const;
        void erase(int theIndex);
        void insert(int theIndex, const T& theElement);
        void output(std::ostream& out) const;

    protected:
        void checkIndex(int theIndex) const;
        chainNode<T>& getNode(int theIndex) const;
        chainNode<T>* firstNode;
        int listSize;
};

template <class T>
chain<T>::~chain() {}

template <class T>
chain<T>::chain(int initialCapacity)
{
    if (initialCapacity < 1)
    {
        throw illegalParameterValue("initialCapacity cannot be less than 1");
    }
    this->firstNode = NULL;
    this->listSize = 0;
}

template <class T>
void chain<T>::insert(int theIndex, const T& theElement)
{
    if (theIndex < 0 || theIndex > this->size())
    {
        throw illegalParameterValue("invalid index");
    }
    else if (theIndex == 0)
    {
        chainNode<T>* newNode = new chainNode<T>(theElement);
        newNode->next = this->firstNode;
        this->firstNode = newNode;
        this->listSize++;
    }
}

template <class T>
chainNode<T>& chain<T>::getNode(int theIndex) const
{
    int index = 0;
    chainNode<T>* currentNode = this->firstNode;
    while (currentNode)
    {
        if (index == theIndex)
        {
            return *currentNode;
        }
        currentNode = currentNode->next;
        index++;
    }
}

template <class T>
T& chain<T>::get(int theIndex) const
{
    return this->getNode(theIndex).element;
}

#endif
