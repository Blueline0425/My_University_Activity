#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <time.h>
void f(int side1, int side2,char a);
void main() {
	int side1, side2;
	char c;
	printf("Enter a character to fill the rectangle: ");
	scanf("%c", &c);
	printf("Enter sides: ");
	scanf("%d", &side1);
	scanf("%d", &side2);

	f(side1, side2, c);

}
void f(int side1, int side2, char a) {
	for (int i = 0; i < side1; i++) {

		for (int k = 0; k < side2; k++) {
			printf("%c", a);
		}
		printf("\n");
	}

}
