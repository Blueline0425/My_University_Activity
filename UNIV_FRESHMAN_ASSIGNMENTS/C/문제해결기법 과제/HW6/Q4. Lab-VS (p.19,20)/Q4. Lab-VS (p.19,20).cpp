#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
struct PERSONAL {
	char name[20];
	int age;
	double salary;
};

struct PERSONAL personal_1[20];
struct PERSONAL personal_2[20];
struct PERSONAL personal_3[20];
struct PERSONAL temp[20];

void copy_element(struct PERSONAL src[], struct PERSONAL dest[]) {
	strcpy(dest->name, src->name);
	dest->age = src->age;
	dest->salary = src->salary;
}

bool write_file(const char* fname, struct PERSONAL edit[]) {
	FILE* pFile;
	pFile = fopen(fname, "w");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}
	for (int i = 0; i < 20; i++) {
		fprintf(pFile, "%8s %d %.1lf\n",
			edit[i].name,
			edit[i].age,
			edit[i].salary);
	}
	fclose(pFile);
	return true;
}

bool read_file(const char* fname,struct PERSONAL* data) {
	FILE* pFile;
	pFile = fopen(fname, "r");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}
	struct PERSONAL person;
	int i = 0;
	while (fscanf(pFile, "%s %d %lf", person.name, &person.age, &person.salary) == 3) {
		copy_element(&person, &data[i]);
		i++;
	}
	fclose(pFile);
	return true;
}
void Update_1(struct PERSONAL *personal1, struct PERSONAL* personal2) {
	for (int i = 0; i < 20; i++) {
		copy_element(&personal1[i], &personal2[i]);
		if ((personal1[i].age / 10) * 10 == 40) {
			personal2[i].salary = personal1[i].salary * 1.1;
		}
	}

}
void Update_2(struct PERSONAL* personal2, struct PERSONAL* personal3) {
	for (int i = 0; i < 20; i++) {
		copy_element(&personal2[i], &personal3[i]);
		if ((personal2[i].age / 10) * 10 == 30) {
			personal3[i].salary = personal2[i].salary * 1.2;
		}
	}

}
void Compare_element(struct PERSONAL* personal1, struct PERSONAL* personal3) {
	for (int i = 0; i < 20; i++) {
		printf("%8s   %d   %.1lf -> %.1lf", personal1[i].name, personal1[i].age, personal1[i].salary, personal3[i].salary);
		if (personal1[i].salary != personal3[i].salary)
			printf(" Different\n");
		else
			printf("\n");

	}

}
int main() {
	char fname[50] = "salary_v1.txt";
	char fname_2[30] = "salary_v2.txt";
	char fname_3[30] = "salary_v3.txt";

	read_file(fname,personal_1);
	Update_1(personal_1, temp);
	write_file(fname_2, temp);



	read_file(fname_2,personal_2);
	Update_2(personal_2, personal_3);
	write_file(fname_3, personal_3);


	Compare_element(personal_1,personal_3);

	return 0;
}