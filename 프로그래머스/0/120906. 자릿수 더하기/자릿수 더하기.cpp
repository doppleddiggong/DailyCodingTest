#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string sum = std::to_string(n);
    for(auto c : sum)
    {
        if (c == '0')
            continue;
        answer += (c - '0');
    }

    return answer;
}