#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int similar(string begin, string target)
{
    int ret = 0;
    for (int i = 0; i < begin.size(); i++)
    {
        if (begin[i] == target[i])
            ret++;
    }

    return ret;
}


int GetWords(string start, string target, vector<string> list, int count)
{
    vector<string> ret;

    for (auto c : list)
    {
        int similar_count = similar(start, c);

        // 한글자 차이난것만 찾는다
        if(similar_count  == start.length() - 1)
            ret.push_back(c);
    }

    vector<string> ret2(list);
    for (auto f : ret)
    {
        auto it = std::find(ret2.begin(), ret2.end(), f);
        ret2.erase(it);
    }

    for( auto n_start : ret)
    {
        if (n_start == target)
            return count+1;
        else
        {
            int res = GetWords(n_start, target, ret2, count + 1);
            if (res != 0)
                return res;
        }
    }

    return 0;
}

int solution(string begin, string target, vector<string> words) {

    if (std::find(words.begin(), words.end(), target) == words.end())
        return 0;

    int count = GetWords(begin, target, words, 0);
    return count;
}