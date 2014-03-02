#ifndef currency_
#define currency_

#include <iostream>

class currency
{
    friend std::ostream& operator<<(std::ostream&, const currency&);
    public:
        enum signType {plus, minus};
        currency(signType theSign = plus,
                unsigned long theDollars = 0,
                unsigned int theCents = 0);
        ~currency() {}
        void setValue(signType, unsigned long, unsigned int);
        void setValue(double);
        signType getSign() const { return sign; }
        unsigned long getDollars() const { return dollars; }
        unsigned int getCents() const { return cents; }
        currency add(const currency&) const;
        currency operator+(const currency&) const;
        currency& increment(const currency&);
        currency& operator+=(const currency&);
        void output() const;
        void output(std::ostream&) const;

    private:
        signType sign;
        unsigned long dollars;
        unsigned int cents;
};

class illegalParameterValue
{
    public:
        illegalParameterValue()
            { message = "illegal parameter value"; }
        illegalParameterValue(const char* theMessage)
            { message = theMessage; }
        void outputMessage() { std::cout << message << std::endl; }
    private:
        const char* message;
};
#endif
