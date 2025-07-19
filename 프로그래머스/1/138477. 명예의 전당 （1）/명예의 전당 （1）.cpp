#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> record;

    for (const auto& day_s : score)
    {
        if (record.size() < k)
            record.push_back(day_s);
        else
        {
            if (day_s > record[k-1])
                record[k-1] = day_s;
        }

        std::sort(record.begin(), record.end(), std::greater<int>());
        answer.push_back( record.back() );
    }
    return answer;
}