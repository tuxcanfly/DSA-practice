#include <iostream>
#include <stack>

int main() {
    std::string input;
    std::stack<char> s;
    int i;
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
            s.pop();
        }
    }
    if (s.empty())
    {
        std::cout << "matched" << std::endl;
    }
    else
    {
        std::cout << "unmatched" << std::endl;
    }
}
