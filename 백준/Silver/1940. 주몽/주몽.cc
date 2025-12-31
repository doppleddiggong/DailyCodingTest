#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int m;
    int res;

    cin >> m;
    cin >> res;

    vector<int> material(m);

    for (int i = 0; i < m; i++)
    {
        cin >> material[i];
    }

    std::sort(material.begin(), material.end());


    int retValue = 0;
    int sum = 0;
    int start_index = 1;
    int end_index = m;

    while (start_index != end_index)
    {
        sum = material[start_index-1] + material[end_index-1];
        if (sum == res)
        {
            start_index++;
            retValue++;
        }
        else if (sum < res)
        {
            start_index++;
        }
        else if (sum > res)
        {
            end_index--;
        }
    }

    cout << retValue << '\n';

    return 0;
}