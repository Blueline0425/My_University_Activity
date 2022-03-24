#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
struct EMPLOYEEE {
	char name[20];
	char name_d[10];
	int a;
	double work;
	char date[30];


}employee[5] = {
	{"Anthony", "A.J." ,10031 ,7.82 ,"12/18/62"}
	,{"Burrows", "W.K.", 10067 ,9.14, "6/9/63"}
	,{"Fain", "B.D.", 10083, 8.79 ,"5/18/59"}
	,{"Janney", "P." ,10095 ,10.57 ,"9/28/62"}
	,{"Smith" ,"G.J.",10105 ,8.50, "12/20/61"}

};
bool write_file(const char* fname) {
	FILE* pFile;
	pFile = fopen(fname, "w");
	if (pFile == NULL) {
		printf("cannot open the file!!\n");
		return false;
	}

	for (int i = 0; i < 5; i++) {
		fprintf(pFile, "%s %s %d %lf %s\n", employee[i].name, employee[i].name_d, employee[i].a, employee[i].work, employee[i].date);
	}

	fclose(pFile);
	return true;
};
bool copy_file(const char* fname, const char* copy_fname) {
	FILE* pFile, * p_cFile;

	pFile = fopen(fname, "r");
	p_cFile = fopen(copy_fname, "w");
	if (pFile == NULL || p_cFile == NULL) {
		printf("cannot open the file!!\n");
		return false;
	}
	char ch;
	while ((ch = fgetc(pFile)) != EOF)
		fputc(ch, p_cFile);


	fclose(pFile);
	fclose(p_cFile);


	return true;
}
void main() {
	char fname[20];
	char co_fname[20];
	printf("input the original name :");
	scanf("%s", &fname);
	printf("input the duplicate name :");
	scanf("%s", &co_fname);
	strcat(fname, ".txt");
	strcat(co_fname, ".txt");


	if (write_file(fname) == true)
		printf("write success\n");
	if (copy_file(fname, co_fname) == true)
		printf("copy success\n");

}
