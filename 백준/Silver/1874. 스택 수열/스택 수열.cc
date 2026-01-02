#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    stack<int> data;

    int cnt = 1;

    vector<char> result;

    for (int i = 0; i < N; i++)
    {
        int find;
        cin >> find;

        while (true)
        {
            int top = 0;
            if( data.size() > 0)
                top = data.top();

            if (top == find)
            {
                data.pop();
                result.push_back('-');
                break;
            }

            if (top > find)
            {
                data.pop();
                result.push_back('-');
            }
            else
            {
                data.push(cnt++);
                result.push_back('+');
            }

            if (cnt > N+1)
            {
                cout << "NO" << '\n';
                return 0;
            }
        }
    }

    for (auto c : result)
    {
        cout << c << '\n';
    }

    return 0;
};