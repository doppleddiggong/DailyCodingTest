#include <cstdio>
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int num_cnt, size_cnt;
    cin >> num_cnt >> size_cnt;

    vector<std::pair<int, int>> num;

    for (int i = 1; i <= num_cnt; i++)
    {
        int value;
        cin >> value;
        num.push_back({ i, value });
    }

    std::vector<int> result;

    std::deque<std::pair<int, int>> d;
    for (int i = 0; i < num_cnt; i++)
    {
        if (d.size() <= 0)
        {
            d.push_back(num[i]);
        }
        else
        {
            while (!d.empty())
            {
                // d의 마지막 데이터를 본다
                // d의 마지막 데이터가 지금 들어가려는 데이터보다 크다면
                // d의 마지막 데이터를 뽑고, 뒤에 넣는다
                if (d.back().second >= num[i].second)
                    d.pop_back();
                else
                    break;
            }

            // d의 마지막 데이터가 지금 들어가려는 데이터보다 작다면
            // 뒤에 넣는다
            d.push_back(num[i]);
        }


        // 인덱스 범위를 검사한다
        // 앞에 있는 인덱스 값이 뒤에 있는 인덱스값보다 size_cnt이상 차이난다면 pop_front를 한다

        if (d.back().first >= d.front().first + size_cnt)
            d.pop_front();


        // 이제 front의 값을 보고 result에 담는다
        result.push_back(d.front().second);
    }

    for (auto n : result)
    {
        cout << n << " ";
    }

    return 0;
}