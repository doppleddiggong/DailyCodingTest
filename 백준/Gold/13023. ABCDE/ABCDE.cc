#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// 관계도
static vector<vector<int>> A;
// 방문기록
static vector<bool> visit;
static bool correct = false;

int GetUnvisitNode()
{
    for (int i = 0; i < visit.size(); i++)
    {
        if (visit[i] == true)
        {
            return i;
        }
    }

    return -1;
}

void DFS(int start, int link)
{
    if (link == 4)
    {
        correct = true;
        return;
    }

    // 이미 방문했다
    if (visit[start])
        return;

    visit[start] = true;


    for (int next : A[start])
    {
        if (!visit[next])
        {
            DFS(next, link + 1);
            if (correct)
                return;
        }
    }

    visit[start] = false;
}

int main()
{
    int N, E;
    cin >> N >> E;


    A.resize(N);
    visit.resize(N);

    correct = false;

    // 친구 관계도 데이터를 받아요.
    for (int i = 0; i < E; i++)
    {
        int n, e;

        cin >> n >> e;
        A[n].push_back(e);
        A[e].push_back(n);
    }

    for (int i = 0; i < N; i++)
    {
        if (correct == false)
        {
            DFS(i, 0);
        }
    }

    if (correct)
        cout << "1";
    else
        cout << "0";
}

