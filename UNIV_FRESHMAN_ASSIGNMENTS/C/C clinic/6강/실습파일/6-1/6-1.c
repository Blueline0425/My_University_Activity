#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void length(double x1, double y1, double x2, double y2,double* d);
int main(void)
{
	double x1, y1, x2, y2;
	double d = 0;
	printf("ù ��° ���� X,Y��ǥ�� �Է��ϼ���:");
	scanf_s("%lf %lf", &x1, &y1);
	printf("�� ��° ���� X,Y��ǥ�� �Է��ϼ���:");
	scanf_s("%lf %lf", &x2, &y2);
	length(x1,y1,x2,y2,&d);
	printf("�� �� ������ �Ÿ� : %lf", d);
}
void length(double x1, double y1, double x2, double y2,double* d) {
	
	*d = sqrt(  pow((x1 - x2), 2) + pow((y1 - y2), 2)   );
}







