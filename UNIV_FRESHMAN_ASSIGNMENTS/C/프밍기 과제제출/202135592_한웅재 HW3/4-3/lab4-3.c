#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//#include <stdlib.h>
//#include <time.h>
void Equation(double a, double b, double c);
void main() {
	double a, b, c;
	printf("The coefficients of a Quadratic Equation ax^2+bx+c=0 are a,b and c\nEnter values of a,b and c:");
	scanf("%lf %lf %lf", &a, &b, &c);
	Equation(a, b, c);


}
void Equation(double a, double b, double c) {
	if (b * b - 4 * a * c > 0)
	{
		printf("Two real and different roots\n");
		printf("Roots are %lf and %lf", (-b + sqrt(b * b - 4 * a * c)) / 2 * a, (-b - sqrt(b * b - 4 * a * c)) / 2 * a);
	}
	else if (b * b - 4 * a * c == 0) {
		printf("Two real and equal roots\n");
		printf("Roots are %lf and %lf", -b / 2 * a, -b / 2 * a);

	}
	else
		printf("Imaginary root");

}
