#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int page;
    while (true)
    {
        cin >> page;

        if( page == 0 )
            break;

        int lost;
        cin >> lost;


        for (int i = 0; i < page; i+= 4 )
        {
            vector<int> pageIndex;
            pageIndex.push_back(i+1);
            pageIndex.push_back(i+1+1);

            pageIndex.push_back(page - (i + 1));
            pageIndex.push_back(page - i);


            std::sort(pageIndex.begin(), pageIndex.end());

            if ( std::find(pageIndex.begin(), pageIndex.end(), lost ) != pageIndex.end())
            {
                for (auto item : pageIndex )
                {
                    if (item == lost)
                        continue;

                    cout << item << " ";
                }

                cout << endl;;
            }
        }
    }



    return  0;
}