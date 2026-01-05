#include <iostream>

using namespace std;

long long GetFac(int number)
{
    long long ret = 1;
    for (int i = number; i > 0; i--)
    {
        ret *= i;
    }

    return ret;

}

int main()
{
    int N, M;
    cin >> N >> M;


    long long NF = GetFac(N);
    long long MF = GetFac(M);
    long long N_MF = GetFac(N - M);


    int ret = NF / (MF * N_MF);

    cout << ret;


}