#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    // type, has
    std::unordered_map< string, int> map;

    for (auto c : clothes)
    {
        auto type = c[1];
        map[type] += 1;
    }

    int answer = 1;
    for (auto kv : map )
        answer *= (kv.second+1);
    return answer-1;
}