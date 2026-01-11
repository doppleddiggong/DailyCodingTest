#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int fourth_number = 0;

    for (int i = 0; i < 3; i++)
    {
        string value;
        cin >> value;

        if (value == "Fizz" || value == "Buzz" || value == "FizzBuzz" )
        {
        }
        else
        {
            // 숫자 타입
            int val = std::stoi(value);
            fourth_number = val + 3 - i;
        }
    }

    if (fourth_number % 3 == 0 &&
        fourth_number % 5 == 0)
    {
        cout << "FizzBuzz";
    }
    else if (fourth_number % 3 == 0 )
    {
        cout << "Fizz";
    }
    else if (fourth_number % 5 == 0)
    {
        cout << "Buzz";
    }
    else
    {
        cout << fourth_number;
    }

    return 0;
}