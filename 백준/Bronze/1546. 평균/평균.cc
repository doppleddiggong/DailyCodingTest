#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int s;
    cin >> s;

    vector<int> record(s);

    for (int i = 0; i < s; i++)
    {
        cin >> record[i];
    }

    // record 중에서 최고점을 찾는다
    float record_max = *max_element(record.begin(), record.end());

    float sum = 0;
    for (auto& v : record)
        sum += (v / record_max) * 100.0f;

    cout << sum / record.size() << endl;

    return 0;
}