#include <string>
#include <vector>
#include <algorithm>
#include <cmath>


using namespace std;

int solution(vector<int> array) {
    std::sort(array.begin(), array.end());
    return array[ std::ceil( array.size()/2) ];
}