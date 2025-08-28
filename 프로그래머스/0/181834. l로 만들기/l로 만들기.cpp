#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for( auto& c : myString)
    {
        if( 'a' <= c && c<= 'k' )
        {
            c = 'l';
        }
    }
    
    return myString;
}