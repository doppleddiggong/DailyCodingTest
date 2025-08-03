#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> gen, vector<int> plays) {
    std::unordered_map< string, std::vector< std::pair<int, int>> > map;
    std::unordered_map< string, int> acc_play;
    for (int i = 0; i < gen.size(); i++)
    {
        map[ gen[i] ].emplace_back(i, plays[i]);
        acc_play[gen[i]] += plays[i];
    }

    std::vector<std::pair<string, int>> order(acc_play.begin(), acc_play.end());
    std::sort( order.begin(), order.end(), 
        [](std::pair<string, int> a, std::pair<string, int> b) { 
            return a.second > b.second;
        });

    vector<int> answer;

    for (auto k : order)
    {
        auto v_list = map[k.first];

        std::sort(v_list.begin(), v_list.end(), 
            []( std::pair<int, int> a, std::pair<int, int> b) {
                if (a.second == b.second)
                    return a.first < b.first;
                return a.second > b.second;
            });

        int min_v = 2;
        min_v = min(min_v, (int)v_list.size());

        for (int i = 0; i < min_v; i++)
        {
            answer.push_back(v_list[i].first);
        }
    }

    return answer;
}