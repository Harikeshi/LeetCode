#include <Leet/stack.hpp>

#include <stack>
#include <iostream>

namespace stack
{
    bool isValid(std::string s)
    {
        std::stack<int> stack;
        for (auto c : s)
        {
            if (c == '[' || c == '(' || c == '{') stack.push(c);
            else
            {
                if (stack.empty())
                    return false;
                auto check = stack.top();
                if ((c == ']' && check != '[') || (c == ')' && check != '(') || (c == '}' && check != '{'))
                {
                    return false;
                }
                else
                {
                    stack.pop();
                }
            }
        }
        return stack.empty();
    }
}
