#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (auto c : my_string)
    {
        if ('a' <= c && c <= 'z')
            answer += (c - 32);
        else
            answer += (c + 32);
    }

    return answer;
}