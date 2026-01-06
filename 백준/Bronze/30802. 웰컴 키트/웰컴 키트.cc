#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N;
    long long S, M, L, XL, XXL, XXXL;
    long long T, P;

    cin >> N;
    cin >> S >> M >> L >> XL >> XXL >> XXXL;
    cin >> T >> P;

    long long ret_T = ceill((double)S / T) + ceill((double)M / T) + ceill((double)L / T) + ceill((double)XL / T) + ceill((double)XXL / T) + ceill((double)XXXL / T);
    long long ret_P = N / P;
    long long ret_one_p = N % P;

    cout << ret_T << '\n';
    cout << ret_P << " " << ret_one_p << '\n';

    return 0;
}
