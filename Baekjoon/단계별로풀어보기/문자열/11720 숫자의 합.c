#include <stdio.h>
int main()
{
    int n,k=0, num, sum = 0;

	scanf("%d\n", &n);//n은 불러올 수의 크기

	while ( (num = getchar() ) != '\n')
	{
		if (k == n)
			break;
		sum += num - '0';
		k++;
	}
	printf("%d", sum);
  return 0;
}
