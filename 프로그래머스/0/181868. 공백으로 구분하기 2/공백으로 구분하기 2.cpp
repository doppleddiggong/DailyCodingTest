#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;

     string target;
     for(auto c : my_string)
     {
         if (c == ' ')
         {
             if (target != "")
             {
                 answer.push_back(target);
                 target = "";
             }
             continue;
         }
         else
         {
             target += c;
         }
     }

    if (target != "")
        answer.push_back(target);

    return answer;
}