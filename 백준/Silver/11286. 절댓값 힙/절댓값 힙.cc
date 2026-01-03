#include <iostream>
#include <queue>

using namespace std;

struct compare
{
    bool operator()(int o1, int o2)
    {
        int first_abs = abs(o1);
        int sec_abs = abs(o2);
        if (first_abs == sec_abs)
        {
            return o1 > o2;
        }
        else
        {
            return first_abs > sec_abs;
        }
    }
};


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, compare> my_queue;


    for (int i = 0; i < N; i++)
    {
        int V; 
        cin >> V;
        if (V == 0)
        {
            if (my_queue.empty())
            {
                cout << "0\n";
            }
            else
            {
                cout << my_queue.top() << '\n';
                my_queue.pop();
            }
        }
        else
        {
            my_queue.push(V);
        }
    }

    return 0;
}