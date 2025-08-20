#include <string>
#include <vector>

using namespace std;

 int solution(int hp) {

     int BIG = 5;
     int MIDDLE = 3;
     int SMALL = 1;

     int big = 0;
     int middle = 0;
     int small = 0;

     big = hp / BIG;
     hp -= big*BIG;

     middle = hp / MIDDLE;
     hp -= middle * MIDDLE;

     small = hp / SMALL;
     hp -= small * SMALL;

     return big + middle + small;
 }