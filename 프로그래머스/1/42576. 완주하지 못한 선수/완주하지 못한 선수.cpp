#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    std::unordered_map<std::string, int> participant_map;
    for (const auto& name : participant)
        participant_map[name]++;

    for (const auto& name : completion)
    {
        if( participant_map.find(name) != participant_map.end() && 
            participant_map[name] > 0)
        {
            participant_map[name]--;

            if (participant_map[name] == 0)
				participant_map.erase(name);    
		}
    }

    return participant_map.begin()->first;
}