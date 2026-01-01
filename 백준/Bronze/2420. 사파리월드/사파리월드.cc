#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
int main()
{
    long long N, M;

    cin >> N >> M;

    if (N > M)
    {
        cout << abs(N - M) << endl;
    }
    else
    {
        cout << abs(M - N) << endl;
    }


    return 0;
}