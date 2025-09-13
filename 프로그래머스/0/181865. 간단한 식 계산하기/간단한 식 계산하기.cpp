#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    string f, d, b;
    bool front = false;
    int ret = 0;
    for (auto c : binomial)
    {
        if ('0' <= c && c <= '9')
        {
            if (front == false)
            {
                f += c;
            }
            else
            {
                b += c;
            }
        }
        else if (c == '+' || c == '-' || c == '*' )
        {
            front = true;
            d += c;
        }
    }

    if (d == "+")
    {
        return std::stoll(f) + std::stoll(b);
    }
    else if (d == "-")
    {
        return std::stoll(f) - std::stoll(b);
    }
    else if (d == "*")
    {
        return std::stoll(f) * std::stoll(b);
    }

    return  0;
}