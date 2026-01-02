#include <cstdio>
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int year;
        cin >> year;

        if ( ((year + 1) % (year % 100)) == 0)
            cout << "Good" << '\n';
        else
            cout << "Bye" << '\n';
    }

    return 0;
}