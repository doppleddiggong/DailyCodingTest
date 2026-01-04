#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
    // Length 순으로 정렬
    // 길이가 같으면 사전순
    // 중복된 단어는 제거

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    vector<string> data;

    for (int i = 0; i < N; i++)
    {
        string V;
        cin >> V;

        // 1. 중복값..
        if (std::find(data.begin(), data.end(), V) == data.end())
            data.push_back(V);
    }

    sort(data.begin(), data.end(), [](string o1, string o2) {
        if (o1.length() == o2.length())
        {
            return std::lexicographical_compare(o1.begin(), o1.end(), o2.begin(), o2.end());
        }
        return o1.length() < o2.length();
    });

    for (auto c : data)
    {
        cout << c << '\n';
    }

    return 0;
}