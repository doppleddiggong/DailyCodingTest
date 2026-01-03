#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string N;
    cin >> N;

    vector<char> data;

    for (auto c : N)
    {
        data.push_back(c);
    }

    sort(data.begin(), data.end(), greater<int>() );

    for (auto c : data)
    {
        cout << c;
    }

    return 0;
}