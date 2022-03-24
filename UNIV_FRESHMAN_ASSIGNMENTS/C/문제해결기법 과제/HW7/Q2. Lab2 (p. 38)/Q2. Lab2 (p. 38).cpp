#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
void decimal_to_binary(unsigned int x) {
	unsigned int a = 0x80000000;
	int i = 0;
	for (i = 31; i >= 0; i--) {
		if (x & (1 << i))
			break;
		a >>= 1;
	}
	for (i; i >= 0; i--) {

		if (x & a) {
			printf("1");
			a >>= 1;
		}
		else {
			printf("0");
			a >>= 1;
		}

	}
}
void decimal_to_hexdemical(int x) {
	int i, h;
	int k = 0;
	for (i = 31; i >= 0; i -= 1) {
		if (x & (1 << i))
			break;
		k++;
	}
	if (k % 4 != 0) {
		k = 32 - k - (4 - k % 4);
	}
	else
		k = 28 - k;
	for (k; k >= 0; k -= 4) {
		h = ((x >> k) & 0xF);
		if (h < 10) {
			printf("%d", h);
		}
		else {
			printf("%c", h + 55);
		}
	}
}
int main() {
	for (int i = 1; i < 1001; i++) {
		printf("DEC %4d:   BIN ", i);
		decimal_to_binary(i);
		printf("	  HEX ");
		decimal_to_hexdemical(i);
		printf("\n");
	}

	return 0;
}