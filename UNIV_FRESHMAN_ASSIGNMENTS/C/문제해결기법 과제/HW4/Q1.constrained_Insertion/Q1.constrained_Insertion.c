#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#define TEST_NUM 5
  struct EMPLOYEE {

	char RRN[14];//constraint , unique
	char name[20];
	float salary;// constraint , salary>bonus
	float bonus;

} employee[1000];

int main() {
	char TEST_RRN[TEST_NUM][14] = { {"0203693508127"},{"0203693508127"},{"0203693508128"},{"0223493508127"},{"1203693588127"} };
	char TEST_NAME[TEST_NUM][20] = { {"Hanungjae"},{"choikim"},{"umjunsick"},{"KiM"},{"KIee"}};
	float TEST_SALARY[TEST_NUM] = {2000,2200,2250,2030,2600};
	float TEST_BONUS[TEST_NUM] = {1000,1500,2500,1800,1900};
	int struct_array_num = 0;
	for (int i = 0; i < TEST_NUM;i++) {

		printf("______TEST_NUM[%d]______\n", i + 1);
		printf("RRN : %s\n", TEST_RRN[i]);
		printf("NAME : %s\n", TEST_NAME[i]);
		printf("SALARY : %f\n", TEST_SALARY[i]);
		printf("BONUS : %f\n", TEST_BONUS[i]);

		int error = 0;
		for (int k = 0; k < struct_array_num; k++) //unique_test
		{
			
			if (TEST_RRN[i][0] == employee[k].RRN[0]) {
				int same = 0;
				for (int r = 0; r < strlen(employee[k].RRN); r++) {
					if (TEST_RRN[i][r] == employee[k].RRN[r]) {
						same++;
					}
					if (same == strlen(employee[k].RRN)) {
						error++;
						printf("ERROR : RRN[%s] IS SAME WITH RRN[%s]\n",TEST_RRN[i], employee[k].RRN);
					}
				}
				
			}

			

		}
		if (TEST_SALARY[i] < TEST_BONUS[i]) //bonus_test
		{
			error++;
			printf("ERROR : SALARY[%f] IS SMALL THAN BONUS[%f]\n", TEST_SALARY[i], TEST_BONUS[i]);
		}
		if (error==0) {
			strcpy(employee[struct_array_num].RRN, TEST_RRN[i]);
			strcpy(employee[struct_array_num].name, TEST_NAME[i]);
			employee[struct_array_num].salary = TEST_SALARY[i];
			employee[struct_array_num].bonus = TEST_BONUS[i];
			struct_array_num++;
			printf("INSERTION SUCCESS\n");
			
		}
		else {
			printf("INSERTION FAILED\n");
		}

	}







	return 0;
}
