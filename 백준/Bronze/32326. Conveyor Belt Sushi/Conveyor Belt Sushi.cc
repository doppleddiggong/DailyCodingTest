#include <cstdio>
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   //r 3
   // g 4 
   // b 5

    int r, g, b;

    cin >> r;
    cin >> g;
    cin >> b;

    cout << r * 3 + g * 4 + b * 5 << '\n';
    return 0;
}