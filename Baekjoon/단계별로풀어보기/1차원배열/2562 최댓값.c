#include <stdio.h>
int main()
{
    int num[9],max,j;
    for(int k=0;k<9;k++)
    {
        scanf("%d",&num[k]);
        if(k==0)
        {
            max=num[k];
            j=k+1;
        } 
        else if(k!=0)
            if(num[k]>max)
            {
                max=num[k];
                j=k+1;
            }
        
    }
    printf("%d\n%d",max,j);
    return 0;
    
    
}
