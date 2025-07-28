#include <string>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> ret(num_list);
    std::reverse(ret.begin(), ret.end());
    return ret;
}