#include <string>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;

double solution(vector<int> numbers) {
    double sum = 0;
    for (auto c : numbers)
        sum += c;
    return sum / numbers.size();

}