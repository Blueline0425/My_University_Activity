#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main() {
	int i;
	printf("���ϴ� �� �ֻ����� ���� �Է��ϼ��� : ");
	scanf_s("%d", &i);
	printf("\n\n�� �ֻ��� ���� %d��(��) �Ǵ� ����� ���� ã�� ���ϴ�.\n",i);
	printf("--------------\n�ֻ���A  �ֻ���B\n--------------\n");


	for (int a = 1; a < 7; a++) {
		for (int b = 1; b < 7; b++) {
			if (a + b == i) {
				printf("%d        %d\n", a, b);
			}
		}
   }
}


