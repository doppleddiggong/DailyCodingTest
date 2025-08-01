#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;

    string findNumber;

    for (int pos = 0; pos < s.size(); pos++)
    {
		char c = s[pos];

        if (isdigit(c))
            findNumber += c;
        else
        {
            string find = s.substr(pos, 3);
            if (find == "zer")
            {
                findNumber += '0';
                pos += 3;
            }
            else if (find == "one")
            {
                findNumber += '1';
                pos += 2;
            }
            else if (find == "two")
            {
                findNumber += '2';
                pos += 2;
            }
            else if (find == "thr")
            {
                findNumber += '3';
                pos += 4;
            }
            else if (find == "fou")
            {
                findNumber += '4';
                pos += 3;
            }
            else if (find == "fiv")
            {
                findNumber += '5';
                pos += 3;
            }
            else if (find == "six")
            {
                findNumber += '6';
                pos += 2;
            }
            else if (find == "sev")
            {
                findNumber += '7';
                pos += 4;
            }
            else if (find == "eig")
            {
                findNumber += '8';
                pos += 4;
            }
            else if (find == "nin")
            {
                findNumber += '9';
                pos += 3;
            }
        }
    }

    return std::stoi(findNumber);
}