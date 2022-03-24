#include <stdio.h>

void main()
{
	float num1, num2,approx;
	printf("plz write two floating pont num :");
	scanf_s("%f %f", &num1, &num2);

	if (num1 - num2 < 0.001)
	{
		approx = 0;

	}
	else
	{
		approx = (num1 - num2) / 2;
	}
}