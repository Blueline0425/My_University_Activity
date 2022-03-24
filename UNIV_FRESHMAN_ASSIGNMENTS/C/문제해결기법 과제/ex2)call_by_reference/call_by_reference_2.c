#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void calculate(int *n1, int *n2,int *re1, int *re2, int *re3, int *re4) {

	*re1 = *n1 * *n2;
	*re2 = *n1 + *n2;

	if (*n2 == 0) {

		printf("ERROR! DIVISION BY ZERO! \n");
		*re3 = 0;
		*re4 = 0;
	}
	else{
		*re3 = *n1 / *n2;
		*re4 = *n1 % *n2;
	}
}

int main() {

	int n1[] = { 10 ,10,5435,-67};
	int n2[] = { 5 ,0,1234,-2};
	
	int re1, re2, re3, re4;
	int test = 4;

	for (int i = 0; i < test; i++) {
		printf("-----test sets %d -----\n", i + 1);
		calculate(&n1[i],&n2[i], &re1, &re2, &re3, &re4);
		printf("n1 * n2 = %d\n", re1);
		printf("n1 + n2 = %d\n", re2);
		printf("n1 / n2 = %d\n", re3);
		printf("n1 %% n2 = %d\n", re4);

	}


	return 0;
}





