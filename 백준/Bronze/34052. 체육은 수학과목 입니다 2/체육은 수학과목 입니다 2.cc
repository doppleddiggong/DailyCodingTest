#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N = 300;
    
    for(int i = 0; i < 4; i++ )
    {
        int data;
        cin >> data;
        N += data;
    }
    
    if( N <= 1800 )
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
    
    
    return 0;
}