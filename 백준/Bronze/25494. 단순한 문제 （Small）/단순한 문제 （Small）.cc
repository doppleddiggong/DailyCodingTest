#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a, b, c;

        cin >> a >> b >> c;


        int ret = 0;
        int x_y, y_z, z_x;
        for (int x = 1; x <= a; x++)
        {
            for (int y = 1; y <= b; y++)
            {
                for (int z = 1; z <= c; z++)
                {
                    x_y = x % y;
                    y_z = y % z;
                    z_x = z % x;

                    if (x_y == y_z &&
                        y_z == z_x)
                    {
                        ret++;
                    }
                }
            }
        }

        cout << ret << '\n';
    }

    return 0;
}