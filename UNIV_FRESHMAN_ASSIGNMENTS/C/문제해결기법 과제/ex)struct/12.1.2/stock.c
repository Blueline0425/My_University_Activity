#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
int main() {

	struct {

		char name[5][10];
		double earnings_per_share[5];
		double price_to_earnings[5];


	}stock;

	for (int i = 0; i < 5;i++)
	{
		printf("enter the name of a stock:");
		scanf("%s", &stock.name[i]);
		printf("enter the earnings_per_share:");
		scanf("%lf", &stock.earnings_per_share[i]);
		printf("enter the price_to_earnings:");
		scanf("%lf", &stock.price_to_earnings[i]);
		
		printf("\n%s stock is (%lf)*(%lf)=$%lf\n",stock.name[i],stock.earnings_per_share[i],stock.price_to_earnings[i], stock.earnings_per_share[i]* stock.price_to_earnings[i]);
	
	}



	return 0;
}