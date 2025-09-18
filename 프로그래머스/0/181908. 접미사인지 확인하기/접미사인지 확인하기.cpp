#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string, string is_suffix) {
    std::vector<char> my(my_string.rbegin(), my_string.rend());
    std::vector<char> suffix(is_suffix.rbegin(), is_suffix.rend());

    for (int i = 0; i < suffix.size(); i++ )
    {
        if (suffix[i] != my[i])
        {
            return 0;
        }
    }
    return 1;

}