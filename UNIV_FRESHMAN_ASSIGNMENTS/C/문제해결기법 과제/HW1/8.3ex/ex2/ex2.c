#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void show(double rates[]);
int main() {

	double rates[] = {6.5, 8.2, 8.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0};

	show(rates);

	return 0;
}
void show(double rates[]) {

	for (int i = 0; i < 9; i++) {
		printf(" %.1lf ", rates[i]);
	}


}


