#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<std::pair<int, int>> tower;
    vector<int> answer(N);
    // 나보다 키 큰 왼쪽에 있는 타워
    stack<std::pair<int, int>> data;

    for (int i = 1; i <= N; i++)
    {
        int V;
        cin >> V;

        tower.push_back(pair<int, int>(i, V));
    }

    // 6 9 5 7 4
    for (int i = 0; i < N; i++)
    {
        auto pointer = tower[i];

        // 나보다 왼쪽에 있는 타워들중에 나보다 키가 작은 애들은 다 죽어라
        while (!data.empty() && pointer.second >= data.top().second)
            data.pop();

        if (data.empty())
            answer[i] = 0;
        else
            answer[i] = data.top().first;

        data.push(tower[i]);
    }


    for (int i = 0; i < N; i++)
    {
        cout << answer[i] << " ";
    }


    return 0;
};