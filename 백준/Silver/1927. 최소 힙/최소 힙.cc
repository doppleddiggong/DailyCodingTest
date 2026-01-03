#include <iostream>
#include <queue>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> queue;

    for (int i = 0; i < N; i++)
    {
        int X;
        cin >> X;

        if (X == 0)
        {
            if (queue.size() != 0)
            {
                // 배열에서 가장 작은 값
                cout << queue.top() << '\n';
                queue.pop();
            }
            else
            {
                cout << "0\n";
            }
        }
        else
        {
            queue.push(X);
        }
    }


    return 0;
}