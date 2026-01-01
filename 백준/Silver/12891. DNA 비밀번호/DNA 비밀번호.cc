#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int data_length, size;
    string value;

    cin >> data_length >> size;

    cin >> value;

    std::vector<int> m(4);

    cin >> m[0];
    cin >> m[1];
    cin >> m[2];
    cin >> m[3];

    int result = 0;

    int a_c = 0;
    int c_c = 0;
    int g_c = 0;
    int t_c = 0;

    for (int j = 0; j < size; j++)
    {
        if (value[j] == 'A')
            a_c++;
        else if (value[j] == 'C')
            c_c++;
        else if (value[j] == 'G')
            g_c++;
        else if (value[j] == 'T')
            t_c++;
    }

    for (int i = 0; i <= data_length - size; i++)
    {
        if (a_c >= m[0] &&
            c_c >= m[1] &&
            g_c >= m[2] &&
            t_c >= m[3])
        {
            result++;
        }

        if (value[i] == 'A')
            a_c--;
        else if (value[i] == 'C')
            c_c--;
        else if (value[i] == 'G')
            g_c--;
        else if (value[i] == 'T')
            t_c--;

        if (value[i + size] == 'A')
            a_c++;
        else if (value[i + size] == 'C')
            c_c++;
        else if (value[i + size] == 'G')
            g_c++;
        else if (value[i + size] == 'T')
            t_c++;
    }

    cout << result << endl;

    return 0;
}