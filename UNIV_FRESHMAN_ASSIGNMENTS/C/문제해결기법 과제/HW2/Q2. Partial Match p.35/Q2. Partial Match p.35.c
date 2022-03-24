#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define NUM_TEST_SET 5

void Divide_search_string(char *search_str,char *first,char *second);
int search_string(char *string,char *search);
int partial_match_count(char* search_str, char* first, char* second);


int main() {

	char test_str[NUM_TEST_SET][1024] = {"Every Ever Ever sdgdsfg y"
		,"My name is hong gil dong. My brother is hong je dong. My sister is hong gilja, and her friend is hongdong."
		,"i sdfsd n i n  i in"
		,"Speaking outside of the courtroom on Thursday, Sarkozy's lawyer Thierry Herzog told French media that he would be launching an appeal."
		,"Lambert said he told Sarkozy about the memo and indicated to him the necessity to cut campaign spending, while Sarkozy maintained that he had no knowledge of the overspending."};
	char test_search_str[NUM_TEST_SET][128] = {"Every","hong*dong","i*n","the courtroom* on Thursday","and indicat*ed to him"};//2, 2, 3, 1, 1

	char first[NUM_TEST_SET][128] = { {"  "}, {"  "},  {"  "},  {"  "},  {"  "}};
	char second[NUM_TEST_SET][128] = { {"  "}, {"  "},  {"  "},  {"  "},  {"  "}};




	for (int i = 0; i < NUM_TEST_SET; i++) {

		char* str = test_str[i];
		char* search_str = test_search_str[i];

		char* first_s = first[i];
		char* second_s = second[i];
		
		printf("\n// --- EXPERIMENT(%d) --- //\n",i+1);
		printf("String : %s\n",str);

		Divide_search_string(search_str, first_s, second_s);

		printf("Search-First : %s\n", first_s);
		printf("Search-Second : %s\n", second_s);
		int num_matches = partial_match_count(str, first_s, second_s);
		printf("Num Matches : %d\n",num_matches);


	}

	return 0;
}

void Divide_search_string(char* search_str, char* first, char* second) {

	int i = 0;
	char *ptr = strtok(search_str, "*");
	while (ptr!=NULL) {
		if (i == 0) {
			strcpy(first,ptr);
			
		}
		if (i == 1) {
			strcpy(second, ptr);
			
		}
		i++;
		ptr = strtok(NULL,"*");

	}
	printf("");
}
int partial_match_count(char* search_str, char* first, char* second) {

	int match_count = 0;
	int each_match = 0;
	for (int i = 0; i < strlen(search_str);i++) {
		//first str
		if (search_str[i] == first[0]&& second[0]!= ' ') {

			int match = 0;
			for (int k = i; k < i + strlen(first); k++) {
				if (search_str[k] == first[match]) {
					match++;
				}

			}

			if (match == strlen(first)) {//first is right 
				

				for (int j = i + strlen(first); j < strlen(search_str); j++) {//find second and the same first
					each_match = 0;
					//예외처리
					if (search_str[j] == first[0]) {
						int match_1 = 0;
						for (int r = 0; r < strlen(first); r++) {
							if (search_str[j+r] == first[match_1]) {
								match_1++;
							}
							else {
								match_1 = 0;
								break;
							}
						}
						if (match_1 == strlen(first)) {
							break;//first 중복
						}

					}
					//예외처리

					//second str
					if (search_str[j] == second[0]) {


						int match_2 = 0;
						for (int n = j; n < j + strlen(second); n++) {


							if (search_str[n] == second[match_2]) {
								match_2++;
							}
							else {
								match_2 = 0;
								break;
							}

						}
						if (match_2 == strlen(second)) {
							each_match++;
							if (each_match == 1) {
								match_count++;
							}
						}
					}


				}

			}

		}
		else if (search_str[i] == first[0] && second[0] == ' ') {
			int match = 0;
			for (int k = i; k < i + strlen(first); k++) {
				if (search_str[k] == first[match]) {
					match++;
				}

			}

			if (match == strlen(first)) {
				match_count++;
			}
		}
		
	}

	return match_count;
}
