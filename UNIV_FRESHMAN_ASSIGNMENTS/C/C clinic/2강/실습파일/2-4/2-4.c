#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE_1 5
#define SIZE_2 7
void main() {
	char name[SIZE_1][SIZE_2] = {"김가천","홍길동","홍길순","전지현","남상미"};
	int score[SIZE_1] = {80,90,70,60,100};
	float sum=0;
	printf("====================================\n	  학생명	   성적\n====================================\n");
	for (int i = 0; i < SIZE_1; i++) {
		printf("	  %s	    %d\n", name[i], score[i]);
		sum += score[i];
	}
	printf("====================================\n소프트웨어 교과의 평균점수 : %0.2f\n====================================", round(sum / SIZE_1));
	
	
		
}


