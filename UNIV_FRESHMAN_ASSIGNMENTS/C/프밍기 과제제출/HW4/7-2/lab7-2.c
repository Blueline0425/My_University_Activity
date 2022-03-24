#define _CRT_SECURE_NO_WARNINGS//매우중요 or scanf_s사용
#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <time.h>

void main() {
	int a = 10, b = 20;
	int* p1, * p2;
	int temp;
	p1 = &a;
	p2 = &b;
	//exchange address
	temp = p1;
	p1 = p2;
	p2 = temp;

	printf("%d %d %p %p", a, b, p1, p2);
}

