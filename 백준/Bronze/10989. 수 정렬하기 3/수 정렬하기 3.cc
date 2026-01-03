#include <iostream>
#include <algorithm>

using namespace std;

int A[100001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    
    for(int i = 0 ; i < N; i++ )
    {
        int V;
        cin >> V;

        A[V]++;
    }
    
    for( int i = 1; i <= 10000; i++ )
    {
        if( A[i] == 0 )
            continue;
        for(int n = 0; n < A[i]; n++ )
        {
            cout << i << '\n';
        }
    }
    
    return 0;
}