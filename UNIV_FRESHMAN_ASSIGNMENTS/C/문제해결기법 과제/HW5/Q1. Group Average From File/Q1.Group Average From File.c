#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
bool write_file(const char *fname,const char *str) {
	FILE* pFile;
	pFile = fopen(fname,"w");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}

	fprintf(pFile, "%s", str);
	fclose(pFile);
	return true;
}
bool read_file(const char* fname) {
	FILE* pFile;
	pFile = fopen(fname, "r");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}
	int i;
	int k;
	int num;
	double sum;
	int group_num = 1;
	while (fscanf(pFile, "%d", &i)==1) {
		sum = 0;
		if (i < 10) {
			for (k = 0; k < i; k++) {
				fscanf(pFile, "%d", &num);
				sum += num;
			}

			printf("Group Number[%d] Average : %.2lf\n", group_num,(double)(sum/(double)k));
			group_num++;
		}

	}



	fclose(pFile);
	return true;
}
void main() {
	char fname[] = "data.txt";
	char str[] = "5 96 87 78 93 21 4 92 82 85 87 6 72 69 85 75 81 73";
	write_file(fname,str);
	read_file(fname);
}

