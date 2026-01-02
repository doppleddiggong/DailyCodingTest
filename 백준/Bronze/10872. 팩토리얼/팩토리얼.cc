#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

long long fac(int v)
{
    if (v > 1)
        return v * fac(v - 1);
    else 
        return 1;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    
    if( N > 1)
    {
        cout << fac(N)<< '\n';
    }
    else
    {
        cout << "1" << '\n';
    }
    
    return 0;    
}
    