#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
struct REGISTERATION {
	int tag;
	char date[11];
	char fee_paid[4];
	char name[25];
	int age;
	char organization[35];
	char job[15];
};
struct REGISTERATION regist[30];

bool read_file(const char* fname, struct REGISTERATION* r1, int* num) {
	char line[80];
	int n = 0;
	FILE* fp = fopen(fname, "r");
	if (fp == NULL) {
		printf("Cannot open file\n");
		return false;
	}

	else {
		while ((fgets(line, sizeof(line), fp)) != NULL) {
			//token by slash
			char* ptr = strtok(line, "/");
			int i = 1;
			while (ptr != NULL) {
				switch (i) {
				case 1:
					(r1 + n)->tag = atoi(ptr);
					break;
				case 2:
					strcpy((r1 + n)->date, ptr);
					break;
				case 3:
					strcpy((r1 + n)->fee_paid, ptr);
					break;
				case 4:
					strcpy((r1 + n)->name, ptr);
					break;
				case 5:
					(r1 + n)->age = atoi(ptr);
					break;
				case 6:
					strcpy((r1 + n)->organization, ptr);
					break;
				case 7:
					strcpy((r1 + n)->job, ptr);
					break;
				default:
					break;
				}
				ptr = strtok(NULL, "/");
				i++;
			}
			n++;
		}
		*num = n;
	}
	fclose(fp);
	return true;
}
//P1-1, IN THE STRUCT ARRAY
void print_data_in_array(struct REGISTERATION* data,int count) {
	int i,k;
	for (i = 0; i < count; i++) {
		char name[25];
		char* p_name[25] = {NULL};
		strcpy(name, data[i].name);
		k = 0;
		char* ptr = strtok(name," ");
		while (ptr != NULL) 
		{
			p_name[k] = ptr;
			k++;
			ptr = strtok(NULL," ");
		}
		if (strcmp(p_name[1], "Choi") == 0 && p_name[1]!=NULL) {
			printf("Tag: %2d  Date registered: %11s  Fee-paid: %3s  Name: %10s  Age: %2d  Organization: %10s  Job: %8s",
				data[i].tag,
				data[i].date,
				data[i].fee_paid,
				data[i].name,
				data[i].age,
				data[i].organization,
				data[i].job);
		}
	}
}
int main() {
	char fname[] = "registraion_data.txt";
	int count = 0;
	read_file(fname, regist, &count);
	print_data_in_array(regist,count);
	return 0;
}