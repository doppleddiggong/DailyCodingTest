#include <iostream>

using namespace std;

int main()
{
    int N;
    int remain = 0;
    
    cin >> N;
    
    for(int i = 0; i < N; i++ )
    {
        int a, b;
        
        cin >> a >> b;
        
        if( a == 1 )
        {
            remain += b;
        }
        else
        {
            if( remain >= b)
            {
                remain -= b;
            }
            else
            {
                cout << "Adios" << '\n';
                return 0;
            }
        }
    }

    cout << "See you next month" << '\n';
    return 0;
}