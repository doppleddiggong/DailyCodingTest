#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define min(a,b)            (((a) < (b)) ? (a) : (b))

 int solution(int n, int m, vector<int> section) {

     vector<bool> wall;
     for (int i = 0; i < n; i++)
     {
         auto find = std::find(section.begin(), section.end(), i + 1);

         if (find != section.end())
         {
             wall.push_back(false);
         }
         else
         {
             wall.push_back(true);
         }
     }

     int answer = 0;

     for (int i = 0; i < wall.size(); i++)
     {
         if (wall[i] == false)
         {
             int draw = min(i + m, wall.size());

             for (int j = i; j < draw; j++)
             {
                 wall[j] = true;
             }

             answer++;
         }
     }

     return answer;
 }