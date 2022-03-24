#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void calculate(int *n1,int *n2,int *re1,int *re2, int *re3,int *re4);

int main() {


	int N1 = 10, N2 = 5;
	int re1, re2, re3, re4;

	printf("\nN1 = %d  N2 = %d\n", N1, N2);
	
	if (N2 != 0) 
	{
		calculate(&N1, &N2, &re1, &re2, &re3, &re4);
		printf("N1 * N2: %d \nN1 / N2: %d \nN1 %% N2: %d \nN1 + N2: %d\n", re1, re2, re3, re4);
	}
	else if(N2==0)
	{
		printf(" %d cannot be divided by 0\n",N1);
	}

	N1 = 100; 
	N2 = 0;
	printf("\nN1 = %d  N2 = %d\n", N1, N2);
	if (N2 != 0)
	{
		calculate(&N1, &N2, &re1, &re2, &re3, &re4);
		printf("N1 * N2: %d \nN1 / N2: %d \nN1 %% N2: %d \nN1 + N2: %d\n", re1, re2, re3, re4);
	}
	else if (N2 == 0)
	{
		printf(" %d cannot be divided by 0\n", N1);
	}

	N1 = 342500;
	N2 = 20;
	printf("\nN1 = %d  N2 = %d\n", N1, N2);
	if (N2 != 0)
	{
		calculate(&N1, &N2, &re1, &re2, &re3, &re4);
		printf("N1 * N2: %d \nN1 / N2: %d \nN1 %% N2: %d \nN1 + N2: %d\n", re1, re2, re3, re4);
	}
	else if (N2 == 0)
	{
		printf(" %d cannot be divided by 0\n", N1);
	}

	N1 = 20;
	N2 = -384367;
	printf("\nN1 = %d  N2 = %d\n", N1, N2);
	if (N2 != 0)
	{
		calculate(&N1, &N2, &re1, &re2, &re3, &re4);
		printf("N1 * N2: %d \nN1 / N2: %d \nN1 %% N2: %d \nN1 + N2: %d\n", re1, re2, re3, re4);
	}
	else if (N2 == 0)
	{
		printf(" %d cannot be divided by 0\n", N1);
	}

	N1 = -23456;
	N2 = -3867;
	printf("\nN1 = %d  N2 = %d\n", N1, N2);
	if (N2 != 0)
	{
		calculate(&N1, &N2, &re1, &re2, &re3, &re4);
		printf("N1 * N2: %d \nN1 / N2: %d \nN1 %% N2: %d \nN1 + N2: %d\n", re1, re2, re3, re4);
	}
	else if (N2 == 0)
	{
		printf(" %d cannot be divided by 0\n", N1);
	}



	return 0;
}
void calculate(int* n1, int* n2, int* re1, int* re2, int* re3, int* re4) 
{
	
		*re1 = *n1 * *n2;
		*re2 = *n1 / *n2;
		*re3 = *n1 % *n2;
		*re4 = *n1 + *n2;
	
	
}





