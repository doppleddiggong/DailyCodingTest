#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int N;
    cin >> N;

    vector<int> data;
    for (int i = 0; i < N; i++)
    {
        int V;
        cin >> V;
        data.push_back(V);
    }

    sort(data.begin(), data.end(), greater<int>());

    int ret = 0;

    for (int i = 0; i < data.size(); i++)
    {
        ret += accumulate(data.begin() + i, data.end(), 0);
    }

    cout << ret;

    return 0;
}