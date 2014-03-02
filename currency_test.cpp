#include <iostream>
#include "currency.h"
#include "exceptions.h"

using namespace std;

int main()
{
    currency g, h(currency::plus, 3, 50), i, j;

    g.setValue(currency::minus, 2, 25);
    i.setValue(-6.45);

    j = h + g;
    cout << h << " + " << g << " = " << j << endl;

    j = i + g + h;
    cout << i << " + " << g << " + "
        << h << " = " << j << endl;

    cout << "Increment " << i << " by " << g
        << " and then add " << h << endl;
    j = (i += g) + h;
    cout << "Result is " << j << endl;

    cout << "Attempting to initialize with 152 cents" << endl;
    try {
        i.setValue(currency::plus, 3, 152);
    }
    catch (illegalParameterValue e) {
        cout << "Caught illegalParameterValue exception" << endl;
        e.outputMessage();
    }
    return 0;
}
