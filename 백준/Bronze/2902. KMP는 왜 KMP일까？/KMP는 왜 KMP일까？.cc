// Knuth-Morris-Pratt

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string N;
    cin >> N;
    
    stringstream ss(N);
    string w;
    
    string ret;
    while(getline(ss, w, '-'))
    {
        ret += w[0];
    }
    cout << ret;
}