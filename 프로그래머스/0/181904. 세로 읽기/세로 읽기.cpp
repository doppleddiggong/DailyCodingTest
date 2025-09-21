#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string my_string, int m, int c) {
    std::map<int, vector<char>> dataMap;

    int m_c = 0;
    for (auto c : my_string)
    {
        dataMap[m_c++].push_back(c);
        if (m_c >= m)
            m_c = 0;
    }

    string answer;
    for (int i = 0; i < dataMap[c-1].size(); i++)
    {
        answer += dataMap[c-1][i];
    }
    return answer;
}