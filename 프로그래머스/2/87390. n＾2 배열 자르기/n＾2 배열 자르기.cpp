#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    answer.reserve(right - left + 1);
    for (long long pos = left; pos <= right; pos++)
    {
         int x = pos % n;
         int y = pos / n;

         int value = std::max(x, y) + 1;

         answer.push_back(value);
    }
    
    return answer;
}