#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, Money;
    cin >> N >> Money;
    
    vector<int> data(N);
    
    int sum = 0;
    for(int i = 0; i < N; i++ )
    {
        int V;
        cin >> V;
        data[i] = V;
        sum += V;
    }
    
    int price = Money / sum;
   
    for(int i = 0; i < N; i++ )
    {
        cout << price * data[i] << '\n';
    }
    return 0;
}