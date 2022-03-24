#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#define NUM_TEST_SET 3

struct DATASET {

	char name[10];
	int age;
	char hobby[10];

}dataset[5] = { {"Kim",39,"Tennis"},
	{"Ko",15,"Soccer"},
	{"Lee",17,"Soccer"},
	{"Choi",21,"Tennis"},
	{"Park",10,"Tennis"}};

struct INDEX {

	char key[10];
	int index;

}index[5] = { {"Kim",0},
	{"Ko",1},
	{"Lee",2},
	{"Choi",3},
	{"Park",4}};

int Search_Index(char* search);

int main() {

	char test_search_keys[NUM_TEST_SET][10] = {"Cha","Lee","Park"};

	for (int i = 0; i < NUM_TEST_SET; i++) {

		char* search_key = test_search_keys[i];
		int index = Search_Index(search_key);

		printf("\n _-_-_Experiment [%d]_-_-_ \n", i + 1);
		printf("Key: %s\n", search_key);
		if (index < 0) {

			printf("THE KEY DOES NOT EXIST \n");
		}
		else {

			printf("RESULT: INDEX[%d], NAME[%s], AGE[%d], HOBBY[%s] \n", index, dataset[index].name, dataset[index].age, dataset[index].hobby);
		}





	}



	return 0;
}
int Search_Index(char* search) {

	for (int i = 0; i < 5; i++) {
		
		for (int k = 0; k < strlen(index[i].key); k++) {
			if (index[i].key[0] == search[0]) {
				int match_count = 0;
				for (int r = 0; r < strlen(search); r++) {
					if (index[i].key[r] == search[r]) {
						match_count++;
					}
					if (match_count == strlen(index[i].key)) {
						return i;
					}

				}
			}

		}

	}

	return -1;
}