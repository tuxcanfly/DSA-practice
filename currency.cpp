#include <iostream>
#include "currency.h"
#include "exceptions.h"

using namespace std;

currency::currency(signType theSign,
        unsigned long theDollars,
        unsigned int theCents)
{
    setValue(theSign, theDollars, theCents);
}

void currency::setValue(signType theSign,
        unsigned long theDollars,
        unsigned int theCents)
{
    if (theCents > 99) {
        throw illegalParameterValue("Cents should be < 100");
    }

    sign = theSign;
    dollars = theDollars;
    cents = theCents;
}

void currency::setValue(double theAmount)
{
    if (theAmount < 0) {
        sign = minus;
        theAmount = -theAmount;
    }
    else {
        sign = plus;
    }
    dollars = (unsigned long) theAmount;
    cents = (unsigned int) ((theAmount + 0.001 - dollars) * 100);
}

currency currency::add(const currency& x) const
{
    long a1, a2, a3;
    currency result;
    a1 = dollars * 100 + cents;
    if (sign == minus) a1 = -a1;
    a2 = x.dollars * 100 + x.cents;
    if (x.sign == minus) a2 = -a2;
    a3 = a1+a2;
    if (a3 < 0) { result.sign = minus; a3 = -a3; }
    else result.sign = plus;
    result.dollars = a3/100;
    result.cents = a3 - result.dollars * 100;
    return result;
}

currency currency::operator+(const currency& x) const
{
    currency result = this->add(x);
    return result;
}

currency& currency::increment(const currency& x)
{
    *this = add(x);
    return *this;
}

currency& currency::operator+=(const currency& x)
{
    this->increment(x);
    return *this;
}

ostream& operator<<(ostream& out, const currency& x)
{
    if (x.getSign() == 1) {
        out << "-";
    }
    out << "$" << x.getDollars() << "." << x.getCents();
    return out;
}

void currency::output() const
{
    if (sign == minus) cout << "-";
    cout << "$" << dollars << ".";
    if (cents < 10) cout << "0";
    cout << cents;
}

void currency::output(ostream& out) const
{
    if (sign == minus) out << "-";
    out << "$" << dollars << ".";
    if (cents < 10) out << "0";
    out << cents;
}
