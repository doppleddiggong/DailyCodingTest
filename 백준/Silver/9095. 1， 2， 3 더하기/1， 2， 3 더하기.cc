#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> data(12);

    data[0] = 0;
    data[1] = 1;
    data[2] = 2;
    data[3] = 4;
    data[4] = 7;

    for (int i = 5; i <= 11; i++)
    {
        data[i] = data[i - 1] + data[i - 2] + data[i - 3];
    }

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        cout << data[N] << '\n';
    }

    return 0;
}