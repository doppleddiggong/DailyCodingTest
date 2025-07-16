#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<int> numbers, string hand) {
    std::unordered_map<int, std::pair<int, int>> map{
        { 1, {0, 0} }, { 2, {0, 1} }, { 3, {0, 2} },
        { 4, {1, 0} }, { 5, {1, 1} }, { 6, {1, 2} },
        { 7, {2, 0} }, { 8, {2, 1} }, { 9, {2, 2} }, 
        { -100, {3, 0} }, { 0, {3, 1} }, { 100, {3, 2} }
	};

    auto calc = [&map](const int& start, const int& target) {
        auto s = map[start]; auto e = map[target];
        return abs(s.first - e.first) + abs(s.second - e.second);
    };

    int l_pos = -100, r_pos = 100;

    string answer = "";

    for (const auto& num : numbers)
    {
        if (num == 1 || num == 4 || num == 7)
        {
            answer.append("L");
            l_pos = num;
        }
        else if (num == 3 || num == 6 || num == 9)
        {
            answer.append("R");
            r_pos = num;
        }
        else
        {
            int l_dist = calc(l_pos, num);
            int r_dist = calc(r_pos, num);

            if (l_dist == r_dist)
            {
                if (hand == "left")
                {
                    answer.append("L");
                    l_pos = num;
                }
                else
                {
                    answer.append("R");
                    r_pos = num;
                }
            }
            else if(l_dist < r_dist)
            {
                answer.append("L");
                l_pos = num;
            }
            else
            {
                answer.append("R");
                r_pos = num;
            }
        }
    }

    return answer;
}