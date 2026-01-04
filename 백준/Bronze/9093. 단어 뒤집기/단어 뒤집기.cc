#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    cin.ignore();

    vector< vector<string> > result(N);

    for (int i = 0; i < N; i++)
    {
        string V;
        getline(cin, V);

        stringstream ss(V);

        string w;
        vector<string> data;

        while (ss >> w)
        {
            std::reverse(w.begin(), w.end());

            data.push_back(w);
        }

        result[i] = data;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}
