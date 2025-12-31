#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int start_index = 1;
    int end_index = 1;
    int res = 1;
    int sum = 1;

    while ( end_index != N )
    {
        if (sum == N)
        {
            res++;
            end_index++;
            sum += end_index;
        }
        else if (sum > N)
        {
            sum -= start_index;
            start_index++;
        }
        else
        {
            end_index++;
            sum += end_index;
        }
    }

    cout << res << endl;

    return 0;
}