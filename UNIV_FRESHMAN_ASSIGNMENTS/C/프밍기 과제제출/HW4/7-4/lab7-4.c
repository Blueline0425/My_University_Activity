#define _CRT_SECURE_NO_WARNINGS//매우중요 or scanf_s사용
#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <time.h>
void math(int* num1, int* num2, int* add, int* multiply);
void main() {
	int a, b,add,mul;
	printf("Input two integers : ");
	scanf("%d %d", &a, &b);
	math(&a,&b,&add,&mul);
	printf("Result: sum = %d, product = %d\nPress any key to continue", add, mul);
 }
void math(int* num1, int* num2, int* add, int* multiply) {
	*add = *num1 + *num2;
	*multiply = *num1 * *num2;
}


