#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> gcd(int v)
{
    vector<int> answer;

    for (int i = 1; i <= v; i++)
    {
        if (v % i == 0 )
        {
            answer.push_back(i);
        }
    }

    return answer;
}

vector<int> solution(int n, int m) {

    int before = 1;

    std::unordered_map<int, int> map;
    for (auto v : gcd(n))
        map[v]++;

    auto m_gcd = gcd(m);
    std::reverse(m_gcd.begin(), m_gcd.end());

    for (auto v : m_gcd)
    {
        if (map[v] > 0 && v > before )
        {
            before = v;
        }
    } 

    int after;

    int min = std::min(n, m);
    int max = std::max(n, m);
    int lcm = max;

    while (true)
    {
        if (lcm % min == 0 )
        {
            after = lcm;
            break;
        }
        else
        {
            lcm += max;
        }
    }

    return { before, after };
}