#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void Swap();
int a = 10;
int b = 20;
int main() {
	
	printf("Swap ���� a = %d, b = %d\n", a, b);
	Swap();
	printf("Swap ���� a = %d, b = %d\n", a, b);
	return 0;
}
void Swap() {
	int temp;
	temp = a;
	a = b;
	b = temp;
}




