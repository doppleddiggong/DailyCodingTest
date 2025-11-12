#include <stdio.h>
#include <set>
#include <algorithm>

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b, &c);
    
    std::set<int> s;
    
    s.insert(a);
    s.insert(b);
    s.insert(c);
    
    std::vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(), v.end());
    
    int price;
    if( s.size() == 1 )
    {
        price = 10000 + v[0] * 1000;
    }
    else if( s.size() == 2 )
    {
        price = 1000 + v[1] * 100;
    }
    else if( s.size() == 3 )
    {
        price = v[2] * 100;
    }
    
    printf("%d", price);  
}