#include <iostream>
#include <string>
#include <stack>

using namespace std;

static stack<char> ss;
bool isSixNumber(int target)
{
    string v = std::to_string(target);
    ss = {};

    int six_count = 0;
    for(const auto& c : v)
    {
        ss.push(c);

        if (ss.top() == '6')
        {
            six_count++;
            if (six_count == 3)
            {
                return true;
            }
        }
        else
        {
            six_count = 0;
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    int target = 666;
    while (true)
    {
        if (isSixNumber(target))
        {
            N--;
        }

        if (N == 0)
        {
            cout << target << '\n';
            break;
        }
        else
        {
            target++;
        }
    }

    return 0;
}