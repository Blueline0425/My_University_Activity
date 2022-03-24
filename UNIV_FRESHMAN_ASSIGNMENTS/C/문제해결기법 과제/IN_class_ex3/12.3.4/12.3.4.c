#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

struct Date recent(struct Date d1[], struct Date d2[]);

struct Date {

	int month;
	int day;
	int year;

}dat1[5] = { {10,4,2001},{4,25,2002},{4,7,2010},{7,5,2021},{5,7,2015} }, dat2[5] = { {12,30,2001},{2,4,2000},{1,1,2009},{6,14,2014},{5,7,2015} }, dat3[5];

int main() {

	printf("-----test_sets-----\n");
	for (int i = 0; i < 5; i++) {

		dat3[i]=recent(dat1+i,dat2+i);


		printf("Test Num : %d Date(1) : %d/%d/%d Date(2) : %d/%d/%d -->>  THE LATER DATE : %d/%d/%d\n",i+1,   dat1[i].month,dat1[i].day,dat1[i].year,    dat2[i].month,dat2[i].day, dat2[i].year,   dat3[i].month, dat3[i].day, dat3[i].year);



	}


	return 0;
}
struct Date recent(struct Date d1[], struct Date d2[]) {

	if (d1->day + d1->month * 30 + d1->year * 360 > d2->day + d2->month * 30 + d2->year * 360) {


		return *d1;

	}
	else
		return *d2;
	
}