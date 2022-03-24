#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#define KEY 3;
void do_cypher(char* str) {
	int i = 0;
	int key = KEY;
	while (str[i] != '\0') {
		str[i];
		if (str[i] >='A' && str[i] <='Z') {
			str[i] = (str[i] - 'A' + key) % 26 + 'A';
		}
		else if (str[i] >='a' && str[i] <='z') {
			str[i] = (str[i] - 'a' + key) % 26 + 'a';
		}
		i++;
	}
}
void do_decrypt(char* str) {
	int i = 0;
	int key = KEY;
	while (str[i] != '\0') {
		str[i];
		int code;
		if (str[i] >= 'A' && str[i] <= 'Z') {
			code = (str[i] - 'A' - key);
			if (code < 0) {
				code += 26;
			}
			str[i] = code % 26 + 'A';
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			code = (str[i] - 'a' - key);
			if (code < 0) {
				code += 26;
			}
			str[i] = code % 26 + 'a';
		}
		i++;
	}
}
bool write_file(const char* fname,char data[][200],int *count) {
	FILE* pFile;
	pFile = fopen(fname, "w");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}
	//write char
	char cypher[100];
	for (int i = 0; i < *count;i++) {
		strcpy(cypher,data[i]);
		do_cypher(cypher);
		fprintf(pFile,"%s",cypher);

	}

	//
	fclose(pFile);
	return true;
}
bool write_decrypted_file(const char* fname, char data[][200], int* count) {
	FILE* pFile;
	pFile = fopen(fname, "w");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}
	//write char
	char decrypted[100];
	for (int i = 0; i < *count; i++) {
		strcpy(decrypted, data[i]);
		do_decrypt(decrypted);
		fprintf(pFile, "%s", decrypted);

	}

	//
	fclose(pFile);
	return true;
}

bool read_file(const char* fname, char data[][200],int *count) {
	FILE* pFile;
	pFile = fopen(fname, "r");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		*count = 0;
		return false;
	}
	int i = 0;
	char a[200];	
	//read char
	   while(fgets(a,100,pFile)!=NULL)
	   {
		   strcpy(data[i],a);
		   i++;
		   (*count)++;
	   }
	//
	fclose(pFile);
	return true;
}
int main() {
	char fname[] = "original.txt";
	char f2name[] = "cypher.txt";
	char f3name[] = "decrypted.txt";
	int count = 0;
	int count_b = 0;
	char original[11][200];
	char cypher[11][200];

	read_file(fname, original, &count);
	write_file(f2name, original, &count);
	read_file(f2name,cypher,&count_b);
	write_decrypted_file(f3name,cypher,&count_b);
	return 0;
}