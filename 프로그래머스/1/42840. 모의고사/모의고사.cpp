#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

std::vector<int> student1 = { 1, 2, 3, 4, 5 };
std::vector<int> student2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
std::vector<int> student3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

vector<int> solution(vector<int> answers) {

    std::vector<int> result(3, 0);

    int t1_idx = 0;
    int t2_idx = 0;
    int t3_idx = 0;

    for (int i = 0; i < answers.size(); i++)
    {
        int v1 = student1[i % student1.size() ];
        int v2 = student2[i % student2.size()];
        int v3 = student3[i % student3.size()];

        if (answers[i] == v1)
            result[0]++;
        if (answers[i] == v2)
            result[1]++;
        if (answers[i] == v3)
            result[2]++;
    }

    std::vector<int> answer;
    
	int max = *std::max_element( result.begin(), result.end()); 
    for(int i =0; i < result.size(); i++)
    {
        if (result[i] == max)
            answer.push_back(i + 1);
	}

    return answer;
}