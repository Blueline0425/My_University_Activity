#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

struct MonthDays 
{

	char name[10];
	int days;

}convert[12] = {
	{"JAN",28},
	{"FAB",25},
	{"MAR",30},
	{"APR",31},
	{"MAY",10},
	{"JUN",23},
	{"JUL",2},
	{"AUG",3},
	{"SEP",21},
	{"OCT",26},
	{"NOM",30},
	{"DEC",31}
};

int main() {

	



	for (int i = 0; i < 12; i++) {

		printf("\n%s,%d\n", convert[i].name, convert[i].days);
	}

	return 0;
}