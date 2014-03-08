#include <iostream>
#include "linkedlist.h"
#include "exceptions.h"

using namespace std;

int main()
{
    chain<int> l;
    l.insert(0, 100);
    l.insert(1, 200);
    cout << l.get(0) << endl;
}
