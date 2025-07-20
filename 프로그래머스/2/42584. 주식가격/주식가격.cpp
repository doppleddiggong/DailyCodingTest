#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> p) {
    vector<int> answer;

    for (int i = 0; i < p.size(); i++)
    {
        int time = 0;
        for (int j = i + 1; j < p.size(); j++)
        {
            time++;
            if (p[i] > p[j])
                break;
        }

        answer.push_back(time);
    }

    return answer;
}