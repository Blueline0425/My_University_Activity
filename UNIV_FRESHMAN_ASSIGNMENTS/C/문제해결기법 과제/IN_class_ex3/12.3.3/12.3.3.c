#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void Days(struct Date dat[]);

struct Date {

	int month;
	int day;
	int year;

}date[5] = {
		{1,1,2000},
		{4,25,2002},
		{11,30,2007},
		{10,7,2020},
		{9,24,2021}
};
struct Date differnce_date;

int main() {

	



	printf("-----test_sets-----\n");
	for (int i = 0; i < 5; i++) {

		Days(date+i);
		printf("test num : %d  date : %d/%d/%d   number of days : %d\n", i+1, date[i].month, date[i].day, date[i].year, differnce_date.day);

	}
	printf("--------------------\n");

	return 0;
}
void Days(struct Date dat[]) {

	differnce_date.day = dat->day - 1 + (dat->month - 1) * 30 + (dat->year - 2000) * 360;
	
}