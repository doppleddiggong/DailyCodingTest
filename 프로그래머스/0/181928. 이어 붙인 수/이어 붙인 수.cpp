#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string odd;
    string even;

    for (int n : num_list)
    {
        if (n % 2 == 0)
            even += std::to_string(n);
        else
            odd+= std::to_string(n);
    }

    return std::stoi(odd) + std::stoi(even);
}