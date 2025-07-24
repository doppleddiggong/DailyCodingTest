#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer(num_list.begin(), num_list.end());

    auto it = num_list.end();

    --it;
    auto last = *it;

    --it;
    auto last_prev = *it;

    if (last > last_prev)
        answer.push_back(last - last_prev);
    else
        answer.push_back(last*2);

    return answer;
}