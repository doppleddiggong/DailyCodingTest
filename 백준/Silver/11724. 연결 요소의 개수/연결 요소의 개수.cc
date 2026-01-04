#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

// 인접리스트
static vector<vector<int>> list;
// 방문
static vector<bool> visit;
// 방문 예정
static stack<int> ready;

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
    // 이미 방문한곳이라 더이상 방문을 안해도 됩니다
    if (visit[node] == true)
        return;

    // 방문장을 찍어요
    visit[node] = true;

    // 다음 방문지를 예약해요
    for (auto d : list[node])
    {
        if( visit[d] == false)
            ready.push(d);
    }

    while( !ready.empty())
    {
        int next_node = ready.top();
        ready.pop();

        if (visit[next_node])
            continue;

        Travel(next_node);
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

        // 양방향 처리
        list[n].push_back(e);
        list[e].push_back(n);
    }

    int result = 0;
    while (true)
    {
        int next_node = GetNotVisit();

        if (next_node == -1)
            break;
        else
        {
            Travel(next_node);

            result++;
        }
    }



    cout << result;


    return 0;
}