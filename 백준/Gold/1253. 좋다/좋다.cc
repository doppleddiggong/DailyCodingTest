#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int value;

    cin >> value;

    vector<long long> data(value);
    for (int i = 0; i < value; i++)
    {
        cin >> data[i];
    }

    std::sort(data.begin(), data.end());

    int result = 0;

    for(int i = 0; i < data.size(); i++ )
    {
        int left = 0;
        int right = data.size() - 1;

        while (left < right)
        {
            if (left == i)
            {
                left++; 
                continue;
            }

            if (right == i)
            {
                right--;
                continue;
            }

            if (data[left] + data[right] == data[i])
            {
                result++;
                break;
            }
            else if (data[left] + data[right] < data[i])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    cout << result << endl;

    return 0;
}