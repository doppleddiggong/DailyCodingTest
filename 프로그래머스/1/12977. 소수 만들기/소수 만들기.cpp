#include <vector>
#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

std::vector<bool> map;

void GenerateMap()
{
    int num = 3000;
    map.resize(num+1);

    std::fill(map.begin(), map.end(), true);

    for (int i = 2; i <= num; i++)
    {
        if (!map[i])
            continue;

        for (int j = i * i; j <= num; j += i)
            map[j] = false;
    }
}


int solution(vector<int> nums) {
    GenerateMap();

    int answer = 0;

    for (int x = 0; x < nums.size(); x++)
    {
        for (int y = x + 1; y < nums.size(); y++)
        {
            for (int z = y + 1; z < nums.size(); z++)
            {
                int target = nums[x] + nums[y] + nums[z];

                if (map[target])
                    answer++;
            }
        }
    }

    return answer;
}