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
	printf(">>��ǻ�Ͱ� ���� ���� ������ �����Դϴ�.\n\n");
	printf("=============================================\n");
	check(n,&k,&c);
	printf("=============================================\n\n");
	printf(" ��ǻ�Ͱ� ���� %d��(��) %d�� ���� �������ϴ�.", n, c);
	

}
void check(int n,int *k,int *c) {
	int a = 1;
	int b = 100;
	while (n!=*k) {
		if (*k == 101) {
			printf("%d ~ %d ���� ���Դϴ�. ���ϱ��? ",a,b);
			scanf_s("%d", k);
			(*c)++;
		}
		else {
			//���� ���� ǥ��
			if (*k >n ) {
				b = *k - 1;
			}
			else {
				a = *k + 1;
			}
			//
			printf("%d ~ %d ���� ���Դϴ�. ���ϱ��? ",a,b);
			scanf_s("%d", k);
			(*c)++;
		}
	}


}









