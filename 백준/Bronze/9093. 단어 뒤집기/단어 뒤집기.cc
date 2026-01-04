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

    vector< string > result(N);

    for (int i = 0; i < N; i++)
    {
        string V;
        getline(cin, V);

        stringstream ss(V);

        string w;
        string res;

        while (ss >> w)
        {
            std::reverse(w.begin(), w.end());

            res += w;
            res += ' ';
            
        }

        result[i] = res;
    }

    for (int i = 0; i < N; i++)
    {
        cout << result[i] << "\n";
    }

    return 0;
}
