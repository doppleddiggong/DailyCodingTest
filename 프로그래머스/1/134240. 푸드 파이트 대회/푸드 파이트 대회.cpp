#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    vector<int> calc;

    for (int i = 1; i < food.size(); i++)
    {
        for (int v = 0; v < food[i] / 2; v++)
        {
            calc.push_back(i);
        }
    }

    string answer;
    for (auto it = calc.begin(); it != calc.end(); ++it)
        answer += std::to_string((*it));

    answer += "0";

    for (auto it = calc.rbegin(); it != calc.rend(); ++it)
        answer += std::to_string((*it));

    return answer;
}