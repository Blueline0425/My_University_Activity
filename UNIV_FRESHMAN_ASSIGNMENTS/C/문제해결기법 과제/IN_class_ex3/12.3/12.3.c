#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int Days(struct Date dat);

struct Date {

	int month;
	int day;
	int year;

};

int main() {

	struct Date date, differnce_date;



	printf("-----test_sets-----\n");
	for (int i = 0; i < 5; i++) {

		date.month = 1 + i;
		date.day = 10 + i;
		date.year = 2000 + 10 * i;

		differnce_date.day = Days(date);
		printf("test num : %d  date : %d/%d/%d   number of days : %d\n", i+1, date.month, date.day, date.year, differnce_date.day);

	}
	printf("--------------------\n");

	return 0;
}
int Days(struct Date dat) {

	dat.day = dat.day - 1 + (dat.month - 1) * 30 + (dat.year - 2000) * 360;
	
	return dat.day;
}