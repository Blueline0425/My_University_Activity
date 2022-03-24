#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main() {
    int age;
    for (int i = 0; i < 4; i++) {
        printf("\n나이를 입력하시오:");
        scanf_s("%d", &age);
        if (age <= 18) {
            printf("청소년 요금입니다.\n");
        }
        else {
            if (age < 65) {
                printf("성인 요금입니다.\n");
            }
            else {
                printf("경로우대 요금입니다.\n");
            }
        }
    }

}


