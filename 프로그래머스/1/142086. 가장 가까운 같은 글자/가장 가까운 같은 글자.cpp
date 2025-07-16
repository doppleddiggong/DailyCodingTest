#include <string>
#include <vector>

using namespace std;

    vector<int> solution(string s) {
        auto func = [&](int start_index, char find) -> int {
            int count = 0;
            for(int i = start_index-1; i >= 0; i--)
            {
                if (s[i] == find )
                    return count+1;
                else
                    count++;
			}
            return -1;
        };
        
        vector<int> answer;
        for( int i = 0 ; i < s.length(); i++)
        {
            answer.push_back(func(i, s[i]));
        }

        return answer;
    }