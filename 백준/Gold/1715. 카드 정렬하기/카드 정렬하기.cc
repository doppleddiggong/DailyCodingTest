#include <iostream>
#include <queue>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> data;

    for (int i = 0; i < N; i++)
    {
        int V;
        cin >> V;
        data.push(V);
    }

    int ret = 0;
    while(data.size() != 1)
    {
        int A = data.top();
        data.pop();

        int B = data.top();
        data.pop();

        int C = A+B;
        ret += C;

        data.push(C);
    }

    cout << ret << '\n';


    return 0;
}