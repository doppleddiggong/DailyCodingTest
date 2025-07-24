#include <string>
#include <vector>

using namespace std;

vector<int> month_days = { 
    0,
    31, 29, 31, 
    30, 31, 30, 
    31, 31, 30, 
    31, 30, 31 };

vector<string> week_days = { 
    "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };

string solution(int a, int b) {
    int after_day = 0;
    if (a != 1)
    {
        for (int i = 1; i < a; i++)
            after_day += month_days[i];
    }
    after_day += (b-1);
    string answer = week_days[after_day % 7];
    return answer;
}