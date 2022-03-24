#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
void secs(int *totSec,int hours,int mins, int ss);

int main() {

	int hours[] = {1,0,0,2,0};
	int mins[] = {30,0,0,0,10};
	int ss[] = {30,0,3,0,0};
	int test_num = 5;
	int totSec = 0;
	for (int i = 0; i < test_num; i++) {
		totSec = 0;
		secs(&totSec,hours[i], mins[i], ss[i]);
		printf("---test_num_%d---\n", i + 1);
		printf("%d hours %d minutes %d seconds --> %d seconds\n", hours[i], mins[i], ss[i], totSec);
	}


	return 0;
}
void secs(int *totSec,int hours, int mins, int ss) {
	
	*totSec += hours * 3600;
	*totSec += mins * 60;
	*totSec += ss;

	
}



