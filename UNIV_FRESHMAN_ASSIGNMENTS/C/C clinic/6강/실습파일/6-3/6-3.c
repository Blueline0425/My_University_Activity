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

		printf("��ȣ�� �����Ͻÿ�:");
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
			printf("������ ��ȣ�Դϴ�.");
			i = 0;
		}
		else {
			printf("����, �ҹ���, �빮�ڸ� ��� ��ȣ�� �ٽ� ���弼��!\n");
		}
	}
	
}








