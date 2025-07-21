#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    auto p_num = std::stoll(p);

    int length = t.size() - p.size();
    for (int i = 0; i <= length; i++)
    {
        string s = t.substr(i, p.size());
        auto s_num = std::stoll(s.c_str());

        if (s_num <= p_num)
            answer++;
    }

    return answer;
}