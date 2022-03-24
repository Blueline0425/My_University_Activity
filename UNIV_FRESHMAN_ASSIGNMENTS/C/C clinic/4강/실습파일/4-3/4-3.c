#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void Divide(int x, int y, int* quotient, int* remainder);
int main(void)
{
	int a, b;
	int res1, res2;
	printf("%d %d\n",&res1,&res2);
	while (1) {
		printf("나눗셈을 위한 분자를 입력하세요 :");
		scanf_s("%d", &a);
		printf("나눗셈을 위한 분모를 입력하세요 :");
		scanf_s("%d", &b);
		if (a == 0 && b == 0) {
			//a,b 각 0 입력시 종료
			break;
		}
		if (b == 0) {
			printf("0으로 나눌 수 없습니다.\n\n");
			continue;
		}
		Divide(a, b, &res1, &res2);
		printf("%d / %d : 몫은 %d이고 나머지는 %d입니다.\n\n", a, b, res1,res2);
	}
	return 0;
}
void Divide(int x, int y, int* quotient, int* remainder)
{
	*quotient = x/y;
	*remainder = x%y;
}





