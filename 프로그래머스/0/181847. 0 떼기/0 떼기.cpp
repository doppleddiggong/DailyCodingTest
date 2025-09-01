#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    bool find = false;
    for (auto c : n_str)
    {
        if (c == '0' && find == false)
            continue;
        else
        {
            find = true;
            answer += c;
        }
    }
    return answer;
}