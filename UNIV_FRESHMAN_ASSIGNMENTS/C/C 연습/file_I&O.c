#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
struct CAR
{
	char name[20];
	int year;
	double price;

}car[4] = {

	{"Avante",2007,13000.00}
	,{"Sonata",2008,18000.00}
	,{"SM7", 2009, 22000.00}
	,{"Equus", 2010, 35000.00}
};

bool read_file() {
	FILE* pFile;
	char name[20];
	int year;
	double price;
	pFile = fopen("cars.txt", "r");
	if (pFile == NULL) {
		printf("Cannot open the file!\n");
		return false;
	}
	printf("-----------------------------------\n");
	printf("|Name |Year |Price |\n");
	printf("-----------------------------------\n");
	while (fscanf(pFile, "%s %d %lf", &name, &year,&price) == 3) {
		printf("|%s\t|  %d|    %.2lf|\n", name, year,price);
	}
	printf("-----------------------------------\n");

	fclose(pFile);
	return true;
}

void main() {
	FILE* INFILE;
	INFILE = fopen("cars.txt","w");
	if (INFILE == NULL) {
		printf("Cannot open the file!\n");

	}
	
	for (int i = 0; i < 4; i++) {
		fprintf(INFILE,"%s %d %lf\n", car[i].name, car[i].year,car[i].price);
	}
	fclose(INFILE);

	if (read_file() == true)
		printf("succuss\n");
	

}

