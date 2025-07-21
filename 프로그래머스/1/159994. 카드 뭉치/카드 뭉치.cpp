#include <string>
#include <vector>
#include <queue>

using namespace std;

string solution(
    vector<string> cards1, 
    vector<string> cards2, 
    vector<string> goal)
{
     std::queue<string> q1;
     for (const auto& s : cards1)
         q1.push(s);

     std::queue<string> q2;
     for (const auto& s : cards2)
         q2.push(s);

     for (const auto& find : goal)
     {
         string q1_f = q1.size() > 0 ? q1.front() : "";
         string q2_f = q2.size() > 0 ? q2.front() : "";

         if (q1_f == find)
             q1.pop();
         else if (q2_f == find)
             q2.pop();
         else
             return "No";
     }

     return "Yes";
}