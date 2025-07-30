#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

struct EventRecord
{
    string uid;
    string event;

    EventRecord( string _uid, string _event )
    {
        uid = _uid;;
        event = _event;
    }


    string GetMessage(string name)
    {
        if (event == "Enter")
            return name + "님이 들어왔습니다.";
        else if (event == "Leave")
            return name + "님이 나갔습니다.";
    }
};

std::unordered_map<string, string> map;

vector<string> solution(vector<string> record) {

    std::vector<EventRecord> list;

    for (auto c : record)
    {
        auto split_pos = c.find(' ');
        auto split_pos2 = c.find(' ', split_pos+1);

        string event = c.substr(0, split_pos);
        string uid = c.substr(split_pos+1, split_pos2 - split_pos-1);
        string name = c.substr(split_pos2+1);

        list.push_back(EventRecord(uid, event));

        if (event != "Leave")
            map[uid] = name;
    }

    vector<string> answer;

    for (auto data : list)
    {
        if (data.event == "Change")
            continue;

        answer.push_back( data.GetMessage(map[data.uid]) );
    }

    return answer;
}