#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> map(scoville.begin(), scoville.end());

    int answer = 0;

    while(map.size() >= 2 && map.top() < K)
    {
        int first = map.top();
        map.pop();

        int sec= map.top();
        map.pop();

        map.push(first + sec * 2);
        answer++;
    }
    
    return (map.top() >= K) ? answer : -1;
}