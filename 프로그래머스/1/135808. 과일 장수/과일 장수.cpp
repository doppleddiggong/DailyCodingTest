#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {

    std::sort(score.begin(), score.end(), std::greater<int>());

    std::vector<int> box;
    int answer = 0;

    for (int i = 0; i <  score.size(); i++ )
    {
        box.push_back(score[i]);

        if (box.size() == m)
        {
            auto min = *min_element(box.begin(), box.end());
            answer += (min * box.size());

            // 다음 상자
            box.clear();
        }
    }

    return answer;
}