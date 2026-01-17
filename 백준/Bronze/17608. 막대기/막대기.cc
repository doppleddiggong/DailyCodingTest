#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
    int N;
    cin >> N;
    
    vector<int> tower(N);
    
    for(int i = 0; i <N; i++ )
    {
        cin >> tower[i];
    }
    
    int ret = 0;
    int big_tower = 0;
    for(int i = N-1; i >= 0; i-- )
    {
        if( tower[i] > big_tower )
        {
            big_tower = tower[i];
            ret++;
        }
    }
    
    cout << ret << '\n';
    return 0;
}