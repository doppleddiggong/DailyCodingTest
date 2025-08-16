#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
      vector<int> st;
      for (auto n : ingredient )
      {
          st.push_back(n);

          if (st.size() >= 4)
          {
              if (st[st.size() - 4] == 1 &&
                  st[st.size() - 3] == 2 &&
                  st[st.size() - 2] == 3 &&
                  st[st.size() - 1] == 1)
              {
                  answer++;
                  st.resize(st.size() - 4);
              }
          }

      }
    return answer;
}