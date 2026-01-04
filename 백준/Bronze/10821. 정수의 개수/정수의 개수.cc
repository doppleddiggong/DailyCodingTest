#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    string N;
    cin >> N;

    int ret = 0;
    for (auto c : N)
    {
        if (c == ',')
        {
            ret++;
        }
    }

    cout << ret+1;
    return 0;
}
