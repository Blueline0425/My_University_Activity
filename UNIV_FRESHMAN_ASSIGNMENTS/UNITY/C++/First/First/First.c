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

	printf("\n�� : %f \n �� : %f\n", sum,sub);
	

	//50= 4*12+2
	int r;
	int t;
	
	scanf("%d %d", &r, &t);
	int hab = r + t;
	int cha = r - t;
	int gob = r * t;
	int bun = r / t;
	int namuji = r % t  ;
	
	printf("�� :%d ��: %d ��:%d ��: %d ������: %d\n", hab, cha, gob, bun, namuji);

	
	
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













	printf("Ű: ");
	scanf("%f", &height);
	printf("Ű: %.1fcm\n", height);


	printf("�й� : ");
	scanf("%d", &StudentID);
	printf("�й� : %d\n", StudentID);

	printf("�ѿ���\n");
	printf("��õ���б� ����Ʈ�����а��� ������\n");
	printf("%d���̸� %d���\n",age,birthyear);

	



	int a = 3;
	char bbb = 'B';
	float pi = 3.14159;

	




	float  f = 3.1415926535897932384626f;

	printf("%0.900f\n", f);


	double d = 3.1415926535897932384626;

	printf("%f\n", d);


	char ch = 'A';

	printf("������ ��=%c, ������ �� =%d\n", ch, ch);

	int value = ch + 70;

	printf("value=%d\n", value);

	enum {EAST, WEST, SOUTH, NORTH}mark;

	

	















}



