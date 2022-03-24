#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main() {
	int s[5];
	double avg=0;
	printf("소프트웨어 교과의 점수를 입력하세요. (5명)\n==================================\n");
	for (int i = 0; i < 5; i++) {
		printf("[%d]번 :",i+1);
		scanf_s("%d", &s[i]);
		avg += s[i];
	}
	printf("소프트웨어 교과의 평균점수 : %lf", avg/5.0);
		
}


