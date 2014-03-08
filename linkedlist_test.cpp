#include <iostream>
#include "linkedlist.h"
#include "exceptions.h"

using namespace std;

int main()
{
    chain<const char*> l;
    l.insert(0, "b");
    l.insert(0, "a");
    l.insert(1, "c");
    cout << l.get(0) << ", " << l.get(1) << ", " << l.get(2) << endl;
}
