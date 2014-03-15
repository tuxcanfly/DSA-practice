#include <iostream>
#include "stack.h"
#include "exceptions.h"

using namespace std;

int main()
{
    stack<const char*> l;
    l.push("b");
    l.push("a");
    l.push("c");

    while (!l.empty())
    {
        cout << l.top();
        l.pop();
        cout << ",";
    }
    cout << endl;
}
