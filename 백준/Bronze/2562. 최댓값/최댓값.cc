#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector< pair<int, int>> data(9);

    for (int i = 0; i < 9; i++)
    {
        int N;
        cin >> N;

        data[i] = { i, N };
    }

    sort(data.begin(), data.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second; // 오름차순 정렬
    });


    cout << data[0].second << '\n';
    cout << data[0].first+1 << '\n';


    return  0;
}