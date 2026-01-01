#include <iostream>

using namespace std;


int main()
{
    int value;
    cin >> value;
    
    if( value % 3 == 0 )
    {
        cout << "S" << endl;
    }
    else if( value % 3 == 1 )
    {
        cout << "U" << endl;
    }
    else if( value % 3 == 2 )
    {
        cout << "O" << endl;
    }
    
    return 0;
}