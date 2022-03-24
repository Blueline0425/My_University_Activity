#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
void matrix_multiple(int A[3][3],int B[3][3],int C[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			C[i][k] = 0;
			for (int r = 0; r < 3; r++) {
				C[i][k] += A[i][r] * B[r][k];
			}
		}

	}

}
int main() {
	int A[3][3] = { 
		{1,2,3},
		{4,5,6},
		{7,8,9} };
	int B[3][3] = { 
		{3,2,1},
		{6,5,4},
		{9,8,7} };
	int C[3][3];
	matrix_multiple(A,B,C);
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 3; k++) {
			printf("[%d]", C[i][k]);

		}
		printf("\n");
	}

	return 0;
}
