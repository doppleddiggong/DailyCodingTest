#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int arr1Sum = 0;
    int arr2Sum = 0;

    if (arr1.size() == arr2.size())
    {
        arr1Sum = std::accumulate(arr1.begin(), arr1.end(), 0 );
        arr2Sum = std::accumulate(arr2.begin(), arr2.end(), 0 );
                
        if (arr1Sum == arr2Sum)
            return 0;
    }
    else
    {
        arr1Sum = arr1.size();
        arr2Sum = arr2.size();
    }

    return arr2Sum > arr1Sum ? -1 : 1;
}