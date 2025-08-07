#include <string>
#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

// <판매원 이름, 추천인 이름>
std::unordered_map<string, string> map;

// <판매원 이름, 수익>
std::unordered_map<string, int> reward;

void AddReward(string target, int price)
{
    int my_reward = ceil(price * 0.9f);
    int up_reward = price - my_reward;

    if ( up_reward > 0)
    {
        // 나한테 돈을 준다
        reward[target] += my_reward;

        // 추천인에게 상납한다
        AddReward(map[target], up_reward);
    }
    else
    {
        reward[target] += price;
    }
}

vector<int> solution(
    vector<string> enroll,  
    vector<string> referral,
    vector<string> seller,  
    vector<int> amount )    
{
    reward.clear();
    map.clear();

    for(int i = 0; i < enroll.size(); i++)
        map[enroll[i]] = referral[i];

    for (int i = 0; i < amount.size(); i++)
        AddReward(seller[i], amount[i]*100);

    vector<int> answer;
    for (int i = 0; i < enroll.size(); i++)
    {
        if (reward.find(enroll[i]) != reward.end())
            answer.push_back(reward[enroll[i]]);
        else
            answer.push_back(0);
    }

    return answer;
}