#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define NUM_TEST_SET 5

int search_string(char *string,char *search);

int main() {

	char test_str[NUM_TEST_SET][1024] = {"Every day for the past month, Emal Ahmadi's 7-year-old daughter Hada has asked him the same thing: ""Where is my sister ?"""
		,"She misses playing with her younger sister Malika, he says. She cries a lot, wondering when she is coming home."
		,"Malika died in a US drone strike in the courtyard of their family home in Afghanistan's capital on August 29, along with ten other relatives, six of them children."
		,"Speaking outside of the courtroom on Thursday, Sarkozy's lawyer Thierry Herzog told French media that he would be launching an appeal."
		,"Lambert said he told Sarkozy about the memo and indicated to him the necessity to cut campaign spending, while Sarkozy maintained that he had no knowledge of the overspending."};
	char test_search_str[NUM_TEST_SET][128] = {"the","She","in","the courtroom on Thursday","and indicated to him"};//2, 2, 3, 1, 1

	for (int i = 0; i < NUM_TEST_SET; i++) {

		char* str = test_str[i];
		char* search_str = test_search_str[i];

		int num_matches = search_string(str,search_str);
		printf("\n// --- EXPERIMENT(%d) --- //\n",i+1);
		printf("String : %s\n",str);
		printf("Search : %s\n",search_str);
		printf("Num Matches : %d\n",num_matches);


	}

	return 0;
}
int search_string(char* string, char* search){
	int match_num = 0;
	
	for (int i = 0; i < strlen(string); i++) {
		if (string[i]==search[0]) {
			int match = 0;
			for (int k = 0;k<strlen(search);k++) {
				if (string[i + k] == search[k]) {
					match++;
				}
			
			}
			if (match == strlen(search)) {
				match_num++;
			}
		
		}
	}

	return match_num;
}
