#include <string>
#include <vector>

using namespace std;

bool CheckSize(vector<int> wallet, vector<int> bill)
{
    int wallet_min = min(wallet[0], wallet[1]);
    int wallet_max = max(wallet[0], wallet[1]);

    int bill_min = min(bill[0], bill[1]);
    int bill_max = max(bill[0], bill[1]);

    return wallet_min < bill_min || wallet_max < bill_max;
}

int solution(vector<int> wallet, vector<int> bill) {
    
    int answer = 0;

    while (CheckSize(wallet, bill))
    {
        if (bill[0] > bill[1])
            bill[0] *= 0.5f;
        else
            bill[1] *= 0.5f;

        answer++;
    }

    return answer;
}