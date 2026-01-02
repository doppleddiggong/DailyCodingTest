#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> ans(N);
    
    for (int i = 0; i < N; i++)
        cin >> A[i];

    stack<int> s;

    for (int i = N - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= A[i])
            s.pop();

        if (s.empty())
            ans[i] = -1;
        else
            ans[i] = s.top();

        s.push(A[i]);
    }

    for (int i = 0; i < N; i++) {
        cout << ans[i] << " ";
    }

    return 0;
};