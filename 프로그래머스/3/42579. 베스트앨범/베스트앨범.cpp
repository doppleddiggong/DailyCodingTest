#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
   // 장르, 토탈 재생횟수
    std::unordered_map<string, int> genres_play_count;
    // 장르, 플레이수, 인덱스
    std::unordered_map<string, std::multimap<int, int, std::greater<int>>> genres_play;

    for (int i = 0; i < genres.size(); i++)
    {
        genres_play[ genres[i] ].emplace( plays[i], i);
        genres_play_count[genres[i]] += plays[i];
    }

    // 장르, 토탈 재생횟수 정렬
    std::vector< std::pair<string, int>> genres_sort(genres_play_count.begin(), genres_play_count.end());
    std::sort(genres_sort.begin(), genres_sort.end(), 
        [](const pair<string, int>& a, const pair<string, int>& b)
        { 
            return a.second > b.second;
        });

    vector<int> answer;
    for (auto& gen : genres_sort)
    {
        int song_count = min(2, (int)genres_play[gen.first].size());
        for(auto song : genres_play[gen.first])
        {
            if(song_count > 0)
            {
                answer.push_back(song.second);
                song_count--;
            }
        }
    }

    return answer;
}