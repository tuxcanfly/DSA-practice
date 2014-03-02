#include <iostream>
#include "linkedlist.h"
#include "exceptions.h"

template <class T>
chain<T>::chain(int initialCapacity)
{
    if (initialCapacity < 1)
    {
        throw illegalParameterValue("initialCapacity cannot be less than 1");
    }
    firstNode = NULL;
}
