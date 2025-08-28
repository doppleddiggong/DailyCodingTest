#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    
    for(auto& n : arr)
    {
        if( k % 2 == 0 )
        {
            n += k;
        }
        else
        {
            n *= k;
        }
    }
    return arr;
    
    
}