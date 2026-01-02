#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    long long N;
    cin >> N;

    if (N == 0)
    {
        cout << 1 << '\n';
    }
    else
    {
        string start_n = "1";
        string end_n = "10";

        int v = 1;

        while (true)
        {
            long long s = atoll(start_n.c_str());
            long long e = atoll(end_n.c_str());

            if( s <= N && N <= e)
            {
                break;
            }
            else
            {
                start_n = "1" + start_n;
                end_n = "1" + end_n;
                v++;
            }
        }

        cout << v << '\n';
    }


    return 0;
}