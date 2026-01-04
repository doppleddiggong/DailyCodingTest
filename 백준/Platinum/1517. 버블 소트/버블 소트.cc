#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


static vector<int> A;
static vector<int> tmp;
static long long result;

void merge_sort(int s, int e)
{
    // 더이상 쪼갤수 없는 단계까지 쪼갰다
    if (e - s < 1)
        return;

    // 쪼개자
    int mid = s + (e - s) / 2;

    merge_sort(s, mid);
    merge_sort(mid+1, e);


    // 합치자.
    for (int i = s; i <= e; i++)
        tmp[i] = A[i];

    int output = s;
    int left = s;
    int right = mid+1;

    // left와, right를 정렬한다
    // left와 right중 하나가 끝날떄까지
    while (left <= mid && right <= e)
    {
        if (tmp[left] <= tmp[right])
        {
            // 작은것이 들어온다
            A[output++] = tmp[left++];
        }
        else
        {
            A[output] = tmp[right];
            result = result + (right-output);
            output++;
            right++;
        }
    }

    // 끝난것 기준으로 다시 합친다
    while (left <= mid)
    {
        A[output++] = tmp[left++];
    }

    while (right <= e)
    {
        A[output++] = tmp[right++];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    A.resize(N);
    tmp.resize(N);

    for(int i = 0; i < N; i++ )
    {
        cin >> A[i];
    }

    result = 0;
    merge_sort(0, A.size() - 1);


    cout << result;

    return 0;
}