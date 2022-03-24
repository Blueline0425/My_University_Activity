#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main() {
    int x, y;
    char op;
    for (int i = 0; i < 5; i++) {
        printf("\n수식을 입력하시오(예: 2 + 5)\n>>");
        scanf_s("%d %c %d",&x,&op,1,&y);
        switch (op)
        {
        case'+':
            printf("%d + %d = %d\n", x, y, x + y);
            break;
        case'-':printf("%d - %d = %d\n", x, y, x - y);
            break;
        case'*':printf("%d * %d = %d\n", x, y, x * y);
            break;
        case'/':printf("%d / %d = %d\n", x, y, x / y);
            break;

        default:printf("지원되지 않는 연산자입니다.");
            break;
        }
    }
}


