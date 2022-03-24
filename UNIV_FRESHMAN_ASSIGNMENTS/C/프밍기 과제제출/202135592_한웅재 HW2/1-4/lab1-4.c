#include <stdio.h>
void main()
{
    int a;
    for (int i = 2; i <= 100; i++)
    {
        a = 0;
        for (int j = 1; j <= 100; j++)
        {
            if (i % j == 0)
            {
                a++;

            }
            if (j == 100)
            {
                if (a == 2)
                {
                    printf("PRIME NUMBER : %d\n", i);
                }
            }
        }

    }

}