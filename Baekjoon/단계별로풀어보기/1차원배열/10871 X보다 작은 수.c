#include <stdio.h>
int main()
{
    int A,N,X;
    scanf("%d %d",&N,&X);
    
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A);
        if(A<X)
            printf("%d\n",A);
    }
    return 0;
    
    
}
