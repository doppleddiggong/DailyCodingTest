#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    string N;
    cin >> N;
    cin.ignore();

    string AABBAA;
    getline(cin, AABBAA);

    int A = 0;
    int B = 0;

    stringstream ss(AABBAA);
    char c;

    while (ss >> c)
    {
        if (c == 'A')
            A++;
        else
            B++;
    }

    if (A > B)
    {
        cout << "A";
    }
    else if (B > A)
    {
        cout << "B";
    }
    else
    {
        cout << "Tie";
    }

    return 0;
}