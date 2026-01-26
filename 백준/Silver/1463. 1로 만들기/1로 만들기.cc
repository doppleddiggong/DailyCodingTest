#include <iostream>

using namespace std;

static int dataArray[1000001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    dataArray[0] = 0;
    dataArray[1] = 0;
    dataArray[2] = 1;
    dataArray[3] = 1;
    dataArray[4] = 2;

    for (int i = 5; i <= N; i++)
    {
        dataArray[i] = dataArray[i - 1] + 1;

        if (i % 2 == 0)
        {
            dataArray[i] = min(dataArray[i], dataArray[i / 2] + 1);
        }
        
        if (i % 3 == 0)
        {
            dataArray[i] = min(dataArray[i], dataArray[i / 3] + 1);
        }
    }

    cout << dataArray[N] << '\n';

    return  0;
}