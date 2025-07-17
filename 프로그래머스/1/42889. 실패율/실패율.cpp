#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages)
{
    // 스테이지, 스테이지 체류자
    std::map<int, int> on_stage;
    // 스테이지, 스테이지 통과자
    std::unordered_map<int, int> pass_stage;
    // 스테이지, 실패율
    std::unordered_map<int, float> rate;

    for (const auto& stage : stages)
        on_stage[stage]++;

    int user_count = (int)stages.size();
    for (const auto& stage : on_stage)
    {
        pass_stage[stage.first] = user_count;
        user_count -= stage.second;
    }

    for (int i = 1; i <= N; i++)
    {
        auto _on_stage = on_stage[i];
        auto _pass_stage = pass_stage[i];

        if( _on_stage == 0 || _pass_stage == 0)
        {
            rate.insert(std::pair<int, float>(i, 0.0f));
            continue;
		}
        else
        {
            float r = (float)_on_stage / _pass_stage;
            rate.insert(std::pair<int, float>(i, r));
        }
    }

    vector<std::pair<int, float>> map_sort(rate.begin(), rate.end());
	std::sort(map_sort.begin(), map_sort.end(), [](const auto& a, const auto& b) {
		return a.second > b.second || (a.second == b.second && a.first < b.first);
    });

    vector<int> answer;
    for( const auto& pair : map_sort)
        answer.push_back(pair.first);

    return answer;
}