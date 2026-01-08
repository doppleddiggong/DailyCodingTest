#include <iostream>

using namespace std;

int main()
{
    int N,A,B;
    
    cin >> N >> A >> B;
    
    // A 는 버스 타고 집
    // B 는 다음 열차
    // N 은 정류장에서 전철역까지
    // B-N 은 N분동안 걸어서 지하철역 도착후 B-N만큼 기다리면 열차온다
    int B_N = B-N;
    
    if( A < B)
    {
        cout << "Bus";
    }
    else if( A > B )
    {
        cout << "Subway";
    }
    else
    {
        cout << "Anything";
    }
}
