#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&c);
    for(int i=0;i<c;i++)
    {
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d + %d = %d\n",i+1,a,b,a+b);
        
        
    }
    return 0;
    
    
}
