#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;

    std::unordered_map<string, int> origin_map;

    for (int i = 0; i < want.size(); i++)
        origin_map[want[i]] = number[i];

    for (int start = 0; start <= discount.size() - 10; start++)
    {
        std::unordered_map<string, int> copy_map(origin_map);

        for (int i = start; i < start+10; i++)
        {
            if (copy_map.find(discount[i]) != copy_map.end())
            {
                copy_map[discount[i]]--;
            }
        }

        int sum = std::count_if(copy_map.begin(), copy_map.end(), 
            [](auto kv) { return kv.second; });

        if (sum == 0)
            answer++;
    }

    return answer;
}