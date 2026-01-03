#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    vector<int> data(N);

    for (int i = 0; i < N; i++)
    {
        cin >> data[i];
    }


    sort(data.begin(), data.end());

    for (auto v : data)
    {
        cout << v << '\n';
    }
    return 0;
}