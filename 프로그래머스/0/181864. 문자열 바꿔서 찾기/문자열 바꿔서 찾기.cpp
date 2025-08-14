#include <string>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int solution(string myString, string pat) {
    string s;
    for (auto c : myString)
    {
        if (c == 'A')
            s += "B";
        else
            s += "A";
    }

    if (s.find(pat) != std::string::npos)
        return 1;
    return 0;
}