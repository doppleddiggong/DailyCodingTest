#include <cstdio>
#include <iostream>
#include <cstring>
#include <map>

using namespace std;

map<string, string> room
{
    {"Algorithm","204"},
    {"DataAnalysis","207"},
    {"ArtificialIntelligence","302"},
    {"CyberSecurity","B101"},
    {"Network","303"},
    {"Startup","501"},
    {"TestStrategy","105"}
};

int main()
{
    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        string className;
        cin >> className;

        cout << room[className] << endl;
    }

    return 0;
}