#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int N;
    cin >> N;

    unordered_set<int> data(N);

    for (int i = 0; i < N; i++)
    {
        int v;
        cin >> v;

        data.insert(v);
    }

    int M;
    cin >> M;


    for (int i = 0; i < M; i++)
    {
        int v;
        cin >> v;

        if (data.find(v) != data.end())
        {
            cout << "1" << '\n';
        }
        else
        {
            cout << "0" << '\n';
        }
    }


    return  0;
}