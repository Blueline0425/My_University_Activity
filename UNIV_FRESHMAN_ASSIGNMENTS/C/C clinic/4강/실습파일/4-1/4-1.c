#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(void)
{
	double d = 10.5;
	double* pd = &d;
	printf("%d %d\n", pd, &d);
	*pd = *pd * 3;
	printf("%f %f\n", *pd, d);
	d = *pd - 0.2;
	printf("%f %f\n", *pd, d);
	return 0;
}





