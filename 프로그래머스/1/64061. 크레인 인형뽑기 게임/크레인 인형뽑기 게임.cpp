#include <string>
#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {

    std::unordered_map<int, std::stack<int>> map;
    std::stack<int> reward;

    for (int x = board.size()-1; x >= 0; x--)
    {
        for (int y = 0; y < board[x].size(); y++)
        {
            if(board[x][y] != 0 )
                map[y].push(board[x][y]);
        }
    }

    int answer = 0;

    for (auto p : moves)
    {
        if (!map[p-1].empty())
        {
            auto cur_pick = map[p-1].top();
            map[p-1].pop();

            if (reward.empty())
                reward.push(cur_pick);
            else
            {
                if (reward.top() == cur_pick)
                {
                    answer += 2;
                    reward.pop();
                }
                else
                    reward.push(cur_pick);
            }
        }
    }
    return answer;
}