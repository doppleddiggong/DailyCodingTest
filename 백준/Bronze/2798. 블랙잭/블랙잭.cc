#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;

    vector<int> data(N);

    for (int i = 0; i < N; i++)
    {
        cin >> data[i];
    }

    std::sort(data.begin(), data.end(), greater<int>());

    int ret = 0;

    for (int x = 0; x < N - 2; x++)
    {
        for (int y = x + 1; y < N - 1; y++)
        {
            int x_y = data[x] + data[y];
            if (x_y > M)
                continue;

            for (int z = y + 1; z < N; z++)
            {
                int value = x_y + data[z];
                if (value <= M)
                {
                    if (value >= ret)
                    {
                        ret = value;
                    }
                }
            }
        }
    }

    cout << ret << '\n';

    return 0;
}