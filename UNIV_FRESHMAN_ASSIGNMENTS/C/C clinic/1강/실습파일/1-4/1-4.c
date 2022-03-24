#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main() {
	int i;
	int k = 1;
	do {
		printf("\n*******메뉴*******\n1.라떼\n2.우유\n3.종료\n********************\n메뉴를 선택하세요: ");
		scanf_s("%d", &i);
		switch (i)
		{
		case 1:
			printf("라떼를 선택했습니다.\n");
			continue;
		case 2:
			printf("우유를 선택했습니다.\n");
			continue;
		case 3:
			printf("메뉴 프로그램을 종료합니다.\n계속하려면 아무 키나 누르십시오...");
			k = 0;
			break;
		default:
			continue;
		}



	}while (k);
		
}


