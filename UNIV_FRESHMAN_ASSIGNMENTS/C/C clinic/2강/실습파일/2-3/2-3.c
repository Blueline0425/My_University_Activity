#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main() {
	
	char city[4][8];
	int j = 0;
	printf("7자 이하 영어 도시명을 4개 입력하세요.\n");
		for (int i = 0; i < 4; i++) {
			scanf_s("%s", city[i], sizeof(city[i]));
		}
	printf("\n입력한 도시명\n");

	for (int k = 0; k < 4; k++) {
		
		printf("%s ", &city[k]);
		if (k == 3) {
			printf("\n\n\n");
		}
	}

	for (int l = 0; l < 4; l++) {
		j = 0;
		while (city[l][j]!='\0')
		{
			printf("%c", city[l][j]);
			j++;
		}
		printf("\n");
	}
		
}


