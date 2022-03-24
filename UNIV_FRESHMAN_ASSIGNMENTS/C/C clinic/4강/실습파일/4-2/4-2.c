#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void GetSumProduct(int x, int y, int* sum, int* product);
int main(void)
{
	int a, b;
	int res1, res2;
	printf("%d %d\n",&res1,&res2);
	while (1) {
		scanf_s("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		GetSumProduct(a, b, &res1, &res2);
		printf("%d+%d=%d\n", a, b, res1);
		printf("%d*%d=%d\n", a, b, res2);
	}
	return 0;
}
void GetSumProduct(int x, int y, int* sum, int* product)
{
	*sum = x + y;
	*product = x * y;
}





