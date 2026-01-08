#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        double a, b;

        cin >> a >> b;

        if (a > b)
        {
            double f = a - b;
            f = round(f * 10) / 10.0f;

            printf("%.1f\n", f);
        }
        else
        {
            double f = b - a;
            f = round(f * 10) / 10.0f;

            printf("%.1f\n", f);
        }
    }
    return 0;
}