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
		printf("\n*******�޴�*******\n1.��\n2.����\n3.����\n********************\n�޴��� �����ϼ���: ");
		scanf_s("%d", &i);
		switch (i)
		{
		case 1:
			printf("�󶼸� �����߽��ϴ�.\n");
			continue;
		case 2:
			printf("������ �����߽��ϴ�.\n");
			continue;
		case 3:
			printf("�޴� ���α׷��� �����մϴ�.\n����Ϸ��� �ƹ� Ű�� �����ʽÿ�...");
			k = 0;
			break;
		default:
			continue;
		}



	}while (k);
		
}


