#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int N;
    cin >> N;

    queue<int> data;

    string command;
    int value;
    for (int i = 0; i < N; i++)
    {
        cin >> command;

        if (command == "push")
        {
            cin >> value;
            data.push(value);
        }
        else if (command == "pop")
        {
            if( data.size() > 0 )
            {
                cout << data.front() << "\n";
                data.pop();
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
        else if (command == "size")
        {
            cout << data.size() << "\n";
        }
        else if (command == "empty")
        {
            if (data.size() == 0)
            {
                cout << "1" << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else if (command == "front")
        {
            if (data.size() > 0)
            {
                cout << data.front() << "\n";
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
        else if (command == "back")
        {
            if (data.size() > 0)
            {
                cout << data.back() << "\n";
            }
            else
            {
                cout << "-1" << "\n";
            }
        }
    }

    return  0;
}