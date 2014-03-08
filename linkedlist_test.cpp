#include <iostream>
#include "linkedlist.h"
#include "exceptions.h"

using namespace std;

int main()
{
    chain<int> l;
    l.insert(0, 300);
    l.insert(0, 100);
    l.insert(1, 200);
    cout << l.get(0) << ", " << l.get(1) << ", " << l.get(2) << endl;
}
