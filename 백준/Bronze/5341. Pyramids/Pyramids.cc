#include <iostream>

using namespace std;
int main()
{
    while( true )
    {
        int value;
        cin >> value;
        
        if( value == 0)
            break;
        
        int sum = 0;
        for(int i = value; i > 0; i-- )
        {
            sum += i;
        }
        
        cout << sum << endl;
    }
}