#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    string s = to_string(num);
    string k_s = to_string(k);

    for(int i = 0; i < s.size(); i++ )
    {
        if (s[i] == k_s[0])
            return i+1;
    }

    return -1;
}