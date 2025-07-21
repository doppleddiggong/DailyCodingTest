#include <iostream>
#include <stdio.h>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

    int solution(vector<int> d, int budget) {

        std::sort(d.begin(), d.end());

        for( int i = 0; i < d.size(); i++)
        {
			auto it_end = std::prev(d.end(), i);
            auto sum = std::accumulate(d.begin(), it_end, 0 );

            if (budget >= sum)
                return d.size() - i;
		}

        return 0;
    }