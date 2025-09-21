#include <string>
#include <vector>
#include <map>
using namespace std;

std::map<char, char> dataMap
{
    {'0', 'a'},
    {'1', 'b'},
    {'2', 'c'},
    {'3', 'd'},
    {'4', 'e'},
    {'5', 'f'},
    {'6', 'g'},
    {'7', 'h'},
    {'8', 'i'},
    {'9', 'j'},
};

string solution(int age) {

    string answer = "";

    string s = std::to_string(age);
    for (auto c : s)
        answer += dataMap[c];
    return answer;
}