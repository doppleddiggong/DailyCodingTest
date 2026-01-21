#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int W, H;
    cin >> W >> H;
    
    float ret = (W*H) / 2.0f;
    
    cout << fixed << setprecision(1) << ret << '\n';
    
    return 0;
}