#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int solution(vector<int> num_list) {
    int sum = std::accumulate(num_list.begin(), num_list.end(), 0);
    int mul = std::accumulate(num_list.begin(), num_list.end(), 1, std::multiplies<int>());

    if(sum * sum > mul)
        return 1;
    else
       return 0;
}