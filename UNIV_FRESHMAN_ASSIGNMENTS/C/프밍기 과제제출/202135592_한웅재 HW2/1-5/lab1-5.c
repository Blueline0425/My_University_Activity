#include <stdio.h>
void main()
{
    
    for (int i = 1; i <= 127; i++)
    {
        if (i % 10 == 0)
        {
            printf("\n");
        }
        printf("%c", i);
    }

}