#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
int main(void)
{
	int i = 1;
	int q, w, e;
	char pw[10];
	while (i) {
		q = 0;
		w = 0;
		e = 0;

		printf("암호를 생성하시오:");
		gets(pw);

		for (int i = 0; i < strlen(pw); i++) {
			if (isupper(pw[i])) {
				q++;
			}
		}
		for (int i = 0; i < strlen(pw); i++) {
			if (islower(pw[i])) {
				w++;
			}
		}
		for (int i = 0; i < strlen(pw); i++) {
			if (isdigit(pw[i])) {
			    e++;
			}
		}


		if (q>0&&w>0&&e>0) {
			printf("적정한 암호입니다.");
			i = 0;
		}
		else {
			printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요!\n");
		}
	}
	
}








