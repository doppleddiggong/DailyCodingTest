#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

using namespace std;

std::unordered_set<string> combinations(const std::string& input, int r)
{
    std::unordered_set<string> map;
    if (input.length() < r)
        return map;

    std::vector<bool> select(input.size(), false);
    std::fill(select.end() - r, select.end(), true);

    {
        std::string result;
        for (int i = 0; i < input.size(); i++)
        {
            if (select[i])
            {
                result += input[i];
            }
        }

        map.insert(result);
    }

    while (std::next_permutation(select.begin(), select.end()))
    {
        std::string result;

        for (int i = 0; i < input.size(); i++)
        {
            if (select[i])
            {
                result += input[i];
            }
        }

        map.insert(result);
    }

    return map;
}

vector<string> solution(vector<string> orders, vector<int> course) {
    std::sort(orders.begin(), orders.end());

    std::vector<std::string> answer;

    for (auto value : course)
    {
        std::unordered_map<string, int> map;

        int max_call = 2;
        for (auto combo : orders)
        {
            std::sort(combo.begin(), combo.end());

            auto combination = combinations(combo, value);
            for (auto c : combination)
            {
                map[c]++;
                max_call = std::max(max_call, map[c]);
            }
        }

        for (auto kv : map)
        {
            if (kv.second >= max_call)
            {
                answer.push_back(kv.first);
            }
        }
    }

    std::sort(answer.begin(), answer.end());
    return answer;
}