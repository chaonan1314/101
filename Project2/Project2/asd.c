// guess.c ���� �� 1~100 ֮��������
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secret, guess, tries = 0;

    /* ��ʼ����������� */
    srand((unsigned)time(NULL));
    secret = rand() % 100 + 1;   // 1~100

    printf("���Ѿ������һ�� 1~100 ֮����������������£�\n");

    while (1) {
        printf("��������Ĳ²⣺");
        if (scanf("%d", &guess) != 1) {   // ��ֹ���������
            prin
                printf("̫���ˣ�\n");
        }

    }
}

return 0;