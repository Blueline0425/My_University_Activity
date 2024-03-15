#include <stdio.h>

int reverse_num(int x);
int main(void){
    
    int a,b;
    scanf("%d %d",&a,&b);
    int d1,d2,d3;
    int c=a;
    int d=b;
    
    d1=a%10-b%10;
    c=a/10;
    d=b/10;
    d2=c%10-d%10;
    c/=10;
    d/=10;
    d3=c%10-d%10;
    
    if(d1>0){
        printf("%d",reverse_num(a));
    }
    else if(d1==0){
        if(d2>0){
            printf("%d",reverse_num(a));
        }
        else if(d2==0){
            if(d3>0){
                printf("%d",reverse_num(a));
            }
            else{
                printf("%d",reverse_num(b));
            }
        }
        else{
           printf("%d",reverse_num(b));
        }
    }
    else{
        printf("%d",reverse_num(b));
    }
}

int reverse_num(int x){
    int a=x;
    int n1,n2,n3;
    
    n3=a%10;
    a/=10;
    n2=a%10;
    a/=10;
    n1=a%10;
    
    return (n3*100+n2*10+n1);
}
