#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::vector<string> w{ "aya", "ye", "woo", "ma" };
std::vector<string> ng{ "ayaaya", "yeye", "woowoo", "mama" };
int solution(vector<string> babbling) {

    int answer = 0;
    for (auto& v : babbling)
    {
        bool blocked = false;

        for (auto& s : ng)
        {
            if (v.find(s) != std::string::npos)
            {
                blocked = true;
                break;
            }
        }

        if (blocked)
        {
            v = "ZZZ";
            continue;
        }

        for (auto& s : w)
        {
            size_t pos = 0;
            while ((pos = v.find(s)) != std::string::npos)
                v.replace(pos, s.length(), "_");
        }
    }

    for (auto& v : babbling)
    {
        bool alpha = false;
        if (v == "ZZZ")
        {
            alpha = true;
        }
        else
        {
            for (auto c : v)
            {
                if ('a' <= c && c < 'z')
                {
                    alpha = true;
                    break;
                }
            }
        }

        if (!alpha)
            answer++;
    }

    return answer;
}