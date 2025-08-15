#include <string>
#include <vector>

using namespace std;

int solution(string s) {

    char first = ' ';
    int first_count = 0;
    int other_count = 0;
    int first_pos = 0;

    vector<string> find;

    for(int i = 0; i < s.size(); i++ )
    {
        char c = s[i];

        if (first == ' ')
        {
            first = c;
            first_count = 1;
            first_pos = i;

            other_count = 0;
        }
        else if (first == c)
        {
            first_count += 1;
        }
        else
        {
            other_count++;
        }

        if (first_count == other_count)
        {
            string cut = s.substr(first_pos, i+1- first_pos);
            find.push_back(cut);
            first = ' ';
            first_pos = 0;
        }
    }

    if (first_pos > 0)
    {
        string cut = s.substr(first_pos);
        find.push_back(cut);
    }
    
    if (find.size() == 0)
    {
        return 1;
    }

    return find.size();
}