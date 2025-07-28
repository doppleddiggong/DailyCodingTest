#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (auto v : arr)
    {
        if ( v % divisor == 0 )
        {
            answer.push_back(v);
        }
    }

    if (answer.size() > 0)
    {
        std::sort(answer.begin(), answer.end());
        return answer;
    }
    else
    {
        return { -1 };
    }
}