#include <stdio.h>
int main()
{
	int arr[10];
	int num[42] = {0,};
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] %= 42;

	}
	int f = 0;
	for (int k = 0; k < 42; k++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[j] == k)
			{
				num[k]++;
			}

		}
		if (num[k] > 0)
			f++;

		


		
	}
	printf("%d", f);
  return 0;
}
