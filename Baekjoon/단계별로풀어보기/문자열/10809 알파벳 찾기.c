#include <stdio.h>
#include <string.h>
int main()
{
	char arr[100];
	scanf("%s",arr);
	
	for (int k = 0; k < 26; k++)
	{
		int x = 0;
		int i = 0;
		int j = 0;
		while(i!=strlen(arr))
		{
			
			
				if ((int)arr[i] == k + 97)
				{
					if (x == 0)
						j = i;
					x++;
				}
				
				i++;
		}

		if (x > 0)
		{
			printf("%d ", j);
		}
		else if (x == 0)
			printf("-1 ");
	}
  return 0;
}
