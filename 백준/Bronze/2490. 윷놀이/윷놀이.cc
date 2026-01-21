#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        int one = 0;
        for (int d = 0; d < 4; d++)
        {
            int a;
            cin >> a;

            if (a == 0)
                one++;
        }

        if (one == 4)
            cout << "D" << "\n";
        else if (one == 3)
            cout << "C" << "\n";
        else if (one == 2)
            cout << "B" << "\n";
        else if (one == 1)
            cout << "A" << "\n";
        else
            cout << "E" << "\n";
    }

    return 0;
}