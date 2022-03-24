#define _CRT_SECURE_NO_WARNINGS//매우중요 or scanf_s사용
#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <time.h>
void call_by_value(int num);
void call_by_reference(int*num);
void main() {
	int a;
	printf("The difference between \"call by reference\" and\n \"call by value\" \nInput an integer : ");
	scanf("%d", &a);
	printf("Before the call_by_value function :\nvalue %d, Address %p\n", a, &a);
	call_by_value(a);
	printf("After the call_by_value function :\nvalue %d, Address %p\n", a, &a);
	printf("Before the call_by_reference function :\nvalue %d, Address %p\n", a, &a);
	call_by_reference(&a);
	printf("After the call_by_reference function :\nvalue %d, Address %p\nPress any key to continue", a, &a);
}
void call_by_value(int num) {
	num += 10;
	printf("In the call_by_value function :\nvalue %d, Address %p\n", num, &num);
	
}
void call_by_reference(int* num) {
	*num += 10;
	printf("In the call_by_reference function :\nvalue %d, Address %p\n", *num, num);
		
}

