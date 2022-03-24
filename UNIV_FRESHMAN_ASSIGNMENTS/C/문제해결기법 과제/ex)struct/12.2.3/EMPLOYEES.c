#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

struct EMPLOYEES
{
	int ID;
	char last_name[20];
	float pay_rate;
	float hours_worked;
}employees[6] = {
	{3462,"Jones",4.62,40.0},
	{6793,"Robbins",5.83,38.5},
	{6985,"Smith",5.22,45.5},
	{7834,"Swain",6.89,40.0},
	{8867,"Timmins",6.43,35.5},
	{9002,"Williams",4.75 ,42.0}
};

int main() {

	float total_gross_pay = 0;
	printf("------payroll_report------\n");
	for (int i = 0; i < 6; i++) 
	{
		
		printf("NAME: %s  NUM: %d  GROSS_PAY:  %f\n", employees[i].last_name, employees[i].ID, employees[i].pay_rate * employees[i].hours_worked);
		total_gross_pay += employees[i].pay_rate * employees[i].hours_worked;


	}
	printf("\n\n TOTAL_GROSS_PAY : %f", total_gross_pay);

	return 0;
}