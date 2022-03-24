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
	printf("첫 번째 점의 X,Y좌표를 입력하세요:");
	scanf_s("%lf %lf", &x1, &y1);
	printf("두 번째 점의 X,Y좌표를 입력하세요:");
	scanf_s("%lf %lf", &x2, &y2);
	length(x1,y1,x2,y2,&d);
	printf("두 점 사이의 거리 : %lf", d);
}
void length(double x1, double y1, double x2, double y2,double* d) {
	
	*d = sqrt(  pow((x1 - x2), 2) + pow((y1 - y2), 2)   );
}







