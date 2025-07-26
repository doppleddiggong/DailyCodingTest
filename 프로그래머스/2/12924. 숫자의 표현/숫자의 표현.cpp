#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;

    for (int i = n-1; i >= 1; i--)
    {
        int target = i;
        for (int j = i - 1; j >= 1; j--)
        {
            target += j;

            if (target == n)
            {
                answer++;
                break;
            }
            else if (target > n)
            {
                break;
            }
        }
    }

    return answer;
}