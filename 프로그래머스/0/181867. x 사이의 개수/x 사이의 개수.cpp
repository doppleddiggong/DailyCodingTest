#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string myString) {
    vector<int> ret;
    int sum = 0;

    std::for_each(myString.begin(), myString.end(), [&sum, &ret](char c) {
        if (c == 'x') {
            ret.push_back(sum);
            sum = 0;
        }
        else {
             sum++;
        }
    });

    ret.push_back(sum);
    return ret;
}