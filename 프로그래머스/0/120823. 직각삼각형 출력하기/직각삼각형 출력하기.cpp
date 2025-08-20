#include <iostream>

using namespace std;

void solution(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        std::cout << endl;
    }
}

int main(void) {
    int n;
    cin >> n;
    solution(n);
    
    return 0;
}

