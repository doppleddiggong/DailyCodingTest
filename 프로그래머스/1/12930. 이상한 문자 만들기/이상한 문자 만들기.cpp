#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            count = 0;
        }
        else
        {
            if (count % 2 == 0)
            {
                s[i] = std::toupper(s[i]);
                count++;
            }
            else
            {
                s[i] = std::tolower(s[i]);
                count++;
            }
        }
    }

    return s;
}