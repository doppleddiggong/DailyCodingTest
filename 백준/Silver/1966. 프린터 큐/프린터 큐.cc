#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        //6 0

        int N, M;

        cin >> N >> M;

        //1 1 9 1 1 1
        //vector<int> data_v(N);
        priority_queue<int> data_pq;
        queue < std::pair<int, int> > data_q;

        for (int v = 0; v < N; v++)
        {
            int value;
            cin >> value;

            //data_v[v] = value;
            data_pq.push(value);
            data_q.push(pair<int, int>(v, value));
        }

        int max_pop_count = 0;

        while ( true )
        {
            auto front_q = data_q.front();
            if (data_pq.top() == front_q.second)
            {
                if (front_q.first == M)
                {
                    // 찾는 번호랑 같니?
                    break;
                }

                // 현재 값의 최대값이 데이터 q에 있는 값과 동일한가?
                // 이것보다 높은 숫자가 있는가?
                data_pq.pop();
                data_q.pop();;
                max_pop_count++;
            }
            else
            {
                data_q.pop();
                data_q.push(front_q);
            }
        }

        cout << max_pop_count+1 << '\n';
    }

    return 0;
}