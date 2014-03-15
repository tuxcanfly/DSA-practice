#include <iostream>
#include "stack.h"
#include "exceptions.h"

int main() {
    std::string input;
    stack<char> s;
    int i, flag=0;
    std::cout << "Enter string:" << std::endl;
    std::cin >> input;
    for (i=0; i<input.length(); i++)
    {
        if (input[i] == '(')
        {
            s.push('(');
        }
        else if (input[i] == ')')
        {
            try {
                s.pop();
            }
            catch (StackError) {
                flag = 1;
                break;
            }
        }
    }
    if (s.empty() && !flag)
    {
        std::cout << "matched" << std::endl;
    }
    else
    {
        std::cout << "unmatched" << std::endl;
    }
}
