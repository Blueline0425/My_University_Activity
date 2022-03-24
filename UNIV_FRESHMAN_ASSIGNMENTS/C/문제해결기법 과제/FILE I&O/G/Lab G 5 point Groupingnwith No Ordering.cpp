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
	char hobby[20];
};

struct PERSONAL personal[20];
struct PERSONAL fage[20];
struct PERSONAL fhobby[20];
void copy_element(struct PERSONAL src[], struct PERSONAL dest[]) {
	strcpy(dest->name, src->name);
	dest->age = src->age;
	strcpy(dest->hobby, src->hobby);
}

void group_by_age(struct PERSONAL* original, struct PERSONAL* age) {
	int index = 0;
	for (int k = 1; k < 5; k++) {
		for (int i = 0; i < 20; i++) {
			int p_age = (original[i].age / 10) * 10;
			if (p_age == k * 10) {
				copy_element(&original[i], &age[index]);
				index++;
			}

		}
	}
}
void group_by_hobby(struct PERSONAL* original, struct PERSONAL* hob) {
	int index = 0;
	for (int i = 0; i < 20; i++) {
		if (original[i].hobby[0] == 'G') {
			copy_element(&original[i], &hob[index]);
			index++;
		}
	}
	for (int i = 0; i < 20; i++) {
		if (original[i].hobby[0] == 'P') {
			copy_element(&original[i], &hob[index]);
			index++;
		}
	}
	for (int i = 0; i < 20; i++) {
		if (original[i].hobby[0] == 'S') {
			copy_element(&original[i], &hob[index]);
			index++;
		}
	}
	for (int i = 0; i < 20; i++) {
		if (original[i].hobby[0] == 'T') {
			copy_element(&original[i], &hob[index]);
			index++;
		}
	}
}
bool write_file(const char* fname, struct PERSONAL edit[]) {
	FILE* pFile;
	pFile = fopen(fname, "w");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}
	for (int i = 0; i < 20; i++) {
		fprintf(pFile, "%8s %d %8s\n",
			edit[i].name,
			edit[i].age,
			edit[i].hobby);
	}


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
	struct PERSONAL person;
	int i = 0;
	while (fscanf(pFile, "%s %d %s", person.name, &person.age, person.hobby) == 3) {
		copy_element(&person,&personal[i]);
		i++;
	}



	fclose(pFile);
	return true;
}
void main() {
	char fname[50] = "personal.txt";
	char age[50] = "age.txt";
	char hobby[50] = "hobby.txt";

	read_file(fname);
	group_by_age(personal, fage);
	group_by_hobby(personal, fhobby);
	write_file(age, fage);
	write_file(hobby, fhobby);

}