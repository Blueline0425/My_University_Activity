#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#define STUDENT 7 // �л���
#define N 10 // ���׼�
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
	printf(" ����  1  2  3  4  5  6  7  8  9  10  ����\n");
	printf("==============================================\n");
	score(answer, paper);
	

}
void score(int answer[N], int paper[STUDENT][N]) {
	int g = 7;
	int s[STUDENT] = {0,};
	int r[STUDENT] = {0,};
	//���� ���
	for (int i = 0; i < STUDENT; i++) {
		
		printf(" %d��  ",i+1);
		for (int d = 0; d < N; d++) {
			if (paper[i][d] == answer[d]) {
				printf(" O ");
				s[i]++;
			}
			else {
				printf(" X ");
			}
		}
		printf("  %d��\n", s[i]);
	}
	//�������
	printf("==============================================\n");
	printf("            ======================            \n");
	printf("              ��ȣ   ����   ����           \n");
	printf("            ======================            \n");
	for (int k = 0; k < STUDENT; k++) {
		g = 8;

		for (int l = 0; l < STUDENT; l++) {

			if (s[k] >= s[l]) {
				
				g--;
			}
		}
		r[k] = g;

		printf("              %d��   %d��     %d��\n",k+1,s[k],r[k]);
	}
    printf("            ======================            \n");



}









