#include <stdio.h>
#include <string.h>
int main(void)
{
	
	char s[1000001];
	int s2[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    scanf("%s", s);
	int longc=strlen(s);
	for (int i = 0; i < longc; i++)
		for (int k = 0; k < 26; k++)
			if (s[i] == 'A' + (char)k ||s[i] == 'a' + (char)k)
				 s2[k]++;
			
	
	int maxnum = 0;
	int max = -1;
	for (int j = 0; j < 26; j++)
	{
		if (s2[j] > max)
		{
			max = s2[j];
			maxnum = j;
		}
	}

	for (int n = 0; n < 26; n++)
	{
		if (s2[n] == max)
		{
			if (maxnum != n)
			{
				printf("?");
				break;
			}
		}
		if (n == 25)
		{
		    char ch=maxnum + 65;
			printf("%c",ch);
		}
			
	}

}
