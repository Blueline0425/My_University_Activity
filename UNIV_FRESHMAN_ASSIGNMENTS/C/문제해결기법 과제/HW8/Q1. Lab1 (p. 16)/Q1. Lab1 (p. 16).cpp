#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
struct ADDRESS {
	char first[10];
	char middle;
	char second[10];
};
struct ADDRESS address[1000];
struct ADDRESS compressed_address[1000];
void copy_element(struct ADDRESS src[], struct ADDRESS dest[]) {
	strcpy(dest->first, src->first);
	dest->middle = src->middle;
	strcpy(dest->second, src->second);
}
bool read_file(const char *fname,int *count,struct ADDRESS data[]) {
	FILE* pFile;
	pFile = fopen(fname, "r");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
		(*count) = 0;
	}
	struct ADDRESS ex;
	int i = 0;
	while (fscanf(pFile,"%s %c %s",ex.first,&ex.middle,ex.second)==3) {
		copy_element(&ex, &data[i]);
		i++;
		(*count)++;
	}
	fclose(pFile);
	return true;
}
bool read_compressed_file(const char* fname, int* count, struct ADDRESS data[]) {
	FILE* pFile;
	pFile = fopen(fname, "r");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
		(*count) = 0;
	}
	struct ADDRESS ex;
	int i = 0;
	while (fscanf(pFile, "%3s%4s", ex.first,ex.second) == 2) {
		copy_element(&ex, &data[i]);
		i++;
		(*count)++;
	}
	fclose(pFile);
	return true;
}
bool write_file(const char* fname, int* count) {
	FILE* pFile;
	pFile = fopen(fname, "w");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}

	for (int i = 0; i < *count; i++) {
		fprintf(pFile, "%s%s", address[i].first, address[i].second);
	}

	fclose(pFile);
	return true;
}
bool write_compressed_file(const char* fname, int* count) {
	FILE* pFile;
	pFile = fopen(fname, "w");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}

	for (int i = 0; i < *count; i++) {
		fprintf(pFile, "%s - %s   ", compressed_address[i].first, compressed_address[i].second);
	}

	fclose(pFile);
	return true;
}
int main() {
	char fname[30] = "address.txt";
	char f2name[30] = "compressed.txt";
	char f3name[30] = "decompressed.txt";
	int count = 0;
	int count_b = 0;
	read_file(fname,&count,address);
	write_file(f2name,&count);

	read_compressed_file(f2name,&count_b,compressed_address);
	write_compressed_file(f3name, &count_b);
	return 0;
}