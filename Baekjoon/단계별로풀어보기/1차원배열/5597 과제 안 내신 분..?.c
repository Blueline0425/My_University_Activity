#include <stdio.h>

int main()
{
    
    int i,k,r=0;
    int arr[30];
    for(i=0;i<30;i++)
	{
		arr[i]=0;
	}
    for(i=0;i<28;i++){
        scanf("%d",&k);
        arr[k-1]=1;
    }
    for(i=0;i<30;i++){
        
        if(arr[i]!=1){
            printf("%d\n",i+1);
            r+=1;
            if(r==2)
                break;
        }
    }
    
    
    return 0;
}
