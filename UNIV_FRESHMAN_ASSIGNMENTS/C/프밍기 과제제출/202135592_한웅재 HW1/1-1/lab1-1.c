#include <stdio.h>
void main()
{
	int number,a,b,c,d,e;
	scanf_s("%d", &number);

	a = number / 10000;
	b = number / 1000 - a * 10;
	c = number / 100 - a * 100 - b * 10;
	d = number / 10 - a * 1000 - b * 100 - c * 10;
	e = number / 1; -a * 10000 - b * 1000 - c * 100 - d * 10;

	printf("%d   %d   %d   %d   %d", a, b, c, d, e);




}