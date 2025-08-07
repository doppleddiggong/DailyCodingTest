#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end(), std::greater<int>() );  
    return numbers[0] * numbers[1];

}