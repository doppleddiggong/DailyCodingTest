#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(auto s : strArr)
    {
        if (s.find("ad") == std::string::npos)
            answer.push_back(s);
    }
    return answer;

}