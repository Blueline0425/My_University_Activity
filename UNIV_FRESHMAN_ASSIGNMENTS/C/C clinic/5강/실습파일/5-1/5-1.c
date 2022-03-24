#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE 7
void avg(int* arr, int* sum);
void expo(int* arr, int* arr2);
int main(void)
{
	int sum = 0;
	int arr[SIZE] = { 1,2,3,4,5,6,7 };
	int arr2[SIZE] = { 0, };
	printf("배열 원소의 값 :");
	for (int i = 0; i < SIZE; i++) {
		printf("%d  ", arr[i]);
	}


	avg(arr, &sum);
	printf("\n배열 원소의 평균: %d\n", sum);
	expo(arr, arr2);
	printf("배열 원소의 제곱 :");
	for (int i = 0; i < SIZE; i++) {
		printf("%d  ", arr2[i]);
	}

	return 0;
}
void avg(int* arr, int* sum) {
	for (int i = 0; i < SIZE; i++) {
		*sum += arr[i];
	}
	*sum /= SIZE;
}
void expo(int* arr, int* arr2) {
	for (int i = 0; i < SIZE; i++) {
		arr2[i] = arr[i] * arr[i];
	}
}






