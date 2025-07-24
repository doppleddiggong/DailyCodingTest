#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int solution(int a, int b, int c) {
    if (a != b && b != c && a != c)
    {
        return a + b + c;
    }
    else if( a == b && b == c )
    {
        auto first = a + b + c;
        auto second = pow(a, 2) + pow(b, 2) + pow(c, 2);
        auto third = pow(a, 3) + pow(b, 3) + pow(c, 3);

        return first * second * third;
    }
    else
    {
        auto first = a + b + c;
        auto second = pow(a, 2) + pow(b, 2) + pow(c, 2);
        return first * second;
    }

    return 0;
}