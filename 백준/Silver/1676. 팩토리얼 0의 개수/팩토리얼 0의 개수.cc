#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    int ret = 0;
    for (int i = N; i > 0; i--)
    {
        // 숫자의 끝을 보고, 5나 0이면 증가시킨다
        if ( i % 5 == 0)
        {
            ret++;
        }

        if ( i % 25 == 0 )
        {
            ret++;
        }

        if (i % 125 == 0)
        {
            ret++;
        }

        if (i % 625 == 0)
        {
            ret++;
        }
    }

    cout << ret;
}