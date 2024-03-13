#include <stdio.h>
int main()
{
    
    float sum=0,M=0,avg=0,a;
    scanf("%f",&a);//과목수
    float arr[1000];
    float arr2[1000];
    for(int k=0;k<a;k++)
    {
        scanf("%f",&arr[k]);
        if(k==0)
            M=arr[k];//처음값 최대
        else if(k!=0)
        {
            if(arr[k]>M)// 최대보다 클시 M
                M=arr[k];
        }
        
    }
    for(int j=0;j<a;j++)
    {
        arr2[j]=arr[j]/M*100;//새로운 값
        sum=sum+arr2[j];//합계
    }
    avg=sum/a;//평균
    printf("%.8f",avg);
    return 0;
}
