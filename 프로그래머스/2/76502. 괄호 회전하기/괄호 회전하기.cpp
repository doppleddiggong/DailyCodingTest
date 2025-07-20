#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

bool checkClose(string s)
{
    std::stack<char> stack;

    for (auto c : s)
    {
        if (c == '(' || c == '[' || c == '{')
            stack.push(c);
        else if (c == ')')
        {
            if (stack.size() > 0 && stack.top() == '(')
                stack.pop();
            else
                stack.push(c);
        }
        else if (c == ']')
        {
            if (stack.size() > 0 && stack.top() == '[')
                stack.pop();
            else
                stack.push(c);
        }
        else if (c == '}')
        {
            if (stack.size() > 0 && stack.top() == '{')
                stack.pop();
            else
                stack.push(c);
        }
    }

    return stack.size() == 0;
}


int solution(string s) {
    int answer = 0;

    for (int i = 0; i < s.length(); i++)
    {
        // 문자열을 회전시킨다
        string tmp(s);
        std::rotate(tmp.begin(), tmp.begin() + i, tmp.end());

        // 문자열이 모두 닫히는지 체크한다
        if (checkClose(tmp))
        {
            answer += 1;
        }
    }

    return answer;
}