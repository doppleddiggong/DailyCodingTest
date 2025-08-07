#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    std::sort(sides.begin(), sides.end(), std::greater<int>());
    return (sides[0] >= sides[1] + sides[2]) ? 2 : 1;
}