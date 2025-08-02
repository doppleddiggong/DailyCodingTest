#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

std::unordered_map<string, int> map
{
    {"A", 1 },
    {"B", 2 },
    {"C", 3 },
    {"D", 4 },
    {"E", 5 },
    {"F", 6 },
    {"G", 7 },
    {"H", 8 },
    {"I", 9 },
    {"J", 10 },
    {"K", 11 },
    {"L", 12 },
    {"M", 13 },
    {"N", 14 },
    {"O", 15 },
    {"P", 16 },
    {"Q", 17 },
    {"R", 18 },
    {"S", 19 },
    {"T", 20 },
    {"U", 21 },
    {"V", 22 },
    {"W", 23 },
    {"X", 24 },
    {"Y", 25 },
    {"Z", 26 },
};

vector<int> solution(string msg) {


    int nextIndex = 27;
    int pos = 0;
    vector<int> answer;

    while (pos < msg.size()) {
        int len = 1;

        // 가능한 가장 긴 문자열을 찾음
        while ( pos + len <= msg.size() && 
            map.find(msg.substr(pos, len)) != map.end())
        {
            len++;
        }

        string found = msg.substr(pos, len - 1);
        answer.push_back(map[found]);

        // 사전에 새 항목 추가
        if (pos + len - 1 < msg.size())
        {
            string next = msg.substr(pos, len);
            map[next] = nextIndex++;
        }

        pos += found.size();
    }

    return answer;
}