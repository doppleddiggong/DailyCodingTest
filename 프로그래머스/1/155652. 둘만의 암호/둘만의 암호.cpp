#include <string>
#include <vector>

using namespace std;

char move(char c, int index, string& skip )
{
    for (int i = 0; i < index; i++ )
    {
        c += 1;
        if (c > 'z')
            c += ('a'-'z'-1);

        if (skip.find(c) != std::string::npos)
            i--;
    }

    return c;
}

string solution(string s, string skip, int index) {
    for (auto& c : s)
    {
        if (skip.find(c) == std::string::npos)
            c = move(c, index, skip);
    }

    return s;
}