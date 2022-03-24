#include <stdio.h>

void main()
{ 
	/*unsigned*/ char a = 202;
	printf("%d\n", a);
	/* 202=2^7+2^6+2^3+2^1 11001010 00110101 00110110  32 16 4 2*/
	
	unsigned char b = 128;
	printf("%d", b);
	/* 128=2^7 10000000 011111111 10000000 -128 */

	
	char c = -10;
	unsigned char d = c;
	printf("%d %d",c,d);
	/* 10=00001010      1's= 11110101 0111011 0  00001010  11110101   1111011 0   2 4 16 32 64   2 4 16 32 64 128
	
	  -10=11110110
	  +
	   10=00001010
	   -----------          
	      00000000    
	
	
	
	
	*/

	
	int k, r, l;

	printf("plz write 3 intergers :");
	scanf_s("%d %d %d", &k, &r, &l);

	if (k > r && r >l)
	{
		printf("%d is the biggiest", k);

	}
	
	else
	{
		printf("%d is not the  biggest number\n", k);
	}

	int n1, n2, n3;
    
	printf("plz write two integers :");
	scanf_s("%d %d",&n1,&n2);

	if (n2 / n1 == 2 || n1/n2==2)
	{
		n3 = n1 + n2;
		printf("%d", n3);
	}
	else
	{
		printf("condition not satisfied");
	}




}
