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
		printf("*******메뉴*******\n");
		printf("1. 홀수 짝수 구분\n");
		printf("2. 사칙연산\n");
		printf("3. 종료\n");
		printf("********************\n");
		printf("메뉴를 선택하세요 : ");
		scanf_s("%d", &menu);
		switch (menu)
		{
		case 1:
			printf("홀짝을 구분할 정수를 입력해주세요 : ");
			scanf_s("%d", &integer);
			odd_even(integer);
			break;

		case 2:
			calculate();
			break;

		case 3:
			i = 0;
			printf("메뉴 프로그램을 종료합니다.\n계속하려면 아무 키나 누르십시오...");
			break;


		default:
			break;
		}

	} while (i);
}
void odd_even(int x) {
	if (x % 2 == 0) {
		printf("%d은(는) 짝수입니다.\n\n", x);
	}
	else {
		printf("%d은(는) 홀수입니다.\n\n", x);
	}
}
void calculate() {
	int a, b;
	char c;
	printf("수식을 입력하시오(예: 2 + 5)\n>>");
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

	default:printf("지원되지 않는 연산자입니다.\n");
		break;
	}
}



