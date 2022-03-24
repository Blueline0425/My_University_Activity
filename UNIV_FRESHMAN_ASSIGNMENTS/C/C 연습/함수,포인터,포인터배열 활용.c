#define _CRT_SECURE_NO_WARNINGS//매우중요 or scanf_s사용
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//#include <time.h>
void copy(char[],char[]);
void reverse(char[]);
void main() {
	char* months[13] = { "","January","February","March",  "April","May","June","July","August","September",  "October","November","December" };  int m;//integermonth  
	int d;//integerday  
	int y;//integeryear  
	printf("%s","Enteradateintheform mm/dd/yyyy:");  scanf("%d/%d/%d",&m,&d,&y);  printf("The date is: %s %d,%d\n",months[m],d,y);
	char a[100];
	char b[] = "university";
	copy(&a, &b);
	printf("%s\n", a);
	reverse(a);

	char c1 = 'A';
	char* cp = NULL;
	char** cpp = NULL;
	cp = &c1;
	cpp = &cp;
	printf("%c %p %p \n", c1, cp, cpp);
	printf("%p %p %p\n", &c1, &cp, &cpp);
	printf("%c %c %c\n", c1, *cp, **cpp);

}
void copy(char* a, char* b) {
	int i = 0;
	for ( i = 0; i < strlen(b); i++)
		*(a + i) = *(b + i);
	*(a + i) = '\0';

}
void reverse(char* a) {
	int size = strlen(a);
	int i = 0;
	char c[100];
	for (i = 0; i < size; i++) {
		c[i] = *(a + size-i-1);
	}
	c[i] = '\0';
	printf("%s\n", c);
}

