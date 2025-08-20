#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    vector<char> m{ 'a', 'e', 'i', 'o', 'u' };

    string answer;
    for (auto c : my_string)
    {
        if (std::find(m.begin(), m.end(), c) == m.end())
        {
            answer += c;
        }
    }

    return answer;
}