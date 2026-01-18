#include <iostream>
#include <vector>

using namespace std;

static vector<vector<int>> friendData;
static vector<bool> visited;

bool Travel(int start, int depth)
{
    if (depth == 4)
    {
        return true;
    }

    visited[start] = true;

    for (auto e : friendData[start])
    {
        if (visited[e] == false)
        {
            if( Travel(e, depth+1) )
                return true;
        }
    }

    visited[start] = false;
    return false;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;

    friendData.resize(N);
    visited = vector<bool>(N, false);

    for (int i = 0; i < M; i++)
    {
        int a, b;

        cin >> a >> b;

        friendData[a].push_back(b);
        friendData[b].push_back(a);
    }

    for (int i = 0; i < N; i++)
    {
        if (Travel(i, 0))
        {
            cout << "1" << "\n";
            return 0;
        }
    }

    cout << "0" << "\n";

    return 0;
}