#include <iostream>

using namespace std;

int main ()
{
    int a;
    while (true) {
        cin >> a;
        if (a == 42) break;
        else {
            cout << a << endl;
        }
    }
}
