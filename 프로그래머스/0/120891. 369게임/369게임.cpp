#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    std::string s = std::to_string(order);
    int answer = 0;
    for (auto c : s)
    {
        if (c == '3' || c == '6' || c == '9')
            answer++;
    }

    return answer;
}