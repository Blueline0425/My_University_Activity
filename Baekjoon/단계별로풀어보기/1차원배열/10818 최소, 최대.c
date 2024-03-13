#include <stdio.h>
int main()
{
    int n,max,min;
    scanf("%d",&n);
    int i[n];
    for(int k=0;k<n;k++)
    {
        scanf("%d",&i[k]);
        
        if(k==0)
        {
            max=i[k];
            min=i[k];
        }
        else if(k!=0)
        {   if(i[k]>max)
                max=i[k];
            else if(i[k]<min)
                min=i[k];
        }
            
        
    }
    printf("%d %d",min,max);
    return 0;
    
}
