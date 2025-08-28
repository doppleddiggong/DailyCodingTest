#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string ret;
    std::transform(my_string.begin(), my_string.end(), 
        std::back_inserter(ret),
        [&](char c) {
        return std::tolower(c);
    });

    std::sort(ret.begin(), ret.end());
    return ret;
}