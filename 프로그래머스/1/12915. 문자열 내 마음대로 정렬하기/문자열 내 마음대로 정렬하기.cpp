#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    std::sort(strings.begin(), strings.end(),
        [&](const auto& first, const auto& second)
        {
            if (first[n] != second[n])
                return first[n] < second[n];
            else
                return first < second;
        });

    return strings;
}