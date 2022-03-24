#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main() {
	int i;
	printf("원하는 두 주사위의 합을 입력하세요 : ");
	scanf_s("%d", &i);
	printf("\n\n두 주사위 합이 %d이(가) 되는 경우의 수를 찾아 봅니다.\n",i);
	printf("--------------\n주사위A  주사위B\n--------------\n");


	for (int a = 1; a < 7; a++) {
		for (int b = 1; b < 7; b++) {
			if (a + b == i) {
				printf("%d        %d\n", a, b);
			}
		}
   }
}


