#ifndef exceptions_
#define exceptions_

#include <iostream>

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
