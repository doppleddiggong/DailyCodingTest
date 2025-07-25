#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::vector<bool> prime_map;

void GenerateMap(int n)
{
    prime_map.assign(n + 1, true);

    for (int i = 2; i <= n; i++)
        prime_map[i] = true;

    for (int i = 2; i * i <= n; i++)
    {
        if (!prime_map[i]) 
            continue;

        for (int j = i * i; j <= n; j += i)
            prime_map[j] = false;
    }
}

int solution(int n) {
    if (n == 2) 
        return 1;

    GenerateMap(n);

    int answer = 0;
    for(int i = 2; i < n; i++)
    {
        if (prime_map[i])
            answer++;
    }

    return answer;
}