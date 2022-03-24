#define _CRT_SECURE_NO_WARNINGS//매우중요 or scanf_s사용
#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <time.h>

void main() {
	char a='a';
	int b=10;
	double c=3.14;
	char* p1; int* p2;double *p3;
	p1 = &a;
	p2 = &b;
	p3 = &c;
	*p1 += 1;
	*p2 += 1;
	*p3 += 1;
	printf("%c %d %lf %p %p %p", a, b, c, p1, p2, p3);
}

