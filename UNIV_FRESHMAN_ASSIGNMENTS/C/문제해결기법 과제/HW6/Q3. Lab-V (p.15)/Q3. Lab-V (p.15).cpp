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
struct NAME_AGE {
	char name[20];
	int age;
};
struct NAME_HOBBY {
	char name[20];
	char hobby[20];
};

struct PERSONAL personal[20];
struct NAME_AGE Age[20];
struct NAME_HOBBY Hobby[20];

void copy_element(struct PERSONAL src[], struct PERSONAL dest[]) {
	strcpy(dest->name, src->name);
	dest->age = src->age;
	strcpy(dest->hobby, src->hobby);
}
void copy_age_element(struct PERSONAL src[], struct NAME_AGE dest[]) {
	strcpy(dest->name, src->name);
	dest->age = src->age;
}
void copy_hobby_element(struct PERSONAL src[], struct NAME_HOBBY dest[]) {
	strcpy(dest->name, src->name);
	strcpy(dest->hobby, src->hobby);
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
bool write_file_for_age(const char* fname, struct NAME_AGE edit[]) {
	FILE* pFile;
	pFile = fopen(fname, "w");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}
	for (int i = 0; i < 20; i++) {
		fprintf(pFile, "%8s %d\n",
			edit[i].name,
			edit[i].age);
	}


	fclose(pFile);
	return true;
}
bool write_file_for_hobby(const char* fname, struct NAME_HOBBY edit[]) {
	FILE* pFile;
	pFile = fopen(fname, "w");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}
	for (int i = 0; i < 20; i++) {
		fprintf(pFile, "%8s %8s\n",
			edit[i].name,
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
		copy_element(&person, &personal[i]);
		i++;
	}
	fclose(pFile);
	return true;
}
bool read_file_for_age(const char* fname, struct NAME_AGE* Age) {
	FILE* pFile;
	pFile = fopen(fname, "r");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}
	struct PERSONAL person;
	int i = 0;
	while (fscanf(pFile, "%s %d %s", person.name, &person.age, person.hobby) == 3) {
		copy_age_element(&person, &Age[i]);
		i++;
	}
	fclose(pFile);
	return true;


}
bool read_file_for_hobby(const char* fname, struct NAME_HOBBY* Hobby) {
	FILE* pFile;
	pFile = fopen(fname, "r");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}
	struct PERSONAL person;
	int i = 0;
	while (fscanf(pFile, "%s %d %s", person.name, &person.age, person.hobby) == 3) {
		copy_hobby_element(&person, &Hobby[i]);
		i++;
	}
	fclose(pFile);
	return true;


}

int main() {
	char fname[50] = "personal.txt";
	char fage[30] = "age.txt";
	char fhobby[30] = "hobby.txt";

	read_file(fname);
	read_file_for_age(fname,Age);
	read_file_for_hobby(fname, Hobby);
	
	write_file_for_age(fage,Age);
	write_file_for_hobby(fhobby,Hobby);
	return 0;
}