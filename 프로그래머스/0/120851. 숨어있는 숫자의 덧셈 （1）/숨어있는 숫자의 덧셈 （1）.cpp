#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    std::for_each(my_string.begin(), my_string.end(), [&](unsigned char c) {
        if (isdigit(c))
            answer += (c - '0');
    });
    return answer;
}