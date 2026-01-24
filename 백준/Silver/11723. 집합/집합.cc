#include <iostream>


using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    bool data[21] = { false };
    
    int N;
    cin >> N;

    string command;
    int value;

    for (int i = 0; i < N; i++)
    {
        cin >> command;

        if (command == "add")
        {
            cin >> value;

            data[value] = true;
        }
        else if (command == "remove")
        {
            cin >> value;
            data[value] = false;
        }
        else if (command == "check")
        {
            cin >> value;
            if (data[value])
            {
                cout << "1" << '\n';
            }
            else
            {
                cout << "0" << '\n';
            }
        }
        else if (command == "toggle")
        {
            cin >> value;
            data[value] = !data[value];
        }
        else if (command == "all")
        {
            for (int i = 1; i <= 20; i++)
            {
                data[i] = true;
            }
        }
        else if (command == "empty")
        {
            for (int i = 1; i <= 20; i++)
            {
                data[i] = false;
            }
        }
    }

    return 0;
}