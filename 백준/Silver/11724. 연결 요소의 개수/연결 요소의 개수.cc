#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

// 인접리스트
static vector<vector<int>> list;
// 방문
static vector<bool> visit;

// 모두 방문했니? 안했으면 안한곳 줘
int GetNotVisit()
{
    for (int i = 0; i < visit.size(); i++)
    {
        if (visit[i] == false)
        {
            return i;
        }
    }

    return -1;
}

void Travel(int node)
{
    // 방문장을 찍어요
    visit[node] = true;

    // 다음 방문지를 예약해요
    for (auto next : list[node])
    {
        if( visit[next] == false)
            Travel(next);
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, E;
    cin >> N >> E;

    list.resize(N+1);
    visit.resize(N+1);
    visit[0] = true;

    // 인접리스트를 만들어요
    for (int i = 1; i <= E; i++)
    {
        int n, e;
        cin >> n >> e;

        list[n].push_back(e);
        list[e].push_back(n);
    }

    int result = 0;
    for(int i = 1; i <= N; i++)
    {
        if (!visit[i])
        {
            Travel(i);
            result++;
        }
    }

    cout << result;

    return 0;
}