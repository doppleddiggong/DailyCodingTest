#include <iostream>
#include <ctime>
#include <iomanip>
    
using namespace std;

int main()
{
    time_t now = std::time(nullptr);
    tm* t = localtime(&now);
    
    cout << std::put_time(t, "%Y") << '\n';
    cout << std::put_time(t, "%m") << '\n';
    cout << std::put_time(t, "%d") << '\n';
    
    return 0;
}