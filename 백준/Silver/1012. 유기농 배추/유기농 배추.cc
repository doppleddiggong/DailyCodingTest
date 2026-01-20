#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <cstring>

using namespace std;


static vector<pair<int, int>> dir
{
    {-1, 0},
    {1, 0},

    {0, -1},
    {0, 1},
};


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
        bool grid[51][51];
        memset(grid, 0, sizeof(grid));

        // data set
        for (int k = 0; k < K; k++)
        {
            int x, y;
            cin >> x >> y;

            grid[x][y] = true;
        }


        int answer = 0;
        stack<pair<int, int>> ss;



        // calc
        for (int x = 0; x < M; x++)
        {
            for (int y = 0; y < N; y++)
            {
                if (grid[x][y])
                {
                    auto pos = pair<int, int>(x, y);
                    ss.push(pos);
                    grid[pos.first][pos.second] = false;

                    while (!ss.empty())
                    {
                        pair<int, int> start = ss.top();
                        ss.pop();

                        for( auto d : dir )
                        {
                            pair<int, int> check = { start.first + d.first, start.second + d.second };

                            if (0 <= check.first && check.first < M &&
                                0 <= check.second && check.second < N)
                            {
                                if (grid[check.first][check.second])
                                {
                                    ss.push(check);
                                    grid[check.first][check.second] = false;
                                }
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