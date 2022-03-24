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
struct PERSONAL decomposed_data[20];

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
bool write_file(const char* fname, struct PERSONAL edit[]) {
	FILE* pFile;
	pFile = fopen(fname, "w");
	if (pFile == NULL) {
		printf("cannot open the file!\n");
		return false;
	}
	for (int i = 0; i < 20; i++) {
		if (i == 0) {
			fprintf(pFile, "Age from %d to %d\n--------------------------\n", (edit[i].age / 10) * 10, (edit[i].age / 10) * 10 + 9);
		}
		if (i >= 1 && i <= 19) {
			if (edit[i].age / 10 - edit[i - 1].age / 10) {
				fprintf(pFile, "\nAge from %d to %d\n--------------------------\n", (edit[i].age / 10) * 10, (edit[i].age / 10) * 10 + 9);
			}
		}
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
		copy_element(&person, &personal[i]);
		i++;
	}
	fclose(pFile);
	return true;
}
int main() {
	char fname[50] = "personal.txt";
	char output_name[30] = "output.txt";
	read_file(fname);
	group_by_age(personal, decomposed_data);
	write_file(output_name, decomposed_data);

	return 0;
}