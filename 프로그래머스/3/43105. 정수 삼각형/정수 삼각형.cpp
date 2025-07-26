#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int solution(vector<vector<int>> triangle) {
    vector<vector<int>> map(triangle);

    for (int cur_floor = 0; cur_floor < map.size()-1; cur_floor++)
    {
        for (int room = 0; room < map[cur_floor].size(); room++)
        {
            int value = map[cur_floor][room];

            for (int i = 0; i < 2; i++)
            {
                int target = triangle[cur_floor+1][room + i];
                if (value + target > map[cur_floor+1][room+i] )
                {
                    map[cur_floor+1][room+i] = value + target;
                }
            }
        }
    }

    auto last = map.back();
    auto max = std::max_element(last.begin(), last.end());
    return *max;
}