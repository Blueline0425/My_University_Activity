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
		printf("�������� ���� ���ڸ� �Է��ϼ��� :");
		scanf_s("%d", &a);
		printf("�������� ���� �и� �Է��ϼ��� :");
		scanf_s("%d", &b);
		if (a == 0 && b == 0) {
			//a,b �� 0 �Է½� ����
			break;
		}
		if (b == 0) {
			printf("0���� ���� �� �����ϴ�.\n\n");
			continue;
		}
		Divide(a, b, &res1, &res2);
		printf("%d / %d : ���� %d�̰� �������� %d�Դϴ�.\n\n", a, b, res1,res2);
	}
	return 0;
}
void Divide(int x, int y, int* quotient, int* remainder)
{
	*quotient = x/y;
	*remainder = x%y;
}





