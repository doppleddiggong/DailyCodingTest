#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;
    
    if( y > 100000 )
    {
        cout << "No";
    }
    else
    {
        if( y % 2024 == 0 )
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        
    }
    
    return 0;
}