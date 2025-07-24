#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    auto before = my_string.substr(0, s);
    auto after = my_string.substr(s+ overwrite_string.length());

    return before+ overwrite_string+ after;
}