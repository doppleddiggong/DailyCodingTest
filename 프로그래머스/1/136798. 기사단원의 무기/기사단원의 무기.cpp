#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    std::vector<int> divisorCount(number + 1, 0);

    for (int i = 1; i <= number; i++)
        for (int j = i; j <= number; j += i)
            divisorCount[j]++;

    for (int i = 1; i <= number; i++)
    {
        auto gdc = divisorCount[i];

        if (gdc > limit)
            gdc = power;

        answer += gdc;
    }
    
    return answer;
}