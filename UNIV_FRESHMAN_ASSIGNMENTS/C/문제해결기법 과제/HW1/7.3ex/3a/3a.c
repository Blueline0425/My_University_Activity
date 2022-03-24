#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
int secs(int hours,int mins, int ss);

int main() {

	int hours[] = {1,0,0,2,0};
	int mins[] = {30,0,0,0,10};
	int ss[] = {30,0,3,0,0};
	int test_num = 5;
	int total_secs = 0;
	for (int i = 0; i < test_num; i++) {
		total_secs = secs(hours[i], mins[i], ss[i]);
		printf("---test_num_%d---\n", i + 1);
		printf("%d hours %d minutes %d seconds --> %d seconds\n", hours[i], mins[i], ss[i], total_secs);
	}


	return 0;
}
int secs(int hours, int mins, int ss) {
	int total=0;
	total += hours * 3600;
	total += mins * 60;
	total += ss;

	return total;
}



