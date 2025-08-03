#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (auto cmd : commands)
    {
        auto array_begin = array.begin();
        array_begin += (cmd[0] - 1);

        auto array_end = array.begin();
        array_end += cmd[1];

        std::vector<int> queue(array_begin, array_end);
        std::sort(queue.begin(), queue.end());

        answer.push_back(queue[(cmd[2] - 1)]);
    }

    return answer;
}