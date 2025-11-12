#include <cstdio>
int main() 
{
    int M, F; 
    do
    {
        std::scanf("%d%d", &M, &F); 
        
        if( M == F && F == 0)
            break;
        
        std::printf("%d\n", M+F); 
    } 
    while( true );
}