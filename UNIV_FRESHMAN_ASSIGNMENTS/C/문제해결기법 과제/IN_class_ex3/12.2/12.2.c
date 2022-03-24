#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

struct CAR {

	int car_num, miles_driven, gallons_used;

}car[5] = {
	{25,1450,62},
	{36,3240,136},
	{44,1792,76},
	{52,2360,105},
	{68,2114,67}
};

int main() {

	double sum=0;
	printf("-----report-----\n");
	for (int i = 0; i < 5; i++) {
		printf("CAR NUM: %d  MILES PER GALLON: %f\n", car[i].car_num,(double)car[i].miles_driven / (double)car[i].gallons_used);
		sum += (double)car[i].miles_driven / (double)car[i].gallons_used;
	}
	printf("Average miles per gallon achieved by five cars : %f", sum / 5.0);


	return 0;
}