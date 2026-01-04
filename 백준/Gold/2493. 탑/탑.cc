#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> tower(N);
    vector<int> result(N);

    stack< pair<int, int> > left;


    // 타워 데이터를 모두 받는다
    for (int i = 0; i < N; i++)
    {
        int V;
        cin >> V;

        // 타워의 index, 타워의 높이
        tower[i] = V;
    }


    // <> 6 9 5 7 4 를 순회한다
    // 왼쪽에서 오른쪽으로 가면서,
    // 왼쪽에 있는 타워를 체크한다
    for (int i = 0; i < N; i++)
    {
        // 내 왼편에 있는 타워가 나보다 작은것들은 모두 죽어라
        while (!left.empty() && left.top().second < tower[i] )
        {
            left.pop();
        }

        if (left.empty() )
        {
            // 내 왼편에 있는 타워들이 아무것도 없다.
            // 나보다 큰 타워가 없다, 내 정보를 수신할 타워가 없다
            result[i] = 0;
        }
        else 
        {
            // 탑 정보가 있다
            // 그게 내 왼편에 있는데, 나보다 큰 타워다.
            // 해당 타워의 인덱스를 넣어야 한다...
            // 인덱스를 찾아온다
            result[i] = left.top().first+1;
        }

        left.push( pair<int, int>( i, tower[i]));
    }

    for(int i = 0; i < N; i++ )
    {
        cout << result[i] << ' ';

    }

    return 0;
}