#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int empty = n;
    int answer = 0;

    while (empty >= a)
    {
        int coke = (empty / a);
        empty -= (coke * a);

        answer += (coke * b);
        empty += (coke * b);
    }

    return answer;
}