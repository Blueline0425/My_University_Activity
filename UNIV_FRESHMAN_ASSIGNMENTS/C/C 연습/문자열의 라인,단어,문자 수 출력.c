
#include <stdio.h>
#include <string.h>
void main()
{
	char str[100];
	int i = 0,d=0 ,l=0,w=0;
	

	while ( (str[i] = getchar()) != EOF)
	{
		if (str[i] == '\n')
		{
			
			l++;
		}
		



		i++;
		d++;
	}
	for (int k = 0; k < i; k++)
	{
		if (str[k] != ' '&&str[k+1]==' '||str[k+1]=='\n')
		{
			w++;
		}


	}
	str[i] = '\0';
	puts(str);
	printf("\n���� ��: %d\n",l);
	printf("�ܾ� ��: %d\n", w);
	printf("���� ��: %d\n", d - 1);
	//printf("%s", str);
}
