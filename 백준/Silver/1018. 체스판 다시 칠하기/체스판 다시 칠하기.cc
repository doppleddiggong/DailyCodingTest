#include <iostream>
#include <queue>
#include <stack>
#include <map>
#include <vector>

using namespace std;

// 50 max
char data_map[51][51];

int check(int s_x, int s_y)
{
    int countW = 0;

    for (int y = 0; y <  8; y++)
    {
        for (int x = 0; x < 8; x++)
        {
            // 행과 열이 짝수면 시작색과 같아야 함
            char excep = ((x + y) % 2 == 0) ? 'W' : 'B';

            if (data_map[s_x+x][s_y+y] != excep)
                countW++;
        }
    }

    return std::min(countW, 64 - countW);
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int s_x, s_y;
    cin >> s_x >> s_y;

    int size = s_x * s_y;

    for (int i = 0; i < s_x; i++) {
        for (int j = 0; j < s_y; j++) {
            cin >> data_map[i][j]; // [행][열] 순서로 한 글자씩 입력
        }
    }


    int min = 64;
    for (int i = 0; i <= s_x - 8; i++)
    {
        for (int y = 0; y <= s_y - 8; y++)
        {
            int v = check(i, y);
            min = std::min(v, min);
        }
    }

    cout << min << endl;

    return 0;
};