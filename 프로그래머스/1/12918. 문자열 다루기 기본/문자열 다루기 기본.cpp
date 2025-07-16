#include <string>
#include <vector>
#include <stdexcept>


using namespace std;

bool solution(string s) {
    vector<char> v(s.begin(), s.end());

    if (v.size() == 4 || v.size() == 6)
    {
        for (const auto& c : v)
        {
            if (c >= '0' && c <= '9')
                continue;
            else
                return false;
        }
        return true;
    }
    else
    {
        return false;
    }

}