#define _CRT_SECURE_NO_WARNINGS// or scanf_s
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void main() {
    int age;
    for (int i = 0; i < 4; i++) {
        printf("\n���̸� �Է��Ͻÿ�:");
        scanf_s("%d", &age);
        if (age <= 18) {
            printf("û�ҳ� ����Դϴ�.\n");
        }
        else {
            if (age < 65) {
                printf("���� ����Դϴ�.\n");
            }
            else {
                printf("��ο�� ����Դϴ�.\n");
            }
        }
    }

}


