#include <stdio.h>
void main()
{  //¼·¾¾->È­¾¾ F=C*1.8+32
    //È­¾¾->¼·¾¾ C=(F-32)/1.8
    printf("        ¡ÆC |¡ÆF\n");
    for (float i = 30; i <= 50; i++)
    {
        printf("%f¡ÆC|%f¡ÆF\n",i ,i*1.8+32);

    }
}