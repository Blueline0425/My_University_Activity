#include <stdio.h>
#include <string.h>
int main()
{
	char S[20];
	int T, R;
	scanf("%d",&T);
	for (int i = 0;i < T; i++)
	{

		scanf("%d",&R);
		scanf("%s", S);
		for (int j = 0; j < strlen(S); j++)
		{
			for (int k = 0; k < R; k++)
				printf("%c", S[j]);
            if (j == strlen(S) - 1)
				printf("\n");

		}



	}
  return 0;
}
