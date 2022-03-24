#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main() {
	char c[15] = "C language";
	int a = 0;
	while (c[a]!='\0')
	{
		a++;
	}
	for (int i = 0; i < a+1; i++) {
		printf("%c", c[a - i]);
	}
		
}


