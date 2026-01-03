#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N, M;
    cin >> N >> M;
    
    vector<int> data(N);
    
    for(int i = 0; i < N; i++ )
    {
        cin >> data[i];
    }
    
    nth_element(data.begin(), data.begin() + M-1, data.end());

    cout << data[M-1];
    
    return 0;
}