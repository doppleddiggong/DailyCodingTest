#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> data;
    for (int i = 0; i < 10; i++)
    {
        int N;
        cin >> N;

        data.insert(N % 42);
    }

    cout << data.size() << '\n';
    return 0;
}