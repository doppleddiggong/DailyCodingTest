#include <iostream>
#include <vector>
#include <string>

using namespace std;

static vector<bool> visited;
static vector<int> result;

static int N;
static int M;

void Travel(int depth)
{
    if (depth == M)
    {
        for (int i = 0; i < M; i++)
        {
            cout << result[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= N; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            result[depth] = i;
            Travel(depth + 1);
            visited[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;

    visited.assign(N+1, false);
    result.resize(M);

    Travel(0);

    return 0;
}