// guess.c —— 猜 1~100 之间的随机数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secret, guess, tries = 0;

    /* 初始化随机数种子 */
    srand((unsigned)time(NULL));
    secret = rand() % 100 + 1;   // 1~100

    printf("我已经想好了一个 1~100 之间的整数，请你来猜！\n");

    while (1) {
        printf("请输入你的猜测：");
        if (scanf("%d", &guess) != 1) {   // 防止输入非数字
            printf("请输入整数！\n");
            while (getchar() != '\n');    // 清空输入缓冲区
            continue;
        }

        tries++;
        if (guess < secret) {
            printf("太小了！\n");
        }
        else if (guess > secret) {
            printf("太大了！\n");
        }
        
        }
    }

    return 0;
}
