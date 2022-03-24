#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int word_count(char text[]) 
{
	char prev, cur;
	int cnt = 0;
	int i = 0;

	prev = ' ';
	cur = text[i];
	while (text[i] != '\0')
	{
		cur = text[i];
		if (prev!=' ' && cur == ' ')
		{
			cnt++;
		}

		prev = cur;
		i++;
	}

	if (cur != ' ')
	{
		cnt++;
	}


	return cnt;

}


int main() {

	int count;
	char test1[] = "Hello World!";//2

	count=word_count(test1);
	printf("word_count(%s)  :  %d\n", test1,count);

	char test2[] = "Hello     World!";//2

	count = word_count(test2);
	printf("word_count(%s)  :  %d\n", test2, count);

	return 0;
}





