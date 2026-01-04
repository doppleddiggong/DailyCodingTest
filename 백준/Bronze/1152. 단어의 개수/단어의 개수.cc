#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cstdio>

using namespace std;

int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);

    string N;
    getline(cin, N);

    stringstream ss(N);

    string word;
    vector<string> result;

    while (ss >> word)
    {
        result.push_back(word);
    }

    cout << result.size() << '\n';

    return 0;
}