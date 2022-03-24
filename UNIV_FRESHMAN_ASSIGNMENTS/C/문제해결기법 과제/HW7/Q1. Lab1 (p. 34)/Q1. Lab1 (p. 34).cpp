#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
int mask = 0x80;
void alphabet_to_binary(char x) {
	for (int i = 0; i < 8; i++) {
		if (x & mask) {
			printf("1");
			x = x << 1;
		}
		else {
			printf("0");
			x = x << 1;
		}

	}
	printf("\n");
}
int main() {
	char ch[] = "abcABC";

	for (int i = 0;i < 6; i++) {
		printf("[alphabet to binary] char : %c    binary : ", ch[i]);
		alphabet_to_binary(ch[i]);
	}

	return 0;
}
