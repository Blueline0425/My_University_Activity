#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    
    for(int b=1;b<=a;b++)
    {
        
            for(int j=0;j<a-b;j++)
                printf(" ");
            for(int k=0;k<b;k++)
                printf("*");
            
        
        printf("\n");
        
    }
    return 0;
}
