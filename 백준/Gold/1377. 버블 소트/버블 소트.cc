#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<pair<int, int>> data;

    for (int i = 0; i < N; i++)
    {
        int V;
        cin >> V;

        data.push_back(pair<int, int>(V, i));
    }

    sort(data.begin(), data.end());

    int max = 0;
    


    for(int i = 0; i < data.size(); i++ )
    {
        max = std::max(max, data[i].second - i);
    }

    cout << max+1 << '\n';

    return 0;
}