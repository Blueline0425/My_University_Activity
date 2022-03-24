#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int get_pay(int hours, int day_rate, int hour_rate);
void main() {
	int i = 1;
	int hours, day_rate=0, hour_rate=0;
	int p = 0;
	while (i)
	{
		printf("근로 시간은? (종료시 -1) : ");
		scanf_s("%d", &i);
		if (i >= 0) {
			hours = i;
			i = 1;
			p=get_pay(hours,day_rate,hour_rate);
			printf("오늘의 임금은 %d원\n\n", p);
		}
		else {
			i = 0;
			printf("프로그램을 종료합니다.");
		}
		
		
	}
}
int get_pay(int hours,int day_rate,int hour_rate) {
	if (hours >= 8) {
		day_rate++;
		hour_rate = hours - 8;
	}
	else {
		hour_rate = hours;
	}
	return (day_rate * 100000 + hour_rate * 10000);
}


