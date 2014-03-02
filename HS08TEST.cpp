#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int amount;
    double bal;

    cin >> amount >> bal;
    if ((amount % 5 == 0) && (bal >= amount + 0.5)) {
        bal = bal - amount - 0.5;
    }
    cout << setprecision(2) << fixed << bal;
}
