#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
void check(int n,int *k,int *c);
int main(void)
{
	int n;
	srand(time(NULL));
	n = rand() % 100 + 1;
	int k = 101;
	int c = 0;
	printf(">>컴퓨터가 숨긴 수를 맞히는 게임입니다.\n\n");
	printf("=============================================\n");
	check(n,&k,&c);
	printf("=============================================\n\n");
	printf(" 컴퓨터가 숨긴 %d을(를) %d번 만에 맞혔습니다.", n, c);
	

}
void check(int n,int *k,int *c) {
	int a = 1;
	int b = 100;
	while (n!=*k) {
		if (*k == 101) {
			printf("%d ~ %d 중의 값입니다. 얼마일까요? ",a,b);
			scanf_s("%d", k);
			(*c)++;
		}
		else {
			//수의 범위 표시
			if (*k >n ) {
				b = *k - 1;
			}
			else {
				a = *k + 1;
			}
			//
			printf("%d ~ %d 중의 값입니다. 얼마일까요? ",a,b);
			scanf_s("%d", k);
			(*c)++;
		}
	}


}









