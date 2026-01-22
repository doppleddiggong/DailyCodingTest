#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;

    bitset<100000> A(a);
    bitset<100000> B(b);

    cout << (A & B) << '\n';
    cout << (A | B) << '\n';
    cout << (A ^ B) << '\n';
    cout << (~A) << '\n';
    cout << (~B) << '\n';

    return 0;
}