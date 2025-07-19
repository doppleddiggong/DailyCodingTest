#include <string>
#include <unordered_map>
#include <tuple>
#include <set>

using namespace std;

int solution(string dirs)
{
    std::unordered_map<char, std::pair<int, int>> DIRECTION
    {
        { 'L', std::make_pair(-1, 0)},
        { 'R', std::make_pair(1, 0)},
        { 'U', std::make_pair(0, 1)},
        { 'D', std::make_pair(0, -1)},
    };

    std::set<std::tuple<int, int, int, int>> record;
    std::pair<int, int> cur(0, 0);

    auto get_next_pos = [&](const char& dir) {
        return std::make_pair(
            cur.first + DIRECTION[dir].first,
            cur.second + DIRECTION[dir].second );
    };

    auto dist = [&](const int& x, const int& y) {
        return x - 5 + y - 5;
    };

    for (const auto& dir : dirs)
    {
        auto next = get_next_pos(dir);

        if (-5 <= next.first && next.first <= 5 &&
            -5 <= next.second && next.second <= 5)
        {

            int cur_dist = dist(cur.first, cur.second);
            int next_dist = dist(next.first, next.second);

            if (cur_dist < next_dist)
            {
                record.insert(std::make_tuple(
                    cur.first, cur.second,
                    next.first, next.second));
            }
            else
            {
                record.insert(std::make_tuple(
                    next.first, next.second,
                    cur.first, cur.second));
            }

            cur = next;
        }
    }

    return record.size();
}