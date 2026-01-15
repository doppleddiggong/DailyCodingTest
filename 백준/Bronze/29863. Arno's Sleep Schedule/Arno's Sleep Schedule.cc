#include <iostream>

using namespace std;

int main()
{
    int sleep;
    int wake;
    
    cin >> sleep >> wake;
    
    int ret = 0;
    if( 20<= sleep )
    {
        ret = (24 - sleep) + wake;
    }
    else
    {
        ret = wake - sleep;
    }
    
    
    cout << ret;
    
    return 0;
}