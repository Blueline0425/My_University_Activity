#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main() {
	int s[5];
	double avg=0;
	printf("����Ʈ���� ������ ������ �Է��ϼ���. (5��)\n==================================\n");
	for (int i = 0; i < 5; i++) {
		printf("[%d]�� :",i+1);
		scanf_s("%d", &s[i]);
		avg += s[i];
	}
	printf("����Ʈ���� ������ ������� : %lf", avg/5.0);
		
}


