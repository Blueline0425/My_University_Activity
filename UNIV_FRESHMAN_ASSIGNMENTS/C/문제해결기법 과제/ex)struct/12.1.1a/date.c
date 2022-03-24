#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
int main() {

	struct DATE {

		int month;
		int day;
		int year;

	}date;

	printf("input the current month : ");
	scanf("%d",&date.month);
	printf("input the current day : ");
	scanf("%d", &date.day);
	printf("input the current year : ");
	scanf("%d", &date.year);

	printf("the date is %d.%d.%d", date.month,date.day, date.year);

	return 0;
}