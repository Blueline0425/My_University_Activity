#define _CRT_SECURE_NO_WARNINGS//매우중요 or scanf_s사용
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//#include <time.h>
int fibo(int);
void main() {
    int i, count;
    scanf("%d", &count);
    for (i = 0; i < count; i++)
        printf("%d ", fibo(i));
}
int fibo(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    else
        return (fibo(n - 1) + fibo(n - 2));
}

