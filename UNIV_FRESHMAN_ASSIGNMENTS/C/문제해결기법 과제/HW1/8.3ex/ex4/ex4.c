#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void extend(double price[], double quantity[], double amount[]);

int main() {

	double price[] = { 10.62,14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98 };
	double quantity[] = { 4, 8.5, 6, 8.35, 9, 15.3, 3, 5.4, 2.9, 4.8 };
	double amount[10];

	extend(price, quantity, amount);

	for (int i = 0; i < 10; i++) {
		printf("amount[%d] : %lf\n", i, amount[i]);

	}
	return 0;
}
void extend(double price[], double quantity[], double amount[]) {

	for (int i = 0; i < 10; i++) {

		amount[i] = price[i] * quantity[i];
	}

}
