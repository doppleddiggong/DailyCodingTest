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

    vector<string> data(N);

    for (int i = 0; i < N; i++)
    {
        string V;
        cin >> data[i];
    }

    sort(data.begin(), data.end(), [](string o1, string o2) {
        if (o1.length() == o2.length())
            return o1 < o2;
        return o1.length() < o2.length();
        });


    data.erase(std::unique(data.begin(), data.end()), data.end());


    for (auto c : data)
    {
        cout << c << '\n';
    }

    return 0;
}