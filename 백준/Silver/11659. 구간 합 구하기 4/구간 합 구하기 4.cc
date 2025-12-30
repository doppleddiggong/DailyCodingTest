#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int data, ask;

    cin >> data >> ask;

    vector<int> sum(data+1);

    for (int i = 1; i <= data; i++)
    {
        int tmp;
        cin >> tmp;

        sum[i] = sum[i - 1] + tmp;
    }

    for (int i = 0; i < ask; i++)
    {
        int start, end;
        cin >> start >> end;

        int result = sum[end] - sum[start-1];
        cout << result << '\n';
    }

    return 0;
}

