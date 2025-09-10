#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    if( direction == "right")
        std::rotate(numbers.rbegin(), numbers.rbegin() + 1, numbers.rend());
    else
        std::rotate(numbers.begin(), numbers.begin() + 1, numbers.end());
    return numbers;
}