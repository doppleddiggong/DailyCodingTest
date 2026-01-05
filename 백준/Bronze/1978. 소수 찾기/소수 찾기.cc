#include <iostream>

using namespace std;

bool IsPrime(int n)
{
    if (n == 1)
        return false;

    if (n == 2 ||
        n == 3 ||
        n == 5 ||
        n == 7 ||
        n == 11 ||
        n == 13)
    {
        return true;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int N;
    cin >> N;

    int ret = 0;
    for (int i = 0; i < N; i++)
    {
        int V;
        cin >> V;

        if (IsPrime(V))
        {
            ret++;
        }
    }

    cout << ret;
}