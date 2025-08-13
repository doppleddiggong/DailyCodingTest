#include <string>
#include <vector>
#include <set>

using namespace std;

    int solution(int n) {
        
        std::set < std::pair<int, int> > set;

        for (int i = 1; i <= n; i++)
        {
            if ( n % i == 0 )
            {
                set.insert(std::make_pair(i, n / i));
            }
        }

        return set.size();
    }