#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    
    for( auto c : array )
    {
        if( height < c  )
        {
            answer++;
        }
    }
    
    return answer;
}