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

    vector<pair<int, long long>> tower;

    // 나를 볼수 있는 타워의 갯수
    //vector<int> answer(N);
    long long ret = 0;

    stack<pair<int, long long>> left_tower;

    for (int i = 0; i < N; i++)
    {
        int height;
        cin >> height;
        tower.push_back(pair<int, long long>(i, height));
    }

    for (int i = 0; i < N; i++)
    {
        auto cur = tower[i];

        // 나보다 오른쪽에 있는데 큰 것들은 모두 지운다
        while (!left_tower.empty() && cur.second >= left_tower.top().second)
            left_tower.pop();

        if (!left_tower.empty())
        {
            ret += left_tower.size();
            //answer[i] = left_tower.size();
        }

        left_tower.push(cur);
    }

    cout << ret << endl;
   

    return 0;
};