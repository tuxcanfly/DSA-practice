#include <iostream>
#include "linkedlist.h"
#include "exceptions.h"

using namespace std;

int main()
{
    chain<int> l;
    l.insert(0, 100);
    l.insert(0, 200);
    cout << l.get(0) << endl;
    cout << l.get(1) << endl;
    cout << l.size() << endl;
}
