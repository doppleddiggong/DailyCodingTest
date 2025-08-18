#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
     for (int i = 0; i < n; i++)
     {
         int pow_value = pow(i, 2);
         if (pow_value > n)
         {
             return 2;
         }
         else if (pow_value == n)
         {
             return 1;
         }
     }

     return 2;
}