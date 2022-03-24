#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <time.h>
int sum(int a);
void main() {
    int a;
    printf("Enter a number between 1 and 9999: ");
    scanf("%d", &a);
    printf("The sum of the digits of the number %d is %d", a, sum(a));
}
int sum(int a) {
    int sum_of_digits = 0;
    while(a>0){
    
        sum_of_digits += a % 10;
        a /= 10;
    
    }
    return sum_of_digits;

}