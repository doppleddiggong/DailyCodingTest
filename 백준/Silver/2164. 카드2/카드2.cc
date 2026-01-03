#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    deque<int> d;
    for (int i = 1; i <= N; i++)
    {
        // 6을 받아서
        //1,2,3,4,5,6 순으로 쌓는다
        d.push_back(i);
    }

    while (d.size() != 1)
    {
        d.pop_front();
        auto f = d.front();
        d.pop_front();

        d.push_back(f);
    }

    cout << d.front() << '\n';
}