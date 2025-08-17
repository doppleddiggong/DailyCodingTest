#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {

    std::sort(people.begin(), people.end(), std::greater<int>());

    int answer = 0;
    int left = 0;
    int right = people.size()-1;

    while (left < right)
    {
        answer++;
        int weight = people[left++];

        if (left + 1 < right &&
            weight + people[left + 1] <= limit)
        {
            left++;
        }
        else if ( weight + people[right] <= limit)
        {
            right--;
        }
    }

    int center = (left == right) ? 1 : 0;

    return answer + center;
}