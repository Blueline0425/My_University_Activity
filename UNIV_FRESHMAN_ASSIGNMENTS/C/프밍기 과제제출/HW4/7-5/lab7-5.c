#define _CRT_SECURE_NO_WARNINGS//매우중요 or scanf_s사용
#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <time.h>
void swap(int*a, int*b);
void main(void) {
	int array[10];
	int i, num1, num2;
	for (i = 0; i < 10; i = i + 1)
		array[i] = i;
	printf("Welcome to the Swap World!\n");
	while (1) {
		printf("** Array Contents **\n");
		for (i = 0; i < 10; i = i + 1)
			printf("array[%d] %d\n", i, array[i] * 10);
		printf("Select two indexes for swap: ");
		scanf("%d %d", &num1, &num2);
		if (num1 < 0)
			break;
		swap(&array[num1], &array[num2]);
	}
}
void swap(int*a, int*b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}



