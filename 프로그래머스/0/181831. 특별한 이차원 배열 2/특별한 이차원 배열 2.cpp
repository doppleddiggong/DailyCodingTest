#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; i < arr.size(); i++)
        {
            if (arr[i][j] != arr[j][i])
                return 0;
        }

    }

    return 1;

}