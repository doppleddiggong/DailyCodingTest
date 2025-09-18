#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string a_b;
    a_b += std::to_string(a);
    a_b += std::to_string(b);

    int ab = std::atoi(a_b.c_str());
    int c = 2*a*b;
    return ab > c ? ab : c;
}