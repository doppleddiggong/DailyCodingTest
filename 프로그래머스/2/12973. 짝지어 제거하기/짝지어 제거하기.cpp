#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution(string s)
{
    std::stack<char> stack;
    for (auto c : s)
    {
        if (stack.empty())
            stack.push(c);
        else
        {
            if (c == stack.top())
                stack.pop();
            else
                stack.push(c);
        }
    }

    if (stack.empty())
        return 1;
    else
        return 0;
}