#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
//P8-1
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
bool read_file_with_checksum(const char* fname, char data[][25], int* num) {
	FILE* pFile;
	pFile = fopen(fname, "r");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		*num = 0;
		return false;
	}
	int i = 0;
	char str[30];
	while (fgets(str,30,pFile)) {
		str[strlen(str) - 1] = '\0';
		strcpy(data[i],str);
		i++;
		(*num)++;
	}
	fclose(pFile);
	return true;
}
void checksum(char s[][25],char* check) {
	int c = 0;
	int i = 0;
	char str[40];
	strcpy(str, s[0]);
	for (int k = 0; k < 10;k++) {
		if (strcmp(s[i],"") ==0)
			break;
		strcpy(str, s[i]);
		c = 0;
		for (int k = 0; k < strlen(str); k++) {
			c ^= str[k];
		}
		char a[10];
		sprintf(a,"%d",c);
		strcat(check,a);
		i++;
	}
	strcpy(s[i],check);
}
void input_recent_data(char arr[][25],struct REGISTERATION* re,int count) {
	for (int i = 10; i >=0; i--) {
		strcpy(arr[10-i], re[count - i].name);//count is the number of struct list, we have to update this every time
	}
}
bool write_file_with_checksum(const char* fname,char data[][25],int count) {
	FILE* pFile;
	pFile = fopen(fname, "w");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}
	for (int i = 0; i < 11; i++) {
		fprintf(pFile, "%s\n", data[i]);
	}
	fclose(pFile);
	return true;
}
void compare_checksum(char ori[][25], char copy[][25]) {
	printf("original's checksum : %s   copy's checksum : %s\n", ori[10], copy[10]);
	if (strcmp(ori[10], copy[10]) == 0) {
		printf("Two data's checksum is same\nSo TWO DATA ARE THE SAME\n");
	}
	else
		printf("Two data's checksum is NOT same\nSo TWO DATA ARE NOT THE SAME\n");
}
int main()
{
    char fname[] = "registraion_data.txt";
	char fname2[] = "P8-1.txt";
    int count = 0;
	int count2 = 0;
	char most_recent_data[11][25];
	char copied_most_recent_data[11][25];
	char check[100] = "";
	char copied_check[100] = "";
    read_file(fname, regist, &count);



	input_recent_data(most_recent_data,regist,count);
	checksum(most_recent_data,check);

	write_file_with_checksum(fname2, most_recent_data,count);

	read_file_with_checksum(fname2, copied_most_recent_data, &count2);

	checksum(copied_most_recent_data,copied_check);
	compare_checksum(most_recent_data, copied_most_recent_data);
    return 0;
}