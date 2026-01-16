#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    for(int i = 0; i < T; i++ )
    {
        int N;
        cin >> N;

        int SUM_C = 0;
        float SUM_G = 0.0f;

        for (int n = 0; n < N; n++)
        {
            int C;
            float G;

            cin >> C;
            cin >> G;


            SUM_C += C;
            SUM_G += C * G;
        }

        float roundedUp = std::ceil((SUM_G / SUM_C) * 10) / 10.0f;

        cout << SUM_C << " " << roundedUp << '\n';
    }



    return  0;
}