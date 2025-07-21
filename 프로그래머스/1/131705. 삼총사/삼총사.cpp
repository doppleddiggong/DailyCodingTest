#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    for (int x = 0; x < number.size(); x++)
    {
        for (int y = x+1; y < number.size(); y++)
        {
            for (int z = y+1; z < number.size(); z++)
            {
                if ((number[x] + number[y] + number[z]) == 0)
                {
                    answer++;
                }
            }
        }
    }
    return answer;
}