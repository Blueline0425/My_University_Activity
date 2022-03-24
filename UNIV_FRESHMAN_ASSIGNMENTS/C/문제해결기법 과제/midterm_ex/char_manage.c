#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
int my_strcmp(char *str1,char * str2) {
	//front: + back: -
	int n1 = strlen(str1);
	int n2 = strlen(str2);
	int n = n1 < n2 ? n1 : n2;
	for (int i = 0; i < n; i++) {

		if (str1[i] != str2[i]) {

			if(str1[i]-str2[i]>0){
				return 1;
			}
			else {
				return -1;
			}

		}



	}
	return 0;
}
void my_strcpy(char *str1, const char *str2) {
	int i = 0;
	while (str2[i]!='\0') {

		str1[i] = str2[i];


		i++;




	}
	str1[i] == '\0';


}

int main() {

	char str1[128] = "hello_world";
	char str2[100] = "hello_wolrd_long_sentence!sdjfbjdbfjdsbfjdsf";

	my_strcpy(str1,str2);

	printf("str1 : %s\n", str1);
	srand(time);
	int slot1 = (int)rand() % 4;

	return 0;
}	
int str_search(char *str,char *search) {
	int i = 0;
	for (int i = 0; i < strlen(str);i++) {
		if (str[i] != search[i]) {
			return 0;//0리턴시 다른 문자열 확인
		}
	
	}
	return 1;//1리턴시 같은 문자열 확인 
}
