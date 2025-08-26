#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr) {
    long long ans = 1;
    for (int n : arr)
    {
        ans = std::lcm(ans, (long long)n);
    }
    return ans;
}