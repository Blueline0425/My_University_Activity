#include <stdio.h>
void main()
{  //����->ȭ�� F=C*1.8+32
    //ȭ��->���� C=(F-32)/1.8
    printf("        ��C |��F\n");
    for (float i = 30; i <= 50; i++)
    {
        printf("%f��C|%f��F\n",i ,i*1.8+32);

    }
}