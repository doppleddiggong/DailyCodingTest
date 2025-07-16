#include <vector>
#include <set>

using namespace std;

int solution(vector<int> nums)
{
    std::set<int> temp;

    for (auto& value : nums)
        temp.insert(value);

    int findCount = nums.size() * 0.5f;
    if (temp.size() < nums.size() * 0.5f)
    {
        return temp.size();
    }
    else
    {
        return findCount;
    }
}