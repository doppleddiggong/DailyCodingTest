#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string N;
    cin >> N;
    
    if( N[0] == '5' &&
       N[1] == '5' && 
       N[2] == '5' )
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
    

    
    return 0;
}