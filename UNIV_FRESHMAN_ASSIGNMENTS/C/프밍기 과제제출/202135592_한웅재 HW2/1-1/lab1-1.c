#include <stdio.h>
void main()
{
    float working_time=0,over_working=0,hourly_wage=0,salary=0;

    do
    {
        printf("Enter # of hours worked (-1 to end): ");
        scanf_s("%f", &working_time);
        if (working_time == -1)
        {
            break;
        }
        printf("Enter hourly rate of the worker  ($00.00) : ");
        scanf_s("%f", &hourly_wage);
        
        if (working_time > 40)
        {
            over_working = working_time - 40;
            salary = working_time * hourly_wage + over_working * hourly_wage * 0.5;

        }
        else if (working_time <= 40)
        {
            salary = working_time * hourly_wage;

        }
        printf("Salary is $%f\n", salary);

    } while (1);
     
}