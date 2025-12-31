#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int count, mod_value;
    cin >> count >> mod_value;


    long long sum = 0;
    vector<long long> vMod(count+1, 0);

    vector<long long> vSpace(mod_value, 0);

    for (int i = 1; i <= count; i++)
    {
        int value;
        cin >> value;

        sum += value;
        vMod[i] = sum % mod_value;

        vSpace[vMod[i]]++;
    }

    long long total_sum = vSpace[0];


    for (auto v : vSpace)
    {
        total_sum += (v * (v - 1)) /2;
    }

    cout << total_sum << "\n";
}