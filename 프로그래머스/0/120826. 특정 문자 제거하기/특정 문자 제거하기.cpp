#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string ret;
    for (auto c : my_string)
    {
        if ( c != letter[0] )
        {
            ret += c;
        }
    }

    return ret;
}