#include <iostream>
#include <map>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int ASK;
    cin >> ASK;


    for (int z = 0; z < ASK; z++)
    {
        int M, N, K;

        cin >> M >> N >> K;

        // init map
        map<pair<int, int>, bool> grid;
        for (int x = 0; x < M; x++)
        {
            for (int y = 0; y < N; y++)
                grid[ pair<int, int>(x, y) ] = false;
        }

        // data set
        for (int k = 0; k < K; k++)
        {
            int x, y;
            cin >> x >> y;

            grid[pair<int, int>(x, y)] = true;
        }


        int answer = 0;
        stack<pair<int, int>> ss;

        // calc
        for (int x = 0; x < M; x++)
        {
            for (int y = 0; y < N; y++)
            {
                auto pos = pair<int, int>(x, y);
                if (grid[pos])
                {
                    ss.push(pos);
                    grid[pos] = false;

                    while (!ss.empty())
                    {
                        pair<int, int> start = ss.top();
                        ss.pop();

                        auto pos_l = pair<int, int>(start.first -1, start.second);
                        if (0 <= pos_l.first && pos_l.first < M)
                        {
                            if (grid[pos_l])
                            {
                                ss.push(pos_l);
                                grid[pos_l] = false;
                            }
                        }

                        auto pos_r = pair<int, int>(start.first +1, start.second);
                        if (0 <= pos_r.first && pos_r.first < M)
                        {
                            if (grid[pos_r])
                            {
                                ss.push(pos_r);
                                grid[pos_r] = false;
                            }
                        }

                        auto pos_u = pair<int, int>(start.first, start.second -1);
                        if (0 <= pos_u.second && pos_u.second < N)
                        {
                            if (grid[pos_u])
                            {
                                ss.push(pos_u);
                                grid[pos_u] = false;
                            }
                        }
                        auto pos_d = pair<int, int>(start.first, start.second +1);
                        if (0 <= pos_d.second && pos_d.second < N)
                        {
                            if (grid[pos_d])
                            {
                                ss.push(pos_d);
                                grid[pos_d] = false;
                            }
                        }
                    }

                    answer++;
                }
            }
        }

        cout << answer << '\n';
    }

    return 0;
}