#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int min = 100;
        int max = 0;

        for (int j = 0; j < n; j++)
        {
            int xi;
            cin >> xi;

            if (xi < min)
            {
                min = xi;
            }

            if (xi > max)
            {
                max = xi;
            }
        }


        cout << (max - min) * 2 << '\n';
    }
}