#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N = 0;
    std::cin >> N;

    // 1. N개의 숫자를 받아야한다
    // 2. N개의 숫자를 Array로 받아야한다
    std::vector<int> NumSpace(N);

    for (int i = 0; i < N; i++)
        std::cin >> NumSpace[i];

    std::sort(NumSpace.begin(), NumSpace.end());

    for( auto n : NumSpace)
    {
        std::cout << n <<  std::endl;
    }
    
    return 0;
}