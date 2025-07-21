#include <string>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    std::map<int, int> work_map;
    for (int i = 0 ; i < progresses.size(); i++)
        work_map[i] = ceil((100.0 - progresses[i]) / speeds[i]);

    std::vector<int> answer;
    while (work_map.size() > 0)
    {
        auto kv_first = work_map.begin();

        int complete_day = kv_first->second;
        work_map.erase(kv_first);

        vector<int> remove_work;

        for (auto kv : work_map)
        {
            if (complete_day >= kv.second)
            {
                remove_work.push_back(kv.first);
            }
            else
            {
                break;
            }
        }

        for (auto v : remove_work)
            work_map.erase(v);

        answer.push_back(1 + remove_work.size());
    }

    return answer;
}