#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#define STUDENT 7 // 학생수
#define N 10 // 문항수
void score(int answer[N],int paper[STUDENT][N]);
int main(void)
{
	int answer[N] = { 1, 3, 2, 3, 4, 2, 3, 1, 4, 2 };
	int paper[STUDENT][N] = { { 1, 3, 2, 3, 4, 2, 3, 1, 3, 2 },
{ 2, 3, 2, 4, 3, 2, 3, 1, 4, 2 },
{ 4, 2, 2, 3, 4, 2, 3, 1, 4, 2 },
{ 1, 3, 2, 3, 3, 2, 3, 4, 4, 2 },
{ 1, 3, 2, 3, 4, 2, 3, 3, 4, 2 },
{ 1, 1, 1, 4, 4, 3, 3, 2, 4, 3 },
{ 1, 3, 2, 3, 4, 2, 3, 1, 4, 2 }, };
	printf("==============================================\n");
	printf(" 문항  1  2  3  4  5  6  7  8  9  10  점수\n");
	printf("==============================================\n");
	score(answer, paper);
	

}
void score(int answer[N], int paper[STUDENT][N]) {
	int g = 7;
	int s[STUDENT] = {0,};
	int r[STUDENT] = {0,};
	//점수 계산
	for (int i = 0; i < STUDENT; i++) {
		
		printf(" %d번  ",i+1);
		for (int d = 0; d < N; d++) {
			if (paper[i][d] == answer[d]) {
				printf(" O ");
				s[i]++;
			}
			else {
				printf(" X ");
			}
		}
		printf("  %d점\n", s[i]);
	}
	//석차계산
	printf("==============================================\n");
	printf("            ======================            \n");
	printf("              번호   점수   석차           \n");
	printf("            ======================            \n");
	for (int k = 0; k < STUDENT; k++) {
		g = 8;

		for (int l = 0; l < STUDENT; l++) {

			if (s[k] >= s[l]) {
				
				g--;
			}
		}
		r[k] = g;

		printf("              %d번   %d점     %d등\n",k+1,s[k],r[k]);
	}
    printf("            ======================            \n");



}









