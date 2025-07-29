#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

std::unordered_map<string, int> map;

vector<int> solution(int n, vector<string> words) {

    std::unordered_map<string, int> map;

    char last_char;

    for (int i = 0; i < words.size(); i++)
    {
        auto verse = words[i];

        if (i != 0)
        {
            // 끝말 잇기 실패
            if (last_char != verse[0])
                return { (i % n) + 1, (i / n) + 1 };
        }

        // 중복 단어 처리
        map[verse]++;
        if (map[verse] > 1)
			return { (i % n) + 1, (i / n) + 1 };

        last_char = verse[verse.size() - 1];
    }

    return { 0,0 };
}