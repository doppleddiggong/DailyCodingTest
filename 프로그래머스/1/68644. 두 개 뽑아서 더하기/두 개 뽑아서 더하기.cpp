#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    std::set<int> sum;

    for (int first = 0; first < numbers.size()-1; first++)
    {
        for (int second = first+1; second < numbers.size(); second++)
        {
            sum.insert(numbers[first] + numbers[second]);
        }
    }

	vector<int> answer(sum.begin(), sum.end());
	std::sort(answer.begin(), answer.end());    
    return answer;
}