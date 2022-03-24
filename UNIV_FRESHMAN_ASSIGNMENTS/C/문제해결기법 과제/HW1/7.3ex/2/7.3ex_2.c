#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void change(float cash,int *quarters,int* dimes, int *nickels, int *pennies);

int main() {

	float cash[] = { 15.33f,0.79f,2134.0f,65.45f,0.33f,45.58f,1.99f };//rounding error
	int quarters=0, dimes=0, nickels=0, pennies=0;
	int test_num = 7;
	for (int i = 0; i < test_num;i++) {

		quarters = 0, dimes = 0, nickels = 0, pennies = 0;
		change(cash[i], &quarters, &dimes, &nickels, &pennies);
		printf("-----test_num_%d-----\n", i + 1);
		printf("Cash %0.2f Change --> %d quarters, %d dimes, %d nickels, %d pennies\n", cash[i], quarters, dimes, nickels, pennies);
	}
	return 0;
}
void change(float cash, int* quarters, int* dimes, int* nickels, int* pennies) {
	double cents;
	cents = floor(((cash - floor(cash))*100.0f)+0.5);
	while (cents != 0) {

		if (cents >= 25) {
			cents -= 25;
			(*quarters)++;
		}
		else if (cents<25&&cents>=10) {
			cents -= 10;
			(*dimes)++;

		}
		else if (cents<10&&cents>=5) {
			cents -= 5;
			(*nickels)++;
		}
		else if (cents<5) {
			cents -= 1;
			(*pennies)++;
		}


	}


}




