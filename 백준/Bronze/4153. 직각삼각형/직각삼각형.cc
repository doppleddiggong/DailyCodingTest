#include <iostream> 
#include <algorithm> 


using namespace std;

int main()
{
    int a,b,c;
    while(true)
    {
        cin >> a >> b >> c;
        
        if( a == 0 && b == 0 && c == 0 )
            break;
        
        vector<int> data;
        
        data.push_back(a);
        data.push_back(b);
        data.push_back(c);
        
        std::sort(data.begin(), data.end());
        
        if( data[0] * data[0] +data[1]*data[1] == data[2] * data[2] )
            cout << "right\n";
        else
            cout << "wrong\n";
    }
    
    return 0;
}