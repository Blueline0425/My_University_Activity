#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <time.h>
void f(int side1, int side2);
void main(){
	int side1, side2;
	printf("Enter sides: ");
	scanf("%d", &side1);
	scanf("%d", &side2);

	f(side1, side2);

}
void f(int side1, int side2) {
	for (int i = 0; i < side1; i++) {
		
		for (int k = 0; k < side2; k++) {
			printf("*");
		}
		printf("\n");
	}

}
