#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    std::transform(myString.begin(), myString.end(), myString.begin(), [](unsigned char c) {return std::tolower(c); });
    std::transform(pat.begin(), pat.end(), pat.begin(), [](unsigned char c) {return std::tolower(c); });

    if (myString.find(pat) == std::string::npos)
        return 0;
    return 1;
}