#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int solution(vector<vector<int>> triangle) {
    for (int cur_floor = 1; cur_floor < triangle.size(); cur_floor++)
    {
        for (int room = 0; room < triangle[cur_floor].size(); room++)
        {
            int from_left = 0; 
            if (room > 0)
                from_left = triangle[cur_floor - 1][room - 1];

            int from_right = 0; 
            if (room < triangle[cur_floor - 1].size())
                from_right = triangle[cur_floor - 1][room];

            triangle[cur_floor][room] += std::max(from_left, from_right);
        }
    }

    auto max = std::max_element(triangle.back().begin(), triangle.back().end());
    return *max;
}