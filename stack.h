#ifndef stack_
#define stack_

#include <iostream>
#include "node.h"
#include "exceptions.h"

template <class T>
class stack
{
    public:
        stack(int initialCapacity = 10)
        { stackTop = NULL; stackSize = 0; };
        stack(const stack<T>&);
        ~stack();

        bool empty() const { return stackSize == 0; }
        int size() const { return stackSize; }
        T& top() const;
        void pop();
        void push(const T& theElement);
        void output(std::ostream& out) const;

    protected:
        chainNode<T>* stackTop;
        int stackSize;
};

template <class T>
stack<T>::~stack() {}

template <class T>
void stack<T>::push(const T& theElement)
{
    chainNode<T>* newNode = new chainNode<T>(theElement);
    if (this->stackTop) newNode->next = this->stackTop;
    this->stackTop = newNode;
    this->stackSize++;
}

template <class T>
T& stack<T>::top() const
{
    if (!this->stackTop)
    {
        throw illegalParameterValue("stack empty");
    }
    return this->stackTop->element;
}

template <class T>
void stack<T>::pop()
{
    if (!this->stackTop)
    {
        throw illegalParameterValue("stack empty");
    }
    this->stackSize--;
    this->stackTop = this->stackTop->next;
}

#endif
