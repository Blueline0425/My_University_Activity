#include <stdio.h>
void main()
{
	
	int age = 20;
	int birthyear = 2002;

	int	StudentID;
	float height;


	float k;
	float l;
	scanf("%f %f", &k, &l);
	float sum = k * l;
	float sub = k / l;

	printf("\n곱 : %f \n 분 : %f\n", sum,sub);
	

	//50= 4*12+2
	int r;
	int t;
	
	scanf("%d %d", &r, &t);
	int hab = r + t;
	int cha = r - t;
	int gob = r * t;
	int bun = r / t;
	int namuji = r % t  ;
	
	printf("합 :%d 차: %d 곱:%d 분: %d 나머지: %d\n", hab, cha, gob, bun, namuji);

	
	
	int A;
	int B;
	int C;

	printf("A:");
	scanf("%d", &A);
	printf("B:");
	scanf("%d", &B);
	printf("C:");
	scanf("%d", &C);


	int first = (A + B) % C;
	int second = (A % C + B % C) % C;

	printf("\n%d\n%d\n", first, second);




	printf("*\n**\n***\n****\n*****\n");













	printf("키: ");
	scanf("%f", &height);
	printf("키: %.1fcm\n", height);


	printf("학번 : ");
	scanf("%d", &StudentID);
	printf("학번 : %d\n", StudentID);

	printf("한웅재\n");
	printf("가천대학교 소프트웨어학과에 재학중\n");
	printf("%d살이며 %d년생\n",age,birthyear);

	



	int a = 3;
	char bbb = 'B';
	float pi = 3.14159;

	




	float  f = 3.1415926535897932384626f;

	printf("%0.900f\n", f);


	double d = 3.1415926535897932384626;

	printf("%f\n", d);


	char ch = 'A';

	printf("문자일 때=%c, 정수일 때 =%d\n", ch, ch);

	int value = ch + 70;

	printf("value=%d\n", value);

	enum {EAST, WEST, SOUTH, NORTH}mark;

	

	















}



