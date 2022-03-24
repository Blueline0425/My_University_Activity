#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
void liquid(int totCup, int* gallons, int* quarts, int* pints, int* cups);

int main() {

	int totCup[] = { 24,15,17,3,5,1,2,130,0 };
	int test_num = 9;
	int gallons, quarts, pints, cups;

	for (int i = 0; i < test_num; i++) {
		gallons = 0, quarts = 0, pints = 0, cups = 0;
		liquid(totCup[i], &gallons, &quarts, &pints, &cups);
		printf("-----test_num_%d-----\n", i + 1);
		printf("total cups : %d --> %d gallons, %d quarts, %d pints, %d cups\n", totCup[i], gallons, quarts, pints, cups);
	}
	return 0;
}
void liquid(int totCup, int* gallons, int* quarts, int* pints, int* cups) {
	//pint= 2 cups
	//quart= 4 cups
	//gallon = 16 cups


	*gallons = (int)ceil((double)totCup / 16.0);

	*quarts = (int)ceil((double)totCup / 4.0);

	*pints = (int)ceil((double)totCup / 2.0);

	*cups = totCup;
}



