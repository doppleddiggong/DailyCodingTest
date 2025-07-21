#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    std::vector<int> answer;
    for(auto v : arr)
    {
        if (answer.size() == 0)
        {
            answer.push_back(v);
        }
        else
        {
            if (v != answer[answer.size() - 1])
                answer.push_back(v);
        }
    }

    return answer;
}
