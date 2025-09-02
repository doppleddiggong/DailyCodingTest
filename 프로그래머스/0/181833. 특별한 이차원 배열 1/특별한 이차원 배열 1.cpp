#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    for (int i = 0; i < n; i++)
    {
        vector<int> tmp(n, 0);
        tmp[i] = 1;
        answer.push_back(tmp);
    }

    return answer;
}