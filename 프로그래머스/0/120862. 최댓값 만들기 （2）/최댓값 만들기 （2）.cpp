#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    int value1 = numbers[0] * numbers[1];
    int value2 = numbers[numbers.size() - 1] * numbers[numbers.size() - 2];
    return std::max(value1, value2);
}