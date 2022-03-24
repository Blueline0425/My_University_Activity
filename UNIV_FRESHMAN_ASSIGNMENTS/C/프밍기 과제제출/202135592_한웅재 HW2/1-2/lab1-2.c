#include <stdio.h>
void main()
{
    int i[5],k,nine_s=0;
    do {
        printf("write integer(5 digits or fewer) : ");
        scanf_s("%d", &k);
    } while (k > 99999);
    i[0] = k / 10000;
    i[1] = k / 1000-10*i[0];
    i[2] = k / 100-100*i[0] - 10*i[1];
    i[3] = k / 10 - 1000*i[0] - 100*i[1] - 10*i[2];
    i[4] = k / 1 - 10000*i[0] - 1000*i[1] - 100*i[2] - 10*i[3];
    
    for (int j = 0; j < 5; j++)
    {
        if (i[j] == 9)
        {
            nine_s++;
        }

    }
    printf("The number of 9 is %d\n", nine_s);
}