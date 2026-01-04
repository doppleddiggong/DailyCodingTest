#include <iostream>

using namespace std;

static int N;

bool IsPrime(int number)
{
    // 제곱근으로만 본다
    for (int i = 2; i * i <= number; i++)
    {
        // 소수입니까?
        if ((number % i) == 0)
        {
            return false;
        }
    }
    return true;
}

void DFS(int number, int jarisu)
{
    if (jarisu == N)
    {
        // 요청했던 자리수까지 도달했고, 소수이다. 바로 출력
        if (IsPrime(number))
        {
            cout << number << '\n';
        }
        return;
    }

    for (int i = 1; i <= 9; i += 2)
    {
        // 홀수만 본다
        int tmp = number * 10 + i;
        if( IsPrime(tmp))
            DFS(tmp, jarisu + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> N;

    DFS(2, 1);
    DFS(3, 1);
    DFS(5, 1);
    DFS(7, 1);

    return 0;
}




