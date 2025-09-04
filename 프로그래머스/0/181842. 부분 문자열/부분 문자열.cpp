#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    if (str2.find(str1) == std::string::npos)
        return 0;
    return 1;
}