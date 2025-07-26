#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {

    std::unordered_map<string, std::unordered_set<string>> map;

    for (const auto& report_msg : report)
    {
        auto space_pos = report_msg.find(' ');

        auto reporter = report_msg.substr(0, space_pos);
        auto ban = report_msg.substr(space_pos+1);

        map[ban].insert(reporter);
    }

    std::unordered_map<string, int> mail;

    for (const auto& id : id_list)
    {
        if (map[id].size() >= k)
        {
            for (auto c : map[id])
            {
                mail[c]++;
            }
        }
    }

    vector<int> answer;
    for (const auto& id : id_list)
    {
        answer.push_back(mail[id]);
    }

    return answer;
}