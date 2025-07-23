#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {

    for (auto& c : s)
    {
        if (c == ' ')
            continue;

        int num = c;


        if ('A' <= num && num <= 'Z')
        {
            num += n;

            if (num > 'Z')
                num -= ('z' - 'a' + 1);
            c = num;
        }
        else if ('a' <= num && num <= 'z')
        {
            num += n;

            if (num > 'z')
                num -= ('z' - 'a' + 1);
            c = num;
        }
    }

    return s;
}