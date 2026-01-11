#include <iostream>
#include <vector>

using namespace std;

bool IsPall(string value)
{
    vector<char> data(value.begin(), value.end());

    for (int i = 0; i < data.size() / 2; i++)
    {
        if (data[i] != data[data.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (true)
    {
        string N;
        cin >> N;

        // 종료 조건
        if (N == "0")
            break;
        else
        {
            if (IsPall(N))
            {
                cout << "yes" << '\n';
            }
            else
            {
                cout << "no" << '\n';
            }
        }
    }

    return 0;
}