#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector<vector<int>> v;

vector<vector<int>> D;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;

    cin >> N >> M;

    v.assign(N+1, vector<int>(N+1, 0));
    D.assign(N+1, vector<int>(N+1, 0));


    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> v[i][j];
            D[i][j] = D[i][j - 1] + D[i - 1][j] - D[i - 1][j-1] + v[i][j];
        }
    }

    for (int i = 0; i < M; i++)
    {
        int s_x, s_y, e_x, e_y;
        cin >> s_x >> s_y >> e_x >> e_y;

        int sum = D[e_x][e_y] - D[s_x - 1][e_y] - D[e_x][s_y - 1] + D[s_x - 1][s_y - 1];
        cout << sum << '\n';
    }
}
