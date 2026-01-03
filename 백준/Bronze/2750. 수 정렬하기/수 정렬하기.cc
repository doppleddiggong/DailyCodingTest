#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> data;
    for(int i = 0; i < N; i++ )
    {
        int V;
        cin >> V;
        
        data.push_back(V);
    }
    
    sort(data.begin(), data.end());
    
    for(auto c : data )
    {
        cout << c << '\n';
    }
    return 0;
}
