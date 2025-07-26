#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    std::sort(phone_book.begin(), phone_book.end());

    for (auto it = phone_book.begin(); it != phone_book.end(); )
    {
        auto prev_it = it++;
        if (it == phone_book.end())
            return true;

        string first = (*prev_it);
        string second = (*it);
        string third = second.substr(0, first.length());
        if (first == third)
        {
            return false;
        }
    }

    return true;
}