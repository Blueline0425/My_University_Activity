#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void odd_even(int x);
void calculate();
void main() {
	int i = 1;
	int menu;
	int integer;
	do {
		printf("*******�޴�*******\n");
		printf("1. Ȧ�� ¦�� ����\n");
		printf("2. ��Ģ����\n");
		printf("3. ����\n");
		printf("********************\n");
		printf("�޴��� �����ϼ��� : ");
		scanf_s("%d", &menu);
		switch (menu)
		{
		case 1:
			printf("Ȧ¦�� ������ ������ �Է����ּ��� : ");
			scanf_s("%d", &integer);
			odd_even(integer);
			break;

		case 2:
			calculate();
			break;

		case 3:
			i = 0;
			printf("�޴� ���α׷��� �����մϴ�.\n����Ϸ��� �ƹ� Ű�� �����ʽÿ�...");
			break;


		default:
			break;
		}

	} while (i);
}
void odd_even(int x) {
	if (x % 2 == 0) {
		printf("%d��(��) ¦���Դϴ�.\n\n", x);
	}
	else {
		printf("%d��(��) Ȧ���Դϴ�.\n\n", x);
	}
}
void calculate() {
	int a, b;
	char c;
	printf("������ �Է��Ͻÿ�(��: 2 + 5)\n>>");
	scanf_s("%d %c %d",&a ,&c ,1,&b );
	switch (c)
	{
	case'+':
		printf("%d + %d = %d\n", a, b, a + b);
		break;
	case'-':printf("%d - %d = %d\n", a, b, a - b);
		break;
	case'*':printf("%d * %d = %d\n", a, b, a * b);
		break;
	case'/':printf("%d / %d = %d\n", a, b, a / b);
		break;

	default:printf("�������� �ʴ� �������Դϴ�.\n");
		break;
	}
}



