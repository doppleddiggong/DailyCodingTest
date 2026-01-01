#include <cstdio>
#include <iostream>

using namespace std;

//시험 점수를 입력받아 90 ~ 100점은 A, 
// 80 ~ 89점은 B, 
// 70 ~ 79점은 C, 
// 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

int main()
{
    int score;
    cin >> score;
    
    if( 90 <= score )
        cout << "A" << endl;
    else if( 80 <= score )
        cout << "B" << endl;
    else if( 70 <= score )
        cout << "C" << endl;
    else if( 60 <= score )
        cout << "D" << endl;
    else
        cout << "F" << endl;
}