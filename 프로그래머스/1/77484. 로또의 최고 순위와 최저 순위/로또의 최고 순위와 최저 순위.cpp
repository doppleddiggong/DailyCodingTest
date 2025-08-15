#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

 std::unordered_map<int, int> reward {
     { 6, 1 },
     { 5, 2 },
     { 4, 3 },
     { 3, 4 },
     { 2, 5 },
     { 1, 6 },
     { 0, 6 }
 };

 vector<int> solution(vector<int> lottos, vector<int> win_nums) {
     int zero_count = 0;
     int correct = 0;

     for (auto n : lottos)
     {
         if (n == 0)
         {
             zero_count++;
             continue;
         }

         if (std::find(win_nums.begin(), win_nums.end(), n) != win_nums.end())
             correct++;
     }
    return { reward[correct + zero_count], reward[correct] };
 }